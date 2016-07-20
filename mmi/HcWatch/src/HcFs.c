#include "MMI_include.h"
#include "HcWatchDefine.h"
#include "HcFs.h"

#include "common_nvram_editor_data_item.h"
#include "nvram_common_defs.h"

hc_fs_ud2_cache_struck g_ud2_cache_cntx;
hc_fs_epo_cache g_epo_cache_cntx;

#if defined(__HC_SENSOR__)
extern nvram_ef_hc_sensor_cntx_struck g_sensor_cntx;
#endif


S32 hc_fs_get_drive_remaining_size(void)
{
	S32 ret;
	S32 remaining_size = 0;
	FS_DiskInfo diskinfo;
	U8 drive[32];
	
	kal_wsprintf((U16*) drive, "%c:\\", SRV_FMGR_PUBLIC_DRV);
	//kal_prompt_trace(MOD_BT,"drive: %s", drive);
    ret = FS_GetDevStatus(SRV_FMGR_PUBLIC_DRV, FS_FEATURE_STATE_ENUM);
    if (ret < FS_NO_ERROR)
    {
        kal_prompt_trace(MOD_BT,"m_drive status error!");
    }
    else
    {
        ret = FS_GetDiskInfo((U16*) drive, &diskinfo, FS_DI_BASIC_INFO | FS_DI_FREE_SPACE);
        if (ret >= FS_NO_ERROR)
        {
            remaining_size = diskinfo.FreeClusters * diskinfo.SectorsPerCluster * diskinfo.BytesPerSector;
			//kal_prompt_trace(MOD_BT,"diskinfo.FreeClusters %d", diskinfo.FreeClusters);
			//kal_prompt_trace(MOD_BT,"diskinfo.SectorsPerCluster %d", diskinfo.SectorsPerCluster);
			//kal_prompt_trace(MOD_BT,"diskinfo.BytesPerSector %d", diskinfo.BytesPerSector);
            kal_prompt_trace(MOD_BT,"remindsize %d", remaining_size);
        }
        else
        {
            remaining_size = 0;
        }
    }

	return remaining_size;
}

MMI_BOOL hc_fs_check_folder(U16 *filepath)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 result;
    S32 attribut;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    attribut = FS_GetAttributes(filepath);
    if (((FS_ATTR_DIR & attribut) == 0) || attribut < 0)
    {
        result = FS_CreateDir(filepath);
        if (result < 0)
        {
            if (result == FS_MEDIA_CHANGED)
            {
                mmi_popup_display_ext(STR_GLOBAL_INSERT_MEMORY_CARD, MMI_EVENT_FAILURE, NULL);
			}
            else
            {
                /* Only show popup if happened due to some other error, not due to drive not present */
                if(srv_fmgr_drv_is_accessible((U8)SRV_FMGR_PUBLIC_DRV) != MMI_FALSE)
                {
                    mmi_popup_display_ext(srv_fmgr_fs_error_get_string(result),
                        (mmi_event_notify_enum)srv_fmgr_fs_error_get_popup_type(result),
                        NULL);
                }
            }
            return MMI_FALSE;
        }
    }
    return MMI_TRUE;
}

void hc_fs_delete_all_photo(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	S32 h = -1; /* save temp. file handle for find */
	FS_DOSDirEntry info;
	WCHAR path[HC_PATH_BUFFER_SIZE];
	WCHAR filename[HC_PATH_BUFFER_SIZE];
	WCHAR wildcard[8];

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	memset(path, 0, sizeof(path));
	memset(filename, 0, sizeof(filename));
	memset(wildcard, 0, sizeof(wildcard));
	
	kal_wsprintf(wildcard, "*.jpg");
	kal_wsprintf(path, "%c%w", SRV_FMGR_PUBLIC_DRV, L":\\Photos\\");
	mmi_wcscat(path, wildcard);
	h = FS_FindFirst(path, 0, 0, &info, filename, HC_PATH_BUFFER_SIZE);
	if (h < 0)
	{
		return;
	}
	do
	{
		/* filter out folder results */
		if (!(info.Attributes & FS_ATTR_DIR))
		{
			memset(path, 0, sizeof(path));
			kal_wsprintf(path, "%c%w", SRV_FMGR_PUBLIC_DRV, L":\\Photos\\");
			mmi_wcscat(path, filename);
			FS_Delete(path);
			memset(filename, 0, sizeof(filename));
		}
	} while (FS_FindNext(h, &info, filename, HC_PATH_BUFFER_SIZE) == FS_NO_ERROR);
	FS_FindClose(h);
	return;
}

S32 hc_fs_ud2_write_cache(U8 *data, U32 data_size)
{
	S32 ret = -1;
	S32 fd = -1;
	U32 write_size;
	S16 error;

	if (!g_ud2_cache_cntx.Cache_en)
	{
		kal_prompt_trace(MOD_BT,"[debug] ud2 cache disable");
		return ret;
	}
	
	fd = FS_Open(g_ud2_cache_cntx.cache_filepath, FS_READ_WRITE);
	if (fd >= FS_NO_ERROR)
	{
		//FS_Seek(fd, 0, SEEK_END);
		//ret = FS_Write(fd, data, data_size, &write_size );		
		//FS_Close(fd);
		kal_prompt_trace(MOD_BT,"hc_fs_ud2_write_cache index=%d %s", g_ud2_cache_cntx.wIndex,  data );
		
		FS_Seek(fd, g_ud2_cache_cntx.wIndex * UD2_CACHE_SIZE, SEEK_SET);
		ret = FS_Write(fd, data, data_size, &write_size );
		FS_Close(fd);

		if ((ret == FS_NO_ERROR) && (data_size == write_size))
		{
			g_ud2_cache_cntx.wIndex++;
			if (g_ud2_cache_cntx.wIndex == UD2_CACHE_MAX)
			{
				g_ud2_cache_cntx.wIndex = 0;
			}

			g_sensor_cntx.wIndex = g_ud2_cache_cntx.wIndex ;
			WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
	
			return write_size;
		} 
	}

	return ret;
}

S32 hc_fs_ud2_read_cache(U8 *rbuff, U32 buff_size) // , U8 index
{
	S32 ret = -1;
	S32 fd = -1;
	U32 read_size = 0;
	S16 error;
	
	kal_prompt_trace(MOD_BT,"hc_fs_ud2_read_cache entry");

	if (!g_ud2_cache_cntx.Cache_en)
	{
		kal_prompt_trace(MOD_BT,"[debug] ud2 cache disable");
		return ret;
	}

	fd = FS_Open(g_ud2_cache_cntx.cache_filepath, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		FS_Seek(fd, g_ud2_cache_cntx.rIndex * UD2_CACHE_SIZE, SEEK_SET);
		ret = FS_Read(fd, rbuff, UD2_CACHE_SIZE, &read_size);
		kal_prompt_trace(MOD_BT,"hc_fs_ud2_read_cache index=%d ret=%d size=%d", g_ud2_cache_cntx.rIndex, ret, read_size);
		FS_Close(fd);

		if (ret == FS_NO_ERROR)
		{
			if(UD2_CACHE_SIZE==read_size){
				//g_ud2_cache_cntx.redIndex[g_ud2_cache_cntx.rIndex] = 1;
				g_ud2_cache_cntx.rIndex++;
				g_sensor_cntx.rIndex = g_ud2_cache_cntx.rIndex;
				WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
			}
			
			return read_size;
		}
	}

	g_ud2_cache_cntx.rIndex = 0;
	g_sensor_cntx.rIndex = 0;
	WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
	return ret;
}

/*
void hc_set_read_cache_index(MMI_BOOL isOK){
	S16 error;
	
	if (MMI_TRUE== isOK)
	{
		g_ud2_cache_cntx.rIndex++;
		WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
	}

	//g_ud2_cache_cntx.rIndex = 0;
	//g_sensor_cntx.rIndex = 0;
	//WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);

	g_ud2_cache_cntx.rIndex = 0;
	g_sensor_cntx.rIndex = 0;
	WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
}
*/

S32 hc_fs_ud2_recreate_cache(void)
{
	S32 ret = -1;
	FS_HANDLE fd = -1;
	S16 error;
	//U8 i = 0;
	
	if (!g_ud2_cache_cntx.Cache_en)
	{
		kal_prompt_trace(MOD_BT,"[debug] ud2 cache disable");
		return -1;
	}

	fd = FS_Delete((U16 *)g_ud2_cache_cntx.cache_filepath);
	if (fd < 0)
	{
		kal_prompt_trace(MOD_BT,"[debug] ud2 cache delete failed");
		return -2;
	}

	fd = FS_Open(g_ud2_cache_cntx.cache_filepath, FS_CREATE | FS_READ_WRITE);
	if (fd < 0)
	{
		kal_prompt_trace(MOD_BT,"[debug] ud2 cache recreate failed");
		return -3;
	}	

	FS_Close(fd);

	g_ud2_cache_cntx.rIndex = 0;
	g_ud2_cache_cntx.wIndex = 0;
	g_sensor_cntx.rIndex = 0;
	g_sensor_cntx.wIndex = 0;

//	for(i=0;i<64;i++){
//		g_ud2_cache_cntx.redIndex[i] = 0;
//	}
	
	WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
	
	return 0;
}

MMI_BOOL hc_fs_ud2_get_cache_filepath(void)
{
	WCHAR filename[HC_PATH_BUFFER_SIZE];
	MMI_BOOL ret = MMI_FALSE;
	FS_DOSDirEntry info;
	S32 fd = -1;
	
	kal_wsprintf(g_ud2_cache_cntx.cache_filepath, "%c%w", SRV_FMGR_PUBLIC_DRV, HC_CACHE_PATH);
	if (hc_fs_check_folder(g_ud2_cache_cntx.cache_filepath))
	{
		kal_wstrcat(g_ud2_cache_cntx.cache_filepath, HC_UD2_CACHE_FILENAME);
		memset(filename, 0, sizeof(filename));
		fd = FS_Open(g_ud2_cache_cntx.cache_filepath, FS_CREATE | FS_READ_WRITE);
		if (fd >= FS_NO_ERROR)
		{
			ret = MMI_TRUE;
			FS_Close(fd);
		}
	}

	return ret;
}

// it is after hc_sensor_init 
void hc_fs_ud2_cache_init(void)
{
	MMI_BOOL ret;
	
	memset(&g_ud2_cache_cntx, 0x00, sizeof(hc_fs_ud2_cache_struck));
	ret = hc_fs_ud2_get_cache_filepath();
	if (ret)
	{
		// debug ++
		S32 fd = -1;
		U32 file_size = 0;
		fd = FS_Open(g_ud2_cache_cntx.cache_filepath, FS_READ_ONLY);
		if (fd >= FS_NO_ERROR)
		{
			FS_GetFileSize(fd, &file_size);
			FS_Close(fd);
		}
//		kal_prompt_trace(MOD_BT,"[debug] ud2 cache init success, %d bytes", file_size);
		// debug --
		g_ud2_cache_cntx.Cache_en = MMI_TRUE;
		//g_ud2_cache_cntx.wIndex = 0;
		//g_ud2_cache_cntx.rIndex = 0;

		kal_prompt_trace(MOD_BT,"hc_fs_ud2_cache_init g_ud2_cache_cntx.rIndex=%d", g_sensor_cntx.rIndex);
		
		g_ud2_cache_cntx.rIndex = g_sensor_cntx.rIndex;
		g_ud2_cache_cntx.wIndex = g_sensor_cntx.wIndex;
		
	}
	else
	{
		g_ud2_cache_cntx.Cache_en = MMI_FALSE;
	}
}

void hc_fs_epo_delete_old_locaol_file(U16 *foldername)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	S32 h = -1; /* save temp. file handle for find */
	FS_DOSDirEntry info;
	WCHAR path[HC_PATH_BUFFER_SIZE];
	WCHAR filename[HC_PATH_BUFFER_SIZE];
	WCHAR wildcard[8];

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	memset(path, 0, sizeof(path));
	memset(filename, 0, sizeof(filename));
	memset(wildcard, 0, sizeof(wildcard));
	
	kal_wsprintf(wildcard, "*.EPO");
	mmi_wcscpy(path, foldername);
	mmi_wcscat(path, wildcard);
	h = FS_FindFirst(path, 0, 0, &info, filename, HC_PATH_BUFFER_SIZE);
	if (h < 0)
	{
		return;
	}
	do
	{
		/* filter out folder results */
		if (!(info.Attributes & FS_ATTR_DIR))
		{
			memset(path, 0, sizeof(path));
			mmi_wcscpy(path, foldername);
			mmi_wcscat(path, filename);
			FS_Delete(path);
			memset(filename, 0, sizeof(filename));
		}
	} while (FS_FindNext(h, &info, filename, HC_PATH_BUFFER_SIZE) == FS_NO_ERROR);
	FS_FindClose(h);
	return;
}


MMI_BOOL hc_fs_epo_check_local_file_exist(U8 *filename)
{
	U16 wFilename[32];
	U16 wFilepath[HC_PATH_BUFFER_SIZE];
	FS_HANDLE fd = -1;
	U32 file_size = 0;
	
	memset(wFilename, 0, sizeof(wFilename));
	memset(wFilepath, 0, sizeof(HC_PATH_BUFFER_SIZE));
	mmi_asc_to_wcs(wFilename, filename);
	kal_wsprintf(wFilepath, "%w%w", g_epo_cache_cntx.cache_path, wFilename);
	fd = FS_Open(wFilepath, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		kal_prompt_trace(MOD_BT,"[debug] %s exist", filename);

		FS_GetFileSize(fd , &file_size);
		 
		FS_Close(fd);
		if(file_size<18432)
		{
			return MMI_FALSE;
		}
		else
		{
			return MMI_TRUE;
		}
	}

	kal_prompt_trace(MOD_BT,"[debug] %s not exist", filename);
	hc_fs_epo_delete_old_locaol_file(g_epo_cache_cntx.cache_path);
	return MMI_FALSE;
}

void hc_fs_epo_save_local_file(U8 *filename, U8 *data, S32 len)
{
	U16 wFilename[32];
	U16 wFilepath[HC_PATH_BUFFER_SIZE];
	FS_HANDLE fd = -1;
	U32 write_size;
	S32 ret;

	memset(wFilename, 0, sizeof(wFilename));
	memset(wFilepath, 0, sizeof(HC_PATH_BUFFER_SIZE));
	mmi_asc_to_wcs(wFilename, filename);
	kal_wsprintf(wFilepath, "%w%w", g_epo_cache_cntx.cache_path, wFilename);
	fd = FS_Open(wFilepath, FS_CREATE | FS_READ_WRITE);
	if (fd >= FS_NO_ERROR)
	{
		FS_Seek(fd, 0, SEEK_END);
		ret = FS_Write(fd, data, len, &write_size );
		FS_Close(fd);		
	}
}

void hc_fs_epo_cache_init(void)
{
	MMI_BOOL ret;
	
	memset(&g_epo_cache_cntx, 0x00, sizeof(hc_fs_epo_cache));
	kal_wsprintf(g_epo_cache_cntx.cache_path, "%c%w", SRV_FMGR_PUBLIC_DRV, HC_EPO_CACHE_PATH);
	if (hc_fs_check_folder(g_epo_cache_cntx.cache_path))
	{
//		kal_prompt_trace(MOD_BT,"[debug] Epo cache init success");
	}
}

void hc_fs_init(void)
{
	hc_fs_ud2_cache_init();
	hc_fs_epo_cache_init();
}
