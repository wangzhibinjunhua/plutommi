#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "MMI_include.h"
//#include <malloc.h>
//#include <conio.h>
//#include <pshpack2.h>
//#include <poppack.h>
#include "FileMgr.h"
#include "qrencode.h"
#include "FileMgrSrvGProt.h"
#include "fs_gprot.h"
#include "ImeiSrvGprot.h"
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;
#define SIZE 1
#define BARCODE_BMP_PATH     L":\\Barcode\\"
#pragma pack(push)
#pragma pack(1)
CHAR barcode_filepath[200];
/*定义位图文件头*/
typedef struct
{
	WORD bfType;
	DWORD bfSize;
	WORD bfReserved1;
	WORD bfReserved2;
	DWORD bfOffBits;
} BIT_MAP_FILE_HEADER;

/*定义信息头*/
typedef struct
{
	DWORD biSize;
	DWORD biWidth;
	DWORD biHeight;
	WORD biPlanes;
	WORD biBitCount;
	DWORD biCompression;
	DWORD biSizeImage;
	DWORD biXPelsPerMeter;
	DWORD biYPelsPerMeter;
	DWORD biClrUsed;
	DWORD biClrImportant;
} BIT_MAP_INFO_HEADER;

/*调色板*/
typedef struct
{
	BYTE blue;
	BYTE green;
	BYTE red;
} RGB_QUAD;

#pragma pack(pop)

int odd_or_even(int x)
{
	if ((x % 2) != 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}

}

#if 1
int bmp_main(void)
{
	RGB_QUAD *bmp_data = NULL;
	FILE *bmp_file;
	int i, j, k, q;
	long width = 168;  //设置图片宽度
	long height = 168; //设置图片高度
	long date_size = width*height;
	BIT_MAP_FILE_HEADER bmp_map_file;
	BIT_MAP_INFO_HEADER bmp_map_info;
	QRcode *qrcode;
	CHAR path[100];
	CHAR *filename = NULL;
	WCHAR wildcard[8];
	FS_DOSDirEntry info;
	FS_HANDLE fd = -1;
	S32 ret = 0;
	U8 imei_num[SRV_IMEI_MAX_LEN + 1] = {0};
	U32 write_size;
	//fopen("test.bmp", "wb+");
	kal_wsprintf((WCHAR*)path, "%c%w", SRV_FMGR_PUBLIC_DRV, BARCODE_BMP_PATH);
	kal_prompt_trace(MOD_BT,"bmp_main path %s",path);
	mmi_ucs2cpy((CHAR*)barcode_filepath, (CHAR*) path);
	mmi_ucs2cat((CHAR*)barcode_filepath, (CHAR*) L"barcode.bmp");
	kal_prompt_trace(MOD_BT,"bmp_main dl_filepath %s",barcode_filepath);
	
	fd=FS_Open((const WCHAR*)barcode_filepath, FS_READ_WRITE|FS_CREATE);
	 kal_prompt_trace(MOD_BT,"bmp_main fd,%d",fd);
	if (fd <FS_NO_ERROR)
	{
	
		return -1;
	}
	srv_imei_get_imei(MMI_SIM1, imei_num, SRV_IMEI_MAX_LEN + 1);
	qrcode = QRcode_encodeString(imei_num, 1, QR_ECLEVEL_H, QR_MODE_8, 1);

	if (!qrcode)
		return -1;


	kal_prompt_trace(MOD_BT,"bmp_main dl_filepath");

	/*写入图位文件头*/
	bmp_map_file.bfType = 0x4d42;
	bmp_map_file.bfSize = 14 + 40 + width * height * 3;
	bmp_map_file.bfReserved1 = 0;
	bmp_map_file.bfReserved2 = 0;
	bmp_map_file.bfOffBits = 0x36;
	//fwrite(&bmp_map_file, sizeof(BIT_MAP_FILE_HEADER), 1, bmp_file);
	FS_Write(fd, &bmp_map_file,sizeof(BIT_MAP_FILE_HEADER), &write_size);
	/*写入信息头*/
	bmp_map_info.biSize = 40;
	bmp_map_info.biPlanes = 1;
	bmp_map_info.biHeight = height;
	bmp_map_info.biWidth = width;
	bmp_map_info.biBitCount = 24;
	bmp_map_info.biClrImportant = 0;
	bmp_map_info.biClrUsed = 0;
	bmp_map_info.biSizeImage = width*height * 3;
	bmp_map_info.biCompression = 0;
	bmp_map_info.biXPelsPerMeter = 0;
	bmp_map_info.biYPelsPerMeter = 0;
	//fwrite(&bmp_map_info, sizeof(BIT_MAP_INFO_HEADER), 1, bmp_file);
	FS_Write(fd, &bmp_map_info,sizeof(BIT_MAP_INFO_HEADER), &write_size);
	/*给图像分配内存*/
	if ((bmp_data = (RGB_QUAD*)hc_alloc_mem(width * height * 3)) == NULL)
	{
		return -1;
	}

	for (i = 0; i < 168; i++)
	{
		for (j = 0; j < 168; j++)
		{
			if (qrcode->data[(i/8) * 21 + j/8] & 0x01)
			{
				bmp_data[i*width + j].blue = 0;
				bmp_data[i*width + j].green = 0;
				bmp_data[i*width + j].red = 0;

			}
			else
			{
				bmp_data[i*width + j].blue = 255;
				bmp_data[i*width + j].green = 255;
				bmp_data[i*width + j].red = 255;
			}
		}
	}

	/*构建RGB信息，i为竖方向，j为横方向*/
	/*for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			k = odd_or_even(i / SIZE);
			q = odd_or_even(j / SIZE);
			if (0 > (k * q))
			{
				bmp_data[i*width + j].blue = 255;
				bmp_data[i*width + j].green = 255;
				bmp_data[i*width + j].red = 255;
			}
			else
			{
				bmp_data[i*width + j].blue = 0;
				bmp_data[i*width + j].green = 0;
				bmp_data[i*width + j].red = 0;
			}

		}
	}*/
	//fwrite(bmp_data, sizeof(RGB_QUAD), date_size, bmp_file);
	FS_Write(fd, bmp_data,date_size*sizeof(RGB_QUAD), &write_size);
	FS_Close(fd);
	hc_free_mem(bmp_data);
	bmp_data = NULL;
	QRcode_free(qrcode);
	return 0;
}
void barcode_init(void)
{
	CHAR path[100];
	S32 result;
    S32 attribut;
	kal_wsprintf((WCHAR*)path, "%c%w", SRV_FMGR_PUBLIC_DRV, BARCODE_BMP_PATH);

	    attribut = FS_GetAttributes((WCHAR*)path);
    if (((FS_ATTR_DIR & attribut) == 0) || attribut < 0)
    {
        result = FS_CreateDir((WCHAR*)path);
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
          
        }
    }
   
}
#endif