#ifndef __HC_FS_H
#define __HC_FS_H

#define HC_CACHE_PATH     L":\\HcCache\\"
#define HC_UD2_CACHE_FILENAME     L"UD2"

#define HC_EPO_CACHE_PATH	L":\\Epo\\"

typedef struct
{
	MMI_BOOL Cache_en;
	U16 cache_filepath[HC_PATH_BUFFER_SIZE];
	U8 wIndex;
	U8 rIndex;
	//U8 redIndex[64];
} hc_fs_ud2_cache_struck;

typedef struct
{
	U16 cache_path[HC_PATH_BUFFER_SIZE];
} hc_fs_epo_cache;

#endif