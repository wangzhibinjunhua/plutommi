#include "MMI_include.h"
#include "SoundRecSrvGProt.h"
#include "SoundRecorderProt.h"
#include "SndrecProt.h"
#include "MediaAppGProt.h"
#include "med_api.h"
#include "TimerEvents.h"
#include "AlertScreen.h"
#include "CommonScreensResDef.h"
#include "mmi_rp_app_uiframework_def.h"

#include "HcWatchDefine.h"
#include "HcWatchTalk.h"
#if defined(__HC_CLIENT__)
#include "HcComm.h"
#include "HcSocket.h"
#include "HcClient.h"
#endif
#include "HcLed.h"


extern mmi_sndrec_cntx g_sndrec_cntx;

hctalk_cntx g_hctalk_cntx;
hc_talk_unread_struct g_talk_unread = {0};

void hc_tkq_timer_start(void);
void hc_tkq_timer_stop(void);
void hc_talk_confirm_display(void);
void hc_tk_upload_start(void);
MMI_BOOL hc_scan_ud_folder(void);
void hc_scan_dl_folder(void);


void hc_get_drive_size(void)
{
	S32 ret;
	FS_DiskInfo diskinfo;
	U8 drive[32];
	
	kal_wsprintf((U16*) drive, "%c:\\", g_hctalk_cntx.drive);
	//kal_prompt_trace(MOD_BT,"drive: %s", drive);
    ret = FS_GetDevStatus(g_hctalk_cntx.drive, FS_FEATURE_STATE_ENUM);
    if (ret < FS_NO_ERROR)
    {
        kal_prompt_trace(MOD_BT,"m_drive status error!");
    }
    else
    {
        ret = FS_GetDiskInfo((U16*) drive, &diskinfo, FS_DI_BASIC_INFO | FS_DI_FREE_SPACE);
        if (ret >= FS_NO_ERROR)
        {
            g_hctalk_cntx.remindsize = diskinfo.FreeClusters * diskinfo.SectorsPerCluster * diskinfo.BytesPerSector;
			//kal_prompt_trace(MOD_BT,"diskinfo.FreeClusters %d", diskinfo.FreeClusters);
			//kal_prompt_trace(MOD_BT,"diskinfo.SectorsPerCluster %d", diskinfo.SectorsPerCluster);
			//kal_prompt_trace(MOD_BT,"diskinfo.BytesPerSector %d", diskinfo.BytesPerSector);
            kal_prompt_trace(MOD_BT,"remindsize %d", g_hctalk_cntx.remindsize);
        }
        else
        {
            g_hctalk_cntx.remindsize = 0;
        }
    }	
}

void hc_get_filepath()
{
	kal_wsprintf((WCHAR*) g_hctalk_cntx.udpath, "%c%w", g_hctalk_cntx.drive, HCTALK_UD_PATH);
	kal_wsprintf((WCHAR*) g_hctalk_cntx.dlpath, "%c%w", g_hctalk_cntx.drive, HCTALK_DL_PATH);
	if (!hc_fs_check_folder(g_hctalk_cntx.udpath))
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Upload path error");
	}
	
	if (!hc_fs_check_folder((WCHAR*) g_hctalk_cntx.dlpath))
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Download path error");
	}
}

void hc_tk_dl_timeout_hdlr(void)
{
	CHAR cont[8];
	CHAR send_data[48];
	U32 send_size;	

	if (g_hctalk_cntx.dl_state == hc_tk_download_wait)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Download timeout");
		g_hctalk_cntx.dl_state = hc_tk_download_idle;
//		memset(cont, 0, sizeof(cont));
//		memset(send_data, 0, sizeof(send_data));
//		sprintf(cont, "%s,2", HC_PROTL_TK);
//		send_size = hc_make_send_data(send_data, cont, strlen(cont));
//		kal_prompt_trace(MOD_BT,"[hc talk] Download timeout %s", send_data);
//		hc_client_send(send_data, send_size);	
	}
}

void hc_tk_dl_hdlr(U8 *pbuf, U32 len)
{
	FS_HANDLE fd = -1;
	S32 error_code = 0;
	CHAR *p1 = NULL;
	CHAR *p2 = NULL;
	CHAR *temp = NULL;
	S32 offset;
	CHAR filename[32];
	CHAR number_str[8];
	
	U32 curr_pack = 0;
	U32 total_pack = 0;
	
	U32 data_size = 0;
	U32 write_size;
	S32 fs_result = FS_NO_ERROR;
	CHAR cont[8];
	CHAR send_data[48];
	U32 send_size;

	S32 remaining_size;
	

	StopTimer(HC_TK_DL_TIMEOUT_TIMER);
	g_hctalk_cntx.dl_state = hc_tk_downloading;

//	remaining_size = hc_fs_get_drive_remaining_size();
//	if (remaining_size < len)
//	{
//		error_code = -6;
//		goto error;
//	}
	
	p1 = pbuf;
	p2 = strchr(p1, HC_CONTENT_SEPARTOR);
	if (p2 == NULL)
	{
		error_code = -1;
		goto error;
	}
	else
	{
		offset = p2 - p1;
		if (offset >= sizeof(filename))
		{
			error_code = -11;
			goto error;
		}
		else
		{
			if (offset <= 0)
			{
				error_code = -12;
				goto error;			
			}
			else
			{
				memset(filename, 0, sizeof(filename));
				strncpy(filename, p1, offset);
			}
		}
	}

	kal_prompt_trace(MOD_BT,"[hc talk] filename: %s", filename);

	p1 = p2 + 1;
	p2 = strchr(p1, HC_CONTENT_SEPARTOR);
	if (p2 == NULL)
	{
		error_code = -2;
		goto error;
	}
	else
	{
		offset = p2 - p1;
		if (offset >= sizeof(number_str))
		{
			error_code = -21;
			goto error;
		}
		else
		{
			if (offset <= 0)
			{
				error_code = -22;
				goto error;			
			}
			else
			{
				memset(number_str, 0, sizeof(number_str));
				strncpy(number_str, p1, offset);
				sscanf(number_str, "%d", &curr_pack);
				if (curr_pack == 0)
				{
					error_code = -23;
					goto error; 
				}
			}
		}
	}	

	kal_prompt_trace(MOD_BT,"[hc talk] curr_pack: %d", curr_pack);

	p1 = p2 + 1;
	p2 = strchr(p1, HC_CONTENT_SEPARTOR);
	if (p2 == NULL)
	{
		error_code = -3;
		goto error;
	}
	else
	{
		offset = p2 - p1;
		if (offset >= sizeof(number_str))
		{
			error_code = -31;
			goto error;
		}
		else
		{
			if (offset <= 0)
			{
				error_code = -32;
				goto error;			
			}
			else
			{
				memset(number_str, 0, sizeof(number_str));
				strncpy(number_str, p1, offset);
				sscanf(number_str, "%d", &total_pack);
				if (total_pack == 0)
				{
					error_code = -33;
					goto error; 
				}
			}
		}
	}	

	kal_prompt_trace(MOD_BT,"[hc talk] total_pack: %d", total_pack);
	
	p1 = p2 + 1;
	data_size = len - (p1 - pbuf);

	temp = (CHAR*) hc_alloc_mem(sizeof(filename)*2);
	if (!temp)
	{
		error_code = -4;
		goto error;
	}

	mmi_asc_to_ucs2((CHAR*) temp, (CHAR*) filename);
	memset(g_hctalk_cntx.dl_filepath, 0, SRV_FMGR_PATH_BUFFER_SIZE);
	mmi_ucs2cpy((CHAR*) g_hctalk_cntx.dl_filepath, (CHAR*) g_hctalk_cntx.dlpath);
	mmi_ucs2cat((CHAR*) g_hctalk_cntx.dl_filepath, (CHAR*) temp);
	mmi_ucs2cat((CHAR*) g_hctalk_cntx.dl_filepath, (CHAR*) L".temp");
		
	fd = FS_Open((const WCHAR*)g_hctalk_cntx.dl_filepath, FS_CREATE | FS_READ_WRITE);
	if (fd >= FS_NO_ERROR)
	{
		FS_Seek(fd, 0, SEEK_END);
		fs_result = FS_Write(fd, p1, data_size, &write_size );
		FS_Close(fd);

		if (curr_pack == total_pack)
		{
			CHAR *newName;

			newName = (CHAR*) hc_alloc_mem(SRV_FMGR_PATH_BUFFER_SIZE);
			if (!newName)
			{
				FS_Delete((const WCHAR*)g_hctalk_cntx.dl_filepath);
				error_code = -5;
				goto error;
			}

			mmi_ucs2cpy((CHAR*) newName, (CHAR*) g_hctalk_cntx.dlpath);
			mmi_ucs2cat((CHAR*) newName, (CHAR*) temp);
			
			FS_Rename((const WCHAR*)g_hctalk_cntx.dl_filepath, (const WCHAR*) newName);

			hc_free_mem(newName);
			memset(g_hctalk_cntx.dl_filepath, 0, SRV_FMGR_PATH_BUFFER_SIZE);
			
			hc_scan_dl_folder();
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_UPDATE_IDLESCREEN_REQ, NULL);
		}		
	}
	else
	{
		error_code = -6;
		goto error;		
	}

	hc_free_mem(temp);
	remaining_size = hc_fs_get_drive_remaining_size();
	
	memset(cont, 0, sizeof(cont));
	memset(send_data, 0, sizeof(send_data));

	if (remaining_size > 50*1024)
	{
		sprintf(cont, "%s,1", HC_PROTL_TK);
		g_hctalk_cntx.dl_state = hc_tk_download_wait;
		StartTimer(HC_TK_DL_TIMEOUT_TIMER, g_hctalk_cntx.timeout, hc_tk_dl_timeout_hdlr);
	}
	else
	{
		sprintf(cont, "%s,2", HC_PROTL_TK);
		g_hctalk_cntx.dl_state = hc_tk_download_idle;
	}

	send_size = hc_make_send_data(send_data, cont, strlen(cont));
	hc_client_send(send_data, send_size);
	
	return;
	
error:

	hc_free_mem(temp);
	g_hctalk_cntx.dl_state = hc_tk_download_idle;
	memset(cont, 0, sizeof(cont));
	memset(send_data, 0, sizeof(send_data));
	sprintf(cont, "%s,2", HC_PROTL_TK);
	send_size = hc_make_send_data(send_data, cont, strlen(cont));
	hc_client_send(send_data, send_size);
	kal_prompt_trace(MOD_BT,"[hc talk] Download error: %d", error_code);
	
	return;
}


void hc_tk_upload_timeout_hdlr(void)
{
	FS_HANDLE fd = -1;
	
	if (g_hctalk_cntx.upload_state == hc_tk_upload_wait)
	{
		if (g_hctalk_cntx.repeat == 0)
		{
//			kal_prompt_trace(MOD_BT,"[hc talk] Upload timeout, delete file");
//			g_hctalk_cntx.upload_state = hc_tk_upload_error;
//			fd = FS_Delete((U16 *)g_hctalk_cntx.ud_filepath);

//			if (fd < 0)
//			{
//				kal_prompt_trace(MOD_BT,"[hc talk] File delete failed");
//			}
			kal_prompt_trace(MOD_BT,"[hc talk] Upload timeout, Find next file");
			g_hctalk_cntx.upload_state = hc_tk_upload_end;
			hc_scan_ud_folder();
		}
		else
		{
			kal_prompt_trace(MOD_BT,"[hc talk] Upload timeout, retry");
			g_hctalk_cntx.upload_state = hc_tk_upload_begin;
			--g_hctalk_cntx.repeat;
			hc_tk_upload_start();
		}
		
		return;
	}
}

void hc_tk_upload_start(void)
{
	//CHAR send_data[1088];
	//CHAR cont[1088];
	U8 *send_data = NULL;
	U8 *cont = NULL;
	U32 buf_size = 1400;
	
	U32 read_size = 0;
	U32 cont_size = 0;
	U32 send_size = 0;
	S32 ret;
	FS_HANDLE fd = -1;


	if (g_hctalk_cntx.upload_state != hc_tk_upload_begin)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Upload state error, Line %d", __LINE__);
		return;
	}

	fd = FS_Open((const WCHAR*)g_hctalk_cntx.ud_filepath, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		g_hctalk_cntx.upload_state = hc_tk_uploading;

		send_data = (U8 *) hc_alloc_mem(buf_size);
		cont = (U8 *) hc_alloc_mem(buf_size);
		if (send_data == NULL || cont == NULL)
		{
			kal_prompt_trace(MOD_BT,"[hc talk] Buffer malloc failed");
//			g_hctalk_cntx.upload_state = hc_tk_upload_error;
			goto exit;
		}
		kal_prompt_trace(MOD_BT,"[hc talk] Buffer malloc ++");
		
		sprintf(cont, "%s,%s,%d,%d,", HC_PROTL_TK, g_hctalk_cntx.ud_filename, 
										g_hctalk_cntx.ud_curr_pack, g_hctalk_cntx.ud_total_pack);
		
		cont_size = strlen(cont);
		FS_Seek(fd, (g_hctalk_cntx.ud_curr_pack - 1) * HC_TK_UPLOAD_PACK_SIZE, SEEK_SET);
		if (ret = FS_Read(fd, send_data, HC_TK_UPLOAD_PACK_SIZE, &read_size) == FS_NO_ERROR && read_size != 0)
		{
//			kal_prompt_trace(MOD_BT,"[hc talk] Read_size: %d, cont_size: %d", read_size, cont_size);
			memcpy(cont + cont_size, send_data, read_size);
			cont_size += read_size;
		}

		memset(send_data, 0, buf_size);
		send_size = hc_make_send_data(send_data, cont, cont_size);
//		kal_prompt_trace(MOD_BT,"[hc talk] send_data: %s", send_data);
		hc_client_send(send_data, send_size);
		
		
	}
	else
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Open file error, Line %d", __LINE__);
//		g_hctalk_cntx.upload_state = hc_tk_upload_error;
	}
	
exit:	
	
	hc_free_mem(send_data);
	hc_free_mem(cont);
	kal_prompt_trace(MOD_BT,"[hc talk] Buffer free --");
	if (fd >= FS_NO_ERROR)
	{
		FS_Close(fd);
	}

	g_hctalk_cntx.upload_state = hc_tk_upload_wait;
	StartTimer(HC_TK_UD_TIMEOUT_TIMER, g_hctalk_cntx.timeout, hc_tk_upload_timeout_hdlr);
}

void hc_tk_upload_hdlr(U8 *pbuf, U32 len)
{
	FS_HANDLE fd = -1;
	S32 fs_result = FS_NO_ERROR;

	if (g_hctalk_cntx.upload_state != hc_tk_upload_wait)
	{
		return;
	}
	
	StopTimer(HC_TK_UD_TIMEOUT_TIMER);
	g_hctalk_cntx.repeat = 3;
	if (*pbuf == '1')
	{
		g_hctalk_cntx.upload_state = hc_tk_upload_begin;
		g_hctalk_cntx.ud_curr_pack += 1;
		
		if (g_hctalk_cntx.ud_curr_pack > g_hctalk_cntx.ud_total_pack)
		{
			kal_prompt_trace(MOD_BT,"[hc talk] File upload finish");
			g_hctalk_cntx.upload_state = hc_tk_upload_end;
			goto UD_DEL;
		}

		hc_tk_upload_start();
	}
	else
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Service set upload stop");
		g_hctalk_cntx.upload_state = hc_tk_upload_end;
		goto UD_DEL;
	}

	return;
UD_DEL:
	if (g_hctalk_cntx.upload_state == hc_tk_upload_end)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Delete file %s", g_hctalk_cntx.ud_filename);
		fd = FS_Delete((U16 *)g_hctalk_cntx.ud_filepath);	
		if (fd < 0)
		{
			kal_prompt_trace(MOD_BT,"[hc talk] File delete failed");
		}

		hc_scan_ud_folder();
	}
	
	return;		
}

S32 hc_tk_upload_init(void* msg)
{
	//WCHAR *file_path = (WCHAR *)msg;
	S32 ret;
	U32 file_size;
	S8 filepath[HC_PATH_BUFFER_SIZE] = {0};
	S8 storepath[HC_PATH_BUFFER_SIZE] = {0};
	U32 filepath_len;
	U32 storepath_len;
	FS_HANDLE fd = -1;

//	if (g_hctalk_cntx.upload_state != hc_tk_upload_idle)
//	{
//		return 0;
//	}
	if (!hc_client_ready())
	{
		g_hctalk_cntx.upload_state = hc_tk_upload_idle;
		return 0;
	}

	// get filename
	mmi_wcs_to_asc(filepath, (U16 *) g_hctalk_cntx.ud_filepath);
	mmi_wcs_to_asc(storepath, (U16 *) g_hctalk_cntx.udpath);
	filepath_len = strlen(filepath);
	storepath_len = strlen(storepath);
	memcpy(g_hctalk_cntx.ud_filename, filepath + storepath_len, filepath_len - storepath_len);
	
	fd = FS_Open((const WCHAR*)g_hctalk_cntx.ud_filepath, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		FS_GetFileSize(fd, &file_size);
		FS_Close(fd);
		
		g_hctalk_cntx.ud_total_size= file_size;
		g_hctalk_cntx.ud_total_pack= file_size/HC_TK_UPLOAD_PACK_SIZE;	
		if (file_size%HC_TK_UPLOAD_PACK_SIZE > 0)
		{
			g_hctalk_cntx.ud_total_pack += 1;
		}

		g_hctalk_cntx.repeat = 3;
		g_hctalk_cntx.ud_curr_pack = 1;
		g_hctalk_cntx.timeout = 60*1000;
		g_hctalk_cntx.upload_state = hc_tk_upload_begin;
		hc_tk_upload_start();
	}
	else
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Open file error, Line %d", __LINE__);
		g_hctalk_cntx.upload_state = hc_tk_upload_idle;
	}

	return 0;
}

static void hc_record_cb(MMI_BOOL result, S8 *file_path)
{
	#if 0
	S32 ret;
	U32 file_size;
	S8 filepath[HC_PATH_BUFFER_SIZE] = {0};
	S8 storepath[HC_PATH_BUFFER_SIZE] = {0};
	U32 filepath_len;
	U32 storepath_len;
	FS_HANDLE fd = -1;
	#endif

	//U8 *file_buf_p = NULL;
	//U8 *proc_buf_p = NULL;	

	if (!result)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Record callback error");
		return;
	}

	DisplayPopup((U8*)GetString(STR_GLOBAL_SENDING), 0, 0, 5*1000, 0);
	kal_prompt_trace(MOD_BT,"[hc talk] Record callback %d", g_hctalk_cntx.upload_state);
	if (g_hctalk_cntx.upload_state != hc_tk_upload_idle)
	{
		return;
	}
	
	memset(g_hctalk_cntx.ud_filepath, 0, sizeof(g_hctalk_cntx.ud_filepath));
	mmi_wcscpy(g_hctalk_cntx.ud_filepath, (U16 *)file_path);

	HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_TALK_UPLOAD_REQ, NULL);

	#if 0
	memset(g_hctalk_cntx.ud_filepath, 0, sizeof(g_hctalk_cntx.ud_filepath));
	mmi_wcscpy(g_hctalk_cntx.ud_filepath, (U16 *)file_path);
	
	// get filename
	mmi_wcs_to_asc(filepath, (U16 *) g_hctalk_cntx.ud_filepath);
	mmi_wcs_to_asc(storepath, (U16 *) g_hctalk_cntx.udpath);
	filepath_len = strlen(filepath);
	storepath_len = strlen(storepath);
	memcpy(g_hctalk_cntx.ud_filename, filepath + storepath_len, filepath_len - storepath_len);

	fd = FS_Open((const WCHAR*)file_path, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		FS_GetFileSize(fd, &file_size);
		FS_Close(fd);
		
		g_hctalk_cntx.ud_total_size = file_size;
		g_hctalk_cntx.ud_total_pack = file_size/HC_TK_UPLOAD_PACK_SIZE;	
		if (file_size%HC_TK_UPLOAD_PACK_SIZE > 0)
		{
			g_hctalk_cntx.ud_total_pack += 1;
		}
		
		g_hctalk_cntx.ud_curr_pack = 1;
		//g_voice_upload.timeout = 15*1000;
		g_hctalk_cntx.upload_state = hc_tk_upload_idle;
		hc_tk_upload_start();
	}
	else
	{
		kal_prompt_trace(MOD_BT,"[hc talk] file not exit");
	}
	
	//kal_prompt_trace(MOD_BT,"record file %s", file);
	//kal_prompt_trace(MOD_BT,"audio mode %d", mdi_audio_get_audio_mode());
	#endif
	#if 0
	U32 read_size = 0;
	U32 i;
	U32 snd_size = 0;
	

	fd = FS_Open((const WCHAR*)file_path, FS_READ_ONLY);
	FS_GetFileSize(fd, &file_size);
	kal_prompt_trace(MOD_BT,"file_size %d", file_size);

	if (file_size > 0)
	{
		media_get_ext_buffer(MOD_MMI, (void **)&file_buf_p, file_size);
		media_get_ext_buffer(MOD_MMI, (void **)&proc_buf_p, file_size+32);
		if (file_buf_p == NULL || proc_buf_p == NULL)
		{
			kal_prompt_trace(MOD_BT,"buffer malloc failed");
			goto exit;
		}	
		
		memset(file_buf_p, 0, file_size);
		memset(proc_buf_p, 0, file_size+32);

		//strcpy(proc_buf_p, "AP11");
		
		if (ret = FS_Read(fd, file_buf_p, file_size, &read_size) == FS_NO_ERROR && read_size != 0)
		{
		//	for(i=0; i < file_size; i++)
		//	{
		//		sprintf(proc_buf_p+4+i*2, "%02x", file_buf_p[i]);
				//kal_prompt_trace(MOD_BT,"proc_buf_p[%d] = %d", 4+i*2, proc_buf_p[4+i*2]);
				//kal_prompt_trace(MOD_BT,"proc_buf_p[%d] = %d", 4+i*2+1, proc_buf_p[4+i*2+1]);
		//	}
			kal_prompt_trace(MOD_BT,"read_size: %d", read_size);
			sprintf(proc_buf_p, "[%s*%s*%04x*%s,", HC_CUSTOMER_ID, HC_DEVICE_ID, read_size+strlen(HC_PROTL_TK)+1, HC_PROTL_TK);
			snd_size = strlen(proc_buf_p);
			memcpy(proc_buf_p+snd_size, file_buf_p, file_size);
			*(proc_buf_p+snd_size+file_size) = HC_BRACKETS_END;
			kal_prompt_trace(MOD_BT,"send data size: %d", snd_size+file_size);
			User_Socket_Send(proc_buf_p, snd_size+file_size);
			//kal_prompt_trace(MOD_BT,"proc_buf_p start: %s", proc_buf_p);
		}
		//strcat(proc_buf_p, "#");

		//read_size = strlen(proc_buf_p);
		//kal_prompt_trace(MOD_BT,"read_size: %d", read_size);
		//kal_prompt_trace(MOD_BT,"proc_buf_p end: %s", proc_buf_p+read_size-10);
		//User_Socket_Send(proc_buf_p, strlen(proc_buf_p));

	}	

	#endif		
	
	// Play Test OK
	#if 0
	fd = FS_Open((const WCHAR*)file_path, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		FS_Close(fd);
		mmi_media_app_play_audio((U16*) file_path, NULL, 0);
	}
	else
	{
		kal_prompt_trace(MOD_BT,"file not exist!" );
	}
	


exit:	
	if (file_buf_p != NULL)
	{
		media_free_ext_buffer(MOD_MMI, (void **)&file_buf_p);
	}

	if (proc_buf_p != NULL)
	{
		media_free_ext_buffer(MOD_MMI, (void **)&proc_buf_p);
	}
	
	if (fd >= 0)
	{
		FS_Close(fd);
	}
	FS_Delete((WCHAR*)file_path);
	hc_get_drive_size();
	#endif
}


void hc_record_stop(void)
{
	StopTimer(HC_SNDREC_TIMER);

	if (g_sndrec_cntx.record.state = MMI_SNDREC_REC_STATE)
	{
		//kal_prompt_trace(MOD_BT,"rec stop");
		mmi_sndrec_send_stop_req(MMI_TRUE);
	}
}


static void hc_get_record_time_timer_cb(void)
{
	U32 recorded_time;


	if (g_sndrec_cntx.record.state != MMI_SNDREC_REC_STATE)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Rec finished or failed");
		return;
	}
	
    recorded_time = mdi_audio_get_record_time();
	//kal_prompt_trace(MOD_BT,"recorded_time: %d",recorded_time);
	if (recorded_time < (15*1000))
	{
		//gui_start_timer(1000, hc_get_record_time_timer_cb);
		StartTimer(HC_SNDREC_TIMER, 1000, hc_get_record_time_timer_cb);
	}
	else
	{
		hc_record_stop();
	}
}

static void hc_get_record_time_timer(void)
{
	U32 recorded_time;
	
    //recorded_time = mdi_audio_get_record_time();
	//kal_prompt_trace(MOD_BT,"recorded_time: %d",recorded_time);
	//gui_start_timer(1000, hc_get_record_time_timer_cb);
	StartTimer(HC_SNDREC_TIMER, 1000, hc_get_record_time_timer_cb);
}

void hc_record_handle(void)
{
//	hc_get_drive_size();
	mmi_sndrec_entry_record_from_other_app(NULL, 0, 0, hc_record_cb);
	if (g_sndrec_cntx.record.state = MMI_SNDREC_REC_STATE)
	{
		hc_get_record_time_timer();
	}
}


void mmi_key_talk_hdlr(void)
{
	//RstStartRestore();

	//srv_shutdown_normal_start(0);
	//mmi_start_sleepmonitor(1);
	//mc3230_sensor_test();
	//mmi_start_pedometer(1);
	//hc_capture_no_preview();
//	kal_prompt_trace(MOD_BT,"[hc talk] state: %d", g_hctalk_cntx.upload_state);
	if (!hc_client_ready())
	{
		mmi_popup_display_ext(STR_GLOBAL_ERROR, MMI_EVENT_FAILURE, NULL);
		return;
	}

	hc_get_drive_size();
//	if (g_hctalk_cntx.upload_state == hc_tk_upload_idle
//			|| g_hctalk_cntx.upload_state == hc_tk_upload_end
//			|| g_hctalk_cntx.upload_state == hc_tk_upload_error)
	if (g_hctalk_cntx.remindsize > 60*1024)
	{
//		g_hctalk_cntx.upload_state = hc_tk_upload_idle;
		hc_record_handle();
	}
	else
	{
		mmi_popup_display_ext(STR_GLOBAL_BUSY_TRY_LATER, MMI_EVENT_FAILURE, NULL);
	}
	//test();
	//mmi_start_turnover(1);
	//mmi_camera_lauch();
	//mmi_camera_capture_button_press();
	//kal_prompt_trace(MOD_BT,"KEY_RIGHT_ARROW");
}


void hc_talk_init(void)
{
	memset(&g_talk_unread, 0, sizeof(hc_talk_unread_struct));
	memset(&g_hctalk_cntx, 0x00, sizeof(hctalk_cntx));
	g_hctalk_cntx.tkq_interval = 60*1000;
	g_hctalk_cntx.timeout = 60*1000;
	g_hctalk_cntx.dl_state = hc_tk_download_idle;
	g_hctalk_cntx.upload_state = hc_tk_upload_idle;
	g_hctalk_cntx.drive = SRV_FMGR_PUBLIC_DRV;
	//g_hctalk_cntx.volume = MDI_AUD_VOL_MUTE(MDI_AUD_VOL_6);
	//g_hctalk_cntx.quality = MDI_AUDIO_REC_QUALITY_AUTO;
	//g_hctalk_cntx.format = MDI_FORMAT_AMR;
	hc_get_filepath();
}

void hc_scan_dl_folder(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	CHAR *path = NULL;
	CHAR *filename = NULL;
	WCHAR wildcard[8];
	FS_DOSDirEntry info;
	FS_HANDLE handle;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	path = (CHAR *) hc_alloc_mem(SRV_FMGR_PATH_BUFFER_SIZE);
	filename = (CHAR *) hc_alloc_mem(SRV_FMGR_PATH_BUFFER_SIZE);
	if (!path || !filename)
	{
		goto exit;
	}

	g_talk_unread.unread_total = 0;
    kal_wsprintf(wildcard, "*.amr");
	mmi_ucs2cpy((CHAR*) path, (CHAR*) g_hctalk_cntx.dlpath);
	mmi_ucs2cat((CHAR*) path, (CHAR*) wildcard);
	
    handle = FS_FindFirst((WCHAR*) path, 0, 0, &info, (WCHAR*) filename, SRV_FMGR_PATH_BUFFER_SIZE);
    if (handle < 0)
    {
    	kal_prompt_trace(MOD_BT,"[hc talk] No files");
        goto exit;
    }
	
    do
    {
        /* filter out folder results */
        if (!(info.Attributes & FS_ATTR_DIR))
        {
			++g_talk_unread.unread_total;
        }
    } while (FS_FindNext(handle, &info, (WCHAR*) filename, SRV_FMGR_PATH_BUFFER_SIZE) == FS_NO_ERROR);

	kal_prompt_trace(MOD_BT,"[hc talk] %d unread files", g_talk_unread.unread_total);
#if defined(__CUSTOM_LED__)
	if (!g_talk_unread.led_blink_flag)
	{
		g_talk_unread.led_blink_flag = 1;
		hc_led_blink_set_work(hc_led_blue, MMI_TRUE);
	}
#endif

exit:
	hc_free_mem(path);
	hc_free_mem(filename);
	if (handle >= FS_NO_ERROR)
	{
		FS_FindClose(handle);
	}

	return;
}

MMI_BOOL hc_scan_ud_folder(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 h = -1; /* save temp. file handle for find */
    FS_DOSDirEntry info;
    WCHAR path[HC_PATH_BUFFER_SIZE];
    WCHAR filename[HC_PATH_BUFFER_SIZE];
    WCHAR wildcard[8];
	//CHAR temp[HC_PATH_BUFFER_SIZE];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if (g_hctalk_cntx.upload_state != hc_tk_upload_idle
		&& g_hctalk_cntx.upload_state != hc_tk_upload_end)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Upload state error, Line %d", __LINE__);
		g_hctalk_cntx.upload_state = hc_tk_upload_idle;
		return MMI_FALSE;
	}
	
	memset(path, 0, sizeof(path));
	memset(filename, 0, sizeof(filename));
	memset(wildcard, 0, sizeof(wildcard));
    kal_wsprintf(wildcard, "*.amr");
	mmi_wcscpy(path, g_hctalk_cntx.udpath);
	mmi_wcscat(path, wildcard);
    h = FS_FindFirst(path, 0, 0, &info, filename, HC_PATH_BUFFER_SIZE);
    if (h < 0)
    {
    	kal_prompt_trace(MOD_BT,"[hc talk] No files wait for upload");
    	g_hctalk_cntx.upload_state = hc_tk_upload_idle;
        return MMI_FALSE;
    }

    /* filter out folder results */
    if (!(info.Attributes & FS_ATTR_DIR))
    {
		memset(g_hctalk_cntx.ud_filepath, 0, sizeof(g_hctalk_cntx.ud_filepath));
		mmi_wcscpy(g_hctalk_cntx.ud_filepath, (U16 *)g_hctalk_cntx.udpath);
		mmi_wcscat(g_hctalk_cntx.ud_filepath, filename);

		g_hctalk_cntx.upload_state = hc_tk_upload_begin;
		kal_prompt_trace(MOD_BT,"[hc talk] Found file");
		HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_TALK_UPLOAD_REQ, NULL);

    }
    FS_FindClose(h);
    return MMI_TRUE;
}

void hc_tkq_hdlr(void)
{
	CHAR send_data[64];
	U32 send_size = 0;
	S32 remaining_size = hc_fs_get_drive_remaining_size();
	
	hc_tkq_timer_stop();
	if (remaining_size > 50*1024)
	{
		if (g_hctalk_cntx.dl_state == hc_tk_download_idle)
		{
			memset(send_data, 0, sizeof(send_data));
			send_size = hc_make_send_data(send_data, HC_PROTL_TKQ, strlen(HC_PROTL_TKQ));
			//kal_prompt_trace(MOD_BT,"[hc talk] send: %s", send_data);
			hc_client_send(send_data, send_size);
		}
	}

	hc_tkq_timer_start();
}

void hc_tkq_timer_start(void)
{
	StartTimer(HC_TKQ_TIMER, g_hctalk_cntx.tkq_interval, hc_tkq_hdlr);
}

void hc_tkq_timer_stop(void)
{
	StopTimer(HC_TKQ_TIMER);
}

MMI_BOOL hc_tk_read_init(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	CHAR *path = NULL;
	CHAR *filename = NULL;
	WCHAR wildcard[8];
	FS_DOSDirEntry info;
	FS_HANDLE handle;
	MMI_BOOL ret = MMI_FALSE;

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	kal_prompt_trace(MOD_BT,"[hc talk] hc_tk_read_init 0000");
	path = (CHAR *) hc_alloc_mem(SRV_FMGR_PATH_BUFFER_SIZE);
	filename = (CHAR *) hc_alloc_mem(SRV_FMGR_PATH_BUFFER_SIZE);
	if (!path || !filename)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] hc_tk_read_init 1111");
		goto exit;
	}
	
	kal_wsprintf(wildcard, "*.amr");
	mmi_ucs2cpy((CHAR*) path, (CHAR*) g_hctalk_cntx.dlpath);
	mmi_ucs2cat((CHAR*) path, (CHAR*) wildcard);
	
	handle = FS_FindFirst((WCHAR*) path, 0, 0, &info, (WCHAR*) filename, SRV_FMGR_PATH_BUFFER_SIZE);
	if (handle < 0)
	{
		kal_prompt_trace(MOD_BT,"[hc talk] No files");
		goto exit;
	}
	kal_prompt_trace(MOD_BT,"[hc talk] hc_tk_read_init 2222");
	do
	{
		/* filter out folder results */
		if (!(info.Attributes & FS_ATTR_DIR))
		{
			kal_prompt_trace(MOD_BT,"[hc talk] hc_tk_read_init 3333");
			memset(g_talk_unread.curr_read_path, 0, SRV_FMGR_PATH_BUFFER_SIZE);
			mmi_ucs2cpy((CHAR*) g_talk_unread.curr_read_path, (CHAR*) g_hctalk_cntx.dlpath);
			mmi_ucs2cat((CHAR*) g_talk_unread.curr_read_path, (CHAR*) filename);

			--g_talk_unread.unread_total;
			ret = MMI_TRUE;
			goto exit;
		}
	} while (FS_FindNext(handle, &info, (WCHAR*) filename, SRV_FMGR_PATH_BUFFER_SIZE) == FS_NO_ERROR);


exit:
	kal_prompt_trace(MOD_BT,"[hc talk] hc_tk_read_init 4444");
	hc_free_mem(path);
	hc_free_mem(filename);
	if (handle >= FS_NO_ERROR)
	{
		FS_FindClose(handle);
	}
	
#if defined(__CUSTOM_LED__)
	if (g_talk_unread.unread_total == 0)
	{
		if (g_talk_unread.led_blink_flag)
		{
			g_talk_unread.led_blink_flag = 0;
			hc_led_blink_set_work(hc_led_blue, MMI_FALSE);
		}
	}
#endif	


	return ret;
}


void hc_tk_read_callback(void)
{
	hc_talk_confirm_display();
}

void hc_tk_read(void)
{
	FS_HANDLE fd = -1;
	
	fd = FS_Open((const WCHAR*)g_talk_unread.curr_read_path, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		FS_Close(fd);
		mmi_media_app_play_audio((U16*) g_talk_unread.curr_read_path, hc_tk_read_callback, 0);
	}
	else
	{
		kal_prompt_trace(MOD_BT,"[hc talk] Read error");
	}	
}

void hc_tk_delete_curr_read(void)
{
	FS_HANDLE fd = -1;

	fd = FS_Open((const WCHAR*)g_talk_unread.curr_read_path, FS_READ_ONLY);
	if (fd >= FS_NO_ERROR)
	{
		FS_Close(fd);
		FS_Delete((WCHAR*)g_talk_unread.curr_read_path);
	}
}

mmi_ret hc_talk_confirm_display_callback(mmi_event_struct *evt)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	mmi_alert_result_evt_struct *alert_result_evt = (mmi_alert_result_evt_struct*)evt;
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	if (alert_result_evt->evt_id == EVT_ID_ALERT_QUIT)
	{
		switch (alert_result_evt->result)
		{
			case MMI_ALERT_CNFM_YES:
			{
				//kal_prompt_trace(MOD_BT,"[hc talk] hc_talk_confirm_display_callback yes");
				hc_tk_read();
				break;
			}

			case MMI_ALERT_CNFM_NO:
			{
				//kal_prompt_trace(MOD_BT,"[hc talk] hc_talk_confirm_display_callback no");
				hc_tk_delete_curr_read();
				break;
			}

			default:
//				kal_prompt_trace(MOD_BT,"[hc talk] hc_talk_confirm_display_callback default");
				break;
		}
	}
	return MMI_RET_OK;
}


void hc_talk_confirm_display(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_confirm_property_struct arg;
    MMI_ID scrn_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_confirm_property_init(&arg, CNFM_TYPE_YESNO);
    arg.parent_id = GRP_ID_ROOT;
    arg.callback = hc_talk_confirm_display_callback;
    arg.f_enter_history = MMI_TRUE;
    scrn_id = mmi_confirm_display(
        (WCHAR*)GetString(STR_ID_HC_TALK_REPEAT),
        MMI_EVENT_QUERY,
        &arg);

    //mmi_frm_scrn_set_leave_proc(
     //   GRP_ID_ROOT,
       // scrn_id,
        //mmi_dm_dl_resume_cnf_leave_proc);
}

