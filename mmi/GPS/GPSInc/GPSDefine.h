#ifndef __GPS_DEFINE_H
#define __GPS_DEFINE_H

typedef struct
{
  U8 time[16];
  U8 state[2];
  U8 lati[16];
  U8 N_S[2];
  U8 longi[16];
  U8 E_W[2];
  U8 speed[8];
  U8 direc[8];
  U8 date[8];
} GPRMC_STRUCK;

typedef struct
{
  U8 sat_num[4];
  U8 elev[16];
} GGA_STRUCK;

typedef enum
{
	gps_not_ready,
	gps_ready,
	gps_sleep,
	gps_wake,
	gps_locating,
	gps_state_max
} hc_gps_state;

typedef struct
{
	MMI_BOOL first_init;
	MMI_BOOL power_state;
	hc_gps_state work_state;
	U32 locating_timer;
} hc_gps_cntx_struck;

typedef struct
{
	U8 lat[12];
	U8 lon[12];

	U8 n_s[2];
	U8 e_w[2];

//	U8 ip[24];
//	U8 port[8];
	U8 path[32];

	U8 filename[32];

	U16 yr;
	U16 mo;
	U16 day;
	U16 hr;
	U16 min;
	U16 sec;
	
	sockaddr_struct addr;
} hc_gps_epo_struck;


#endif

