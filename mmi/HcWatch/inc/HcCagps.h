#ifndef __HC_CAGPS_H
#define __HC_CAGPS_H

typedef struct
{
   WORD cell_id;
   WORD location_area_code;
   WORD mobile_country_code;
   WORD mobile_network_code;
   WORD age;
   S16  signal_strength;
   WORD timing_advance;
}AGPSDataStruct;

typedef enum
{
   AI_NULL = 0x00,
   AI_LAI  = 0x01,
   AI_MR   = 0x02,
   AI_ALL  = 0x03
}AGPS_ITEM;

typedef void (*cagps_set_agpsdata_cb)(const AGPSDataStruct *p_agpsdata);

typedef struct
{
  BOOL bt_open;
  AGPSDataStruct agpsdata;
  AGPS_ITEM ai_item;
  cagps_set_agpsdata_cb set_agpsdata_cb[6];  //MAX_GPS_MODULE_SIZE
}AGPSParserStruct;

#endif
