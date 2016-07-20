#ifndef __GPS_TEST_H__
#define __GPS_TEST_H__

//#define __MMI_GPS_LOCATION_INFO__
//#define __MMI_GPS_SATELLITES_INFO__
#define __GPS_TEST__

#if defined(__MMI_GPS_SUPPORT__)

#include "MMI_include.h"
#include "GPSExDcl.h"
#include "rtc_sw.h"

/* to be put in include path TBDGS */
#include "AlarmProt.h"
#include "AlarmGProt.h"
#include "DateTimeGprot.h"
#include "AlarmFrameworkProt.h"
#include "ScheduledPowerOnOffGprot.h"
#include "gpioInc.h"
#include "MMIThemes.h"
#include "ProtocolEvents.h"
//#include "AsyncEventsGprot.h"
#include "SettingGprots.h"
#include "ComposeRingToneProts.h"
//#include "DownloadProtos.h"
#include "PowerOnChargerProt.h"
// #include "PopulateResGprot.h"
#include "ScheduledPowerOnOff.h"
#include "ToDoListDef.h"
#include "ToDoListEnum.h"
#include "WrapperGprot.h"
#include "AudioInc.h"
#include "IdleAppProt.h"
#include <time.h>
#include "mdi_datatype.h"
#include "mdi_audio.h"
#include "resource_audio.h"
#include "lcd_sw.h"
#include "lcd_sw_inc.h"
//#include "sublcd.h"

	
//georgelin add start
#include "stack_common.h"
#include "stack_msgs.h"
#include "app_ltlcom.h" /* Task message communiction */
#include "uart_sw.h"

#include "kal_trace.h"  /* kal_trace() prototype */
#include "DebugInitDef.h"       /* Define trace class type */
#include "mmi_trc.h"        /*trace define*/
#include "stdlib.h"         /*math lib such as atof*/
#include "ctype.h"          /*use toupper function*/

#include "mdi_datatype.h"       /* mdi datatype */
#include "mdi_gps.h"

#define		MAX_INFO_NUMBER_LEN		30
#define		MAX_SATELLITE_NUMBER	16


	//void UBLOX_GPS_stop(void);
	void UBLOX_GPS_init(void);
	void UBlox_GPS_uart_readyToRead_ind_hdler(void *msg);
   void Init_Uart(void);

extern const U16 gIndexIconsImageList[];

/***************************************************************************** 
* External Variable
*****************************************************************************/
extern module_type UART_GetOwnerID(UART_PORT port);
extern const char gpio_gps_power_pin;


//georgelin add end



//georgelin add start
#define	MORSUN_GPS_MAX_READ_LENGTH 2048

extern kal_uint8 Morsun_gps_input_data[MORSUN_GPS_MAX_READ_LENGTH];

#ifdef __GPS_TEST__

	#define __GPS_DEBUG_INFO__
	#define NEMA_MESSAGE_MAX_LEN 500	//NEMA message package max length
	
	typedef enum
	{
		GGA=0,
		GLL,
		GSA,
		GSV,
		RMC,
		VTG,
		GRS,
		GST,
		ZDA,
		GBS,
		DTM,
		TXT,
		Unknow=99
	}NEMA_MODE;
	
	typedef struct
	{
		char	UTC_Time[20];			//Current time	hhmmss.sss
		char	Latitude[20];			//Degrees + minutes dddmm.mmmm
		char	NS_indicator;			//N/S Indicator  N=north or S=south
		char	Longitude[20];			//Degrees + minutes dddmm.mmmm
		char	EW_indicator;			//E/W indicator  E=east or W=west
		U8		FS; 					//Position Fix Indicator 0=No fix/Invalid 1=Standard GPS(2D/3D)  2=Differential GPS  6=Estimated (DR) Fix 
		U8		NoSV;					//Satellites_Used Range 0 to 12
		char	HDOP[20];					//Horizontal Dilution of Precision
		char	msl[20];					//MSL Altitude 
		char	Unit1;					//Units  Meters (fixed field)
		char	Altref[20];					//Geoid Separation
		char	Unit2;					//Units  Meters (fixed field)
		char	DiffAge[20];				//unit=s Age of Differential Corrections  Blank (Null) fields when DGPS is not used  
		char	DiffStation[20];			//Diff. Reference Station ID 
	}GGAStruct;
	extern GGAStruct	GGAData;
	
	typedef struct
	{
		char	Latitude[20];			//User datum latitude degrees, minutes, decimal minutes format dddmm.mmmm 
		char	NS_indicator;			//N/S Indicator  Hemisphere N=north or S=south
		char	Longitude[20];			//User datum latitude degrees, minutes, decimal minutes format dddmm.mmmm
		char	EW_indicator;			//E/W indicator  'E'= East, or 'W' = West
		char	UTC_Time[20];			//hours, minutes, seconds and decimal fractions of seconds format hhmmss.sss
		char	Valid_status;			//V = Data Invalid / Receiver Warning, A=Data Valid 
		char	mode;
	}GLLStruct;
	extern GLLStruct	GLLData;
	
	typedef struct
	{
		char	Smode;					//M=Manual - forced to operate in 2D or 3D mode   A=allowed to automatically switch 2D/3D
		U8		FS;						//1=Fix not available  2=2D Fix  3=3D Fix
		U16		Sv[12];					//Satellites Used  SV on Channel n If less than 12 SVs are used for navigation, the remaining fields are left empty. If more than 12 SVs are used for navigation, only the IDs of the first 12 are being output.
										//The SV Numbers (Fields 'Sv') are in the range of 1 to 32 for GPS satellites, and 33 to 64 for SBAS satellites (33 = SBAS PRN 120, 34 = SBAS PRN 121 and so on)
		char	PDOP[20];					//Position Dilution of Precision (00.0 to 99.99)
		char	HDOP[20];					//Horizontal Dilution of Precision (00.0 to 99.99)
		char	VDOP[20];					//Vertical Dilution of Precision (00.0 to 99.99)
	}GSAStruct;
	extern GSAStruct GSAData;
	
	typedef struct
	{
		U16		sv;						//Satellite ID  SV ID (GPS: 1-32, SBAS 33-64 (33=PRN120))
		U16		elv;					//Elevation  Maximum 90
		U16		az;						//Azimuth  Range 0 to 359
		U16		cno;					//C/No  Range 0 to 99, null when not tracking
	}SATELLITESTRUCT;
	extern SATELLITESTRUCT Satellite_status[16];
	
	typedef struct
	{
		U8		NoMsg;					//Number of Messages  Total number of GPGSV messages being output
		U8		MsgNo;					//Message Number  Number of this message
		U16		NoSv;					//Satellites in View
	}GSVStruct;
	extern GSVStruct GSVData;
	
	typedef struct
	{
		char	UTC_Time[20];			//Current time	hhmmss.sss
		char	Valid_status;			//V = Data Invalid / Receiver Warning, A=Data Valid 
		char	Latitude[20];			//User datum latitude degrees, minutes, decimal minutes format
		char	NS_indicator;			//N/S Indicator  Hemisphere N=north or S=south
		char	Longitude[20];			//User datum latitude degrees, minutes, decimal minutes format
		char	EW_indicator;			//E/W indicator  'E'= East, or 'W' = West
		char	Spd[20];					//Speed  Speed Over Ground
		char	cog[20];					//COG  Course Over Ground
		char	Date[7];				//Current Date in Day, Month Year format ddmmyy
		char	mv[20];						//Magnetic variation value  Not being output by receiver degrees
		char	mvE;					//Magnetic variation E/W indicator  Not being output by receiver
		char	mode;
	}RMCStruct;
	extern RMCStruct RMCData;
	
	typedef struct
	{
		char	cogt[20];					//COG  Course Over Ground	degree
		char	T;						//fixed field  True
		char	cogm;					//Course over ground (magnetic).  Not output (empty)
		char	Unit1;					//fixed field  Magnetic		M
		char	sog[20];					//knots Speed over ground
		char	Unit2;					//Knots - fixed field		N
		char	kph[20];					//Speed km/h
		char	Unit3;					//Kilometers per hour - fixed field 	K
		char	mode;
	}VTGStruct;
	extern VTGStruct	VTGData;
	
	typedef struct
	{
		char	UTC_Time[20];			//hours, minutes, seconds and decimal fractions of seconds format hhmmss.sss
		U8		mode;					//Mode. ANTARIS-based Receivers will always output Mode 1 residuals
										//0=Residuals were used to calculate given in the matching GGA or GNS sentence.1=Residuals were recomputed after the GGA GNS position was computed.
		char	residual[12][20];			//Range residuals for SVs used in navigation. The SV order matches the order from the GSA sentence
	}GRSStruct;
	extern GRSStruct	GRSData;
	
	typedef struct
	{
		char	UTC_Time[20];			//hours, minutes, seconds and decimal fractions of seconds format hhmmss.sss
		char	range_rms[20];				//RMS value  of the standard deviation of the ranges
		char	std_major[20];				//Standard deviation (semi-major axis)  Not supported (empty)
		char	std_minor[20];				//Standard deviation of semi-minor axis  Not supported (empty)
		char	hdg[20];					//Orientation of semi-major axis  Not supported (empty)
		char	std_lat[20];				//Standard deviation of latitude  error in meters
		char	std_long[20];				//Standard deviation of longitude  error in meters
		char	std_alt[20];				//Standard deviation of altitude  error in meters
	}GSTStruct;
	extern GSTStruct	GSTData;
	
	typedef struct
	{
		char	UTC_Time[20];			//hours, minutes, seconds and decimal fractions of seconds format hhmmss.sss
		char	day[3];
		char	month[3];
		char	year[5];
		char	ltzh[3];				//Local zone hours  Not supported (fixed to 00)  xx or -xx
		char	ltzn[3];				//Local zone minutes  Not supported (fixed to 00) zz
	}ZDAStruct;
	extern ZDAStruct	ZDAData;
	
	typedef struct
	{
		char	UTC_Time[20];			//Time to which this RAIM sentence belongs  format hhmmss.sss
		char	errlat[20];					//Expected Error in Latitude	unit meters
		char	errlon[20];					//Expected Error in Longitude	unit meters
		char	erralt[20];					//Expected Error in Altitude 	unit meters
		U16		svid;					//Failed SV  ID of most likely failed Satellite
		U16		prob;					//Probability of missed detection. This field is left empty by ANTARIS based receivers. Missed Detection
		char	bias[20];					//Bias  Estimate on most likely failed satellite ( a priori residual ) unit meters
		char	stdev[20];					//Stddev  Standard Deviation of estimated Bias	unit meters
	}GBSStruct;
	extern GBSStruct	GBSData;
	
	typedef struct
	{
		char	LLL[4];					//Local Datum Code  W84 = WGS 84, W72 = WGS 72, 999 = User defined
		char	LSD[4];					//Local Datum Subdivision Code  This field outputs the currently selected Datum as a string
		char	lat[20];					//Offset in Latitude  unit minutes
		char	NS_indicator;			//N/S Indicator N=north or S=south
		char	lon[20];					//Offset in Longitude unit minutes
		char	EW_indicator;			//E/W indicator  'E'= East, or 'W' = West
		char	alt[20];					//Offset in Altitude  unit meters
		char	RRR[4];					//Reference Datum Code  W84 = WGS 84. This is the only supported Reference datum.
	}DTMStruct;
	extern DTMStruct	DTMData;
	
	typedef struct
	{
		U16		numtx;					//Total Messages  Total number of messages in this transmission, 01..99
		U16		thistx;					//Message number  Message number in this transmission, range 01 ... 99
		char	ID[3];					//Text Identifier  Antaris GPS receivers specify the 'severity' of the message with this number. Currently assigned Values are:
										//00 = ERROR 01 = WARNING 02 = NOTICE 07 = USER
		char	string[200];			//Text  Any ASCII Text
	}TXTStruct;
	extern TXTStruct	TXTData;
	
	extern S8	GPS_temp_data[MORSUN_GPS_MAX_READ_LENGTH];	//data buffer
	extern S8	NEMA_Messager_buffer[NEMA_MESSAGE_MAX_LEN];	//message buffer
	extern S8*	p_GPS_temp_data;
	extern S8*	p_current_GPS_temp_data;
	extern S8*	p_end_GPS_temp_data;
	extern S8*	p_start_GPS_temp_data;
	extern BOOL	g_buffer_remove_flag;
	extern BOOL	g_Satellite_refresh;
	extern BOOL	g_location_refresh;
	
	extern NEMA_MODE NMEA_decode(S8* buffer, U32 len);
	extern void GPS_location_time(void);
	extern void Refresh_message_send(BOOL Refresh_flag);
	
	extern void buffer_process(S8* buffer,U32 len);
	extern void GPS_data_process_init(void);
	extern void GPS_data_process_stop(void);
	//extern void buffer_decode(void *inMsg);
	extern void buffer_decode(void);
	extern void Morsun_GPS_uart_readyToRead_ind_hdler(void *msg);
#endif	//__GPS_TEST__

#endif	//defined(__MMI_GPS_SUPPORT__)
#endif	//__GPS_TEST_H__