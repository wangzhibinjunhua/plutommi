
#include "gps_test.h"
#include "GPSExDcl.h"


#include "dcl_pmu.h"

#include "dcl_gpio.h"

#if !defined(WIN32)
#include "uart_internal.h"
#include "mmi_frm_events_gprot.h"
#if defined(__CUSTOM_GPS_NEW__)
#include "TimerEvents.h"
#include "nvram_common_defs.h"
#include "common_nvram_editor_data_item.h"
#include "mmi_frm_mem_gprot.h"
#include "gui_typedef.h"
#include "med_api.h"
#include "HcWatchDefine.h"
#include "GPSDefine.h"
#include "HcFs.h"

#include "mmi_rp_app_factorymode_def.h"
#include "vmcell_sdk.h"
#include "vmsalcell.h"


#define MTKEPO_SV_NUMBER        32
#define MTKEPO_RECORD_SIZE      72
#define MTKEPO_SEGMENT_NUM      (30 * 4)

U32 EPO_REQ_DELAY = 60*1000;
MMI_BOOL epo_write_start = MMI_FALSE;
GPRMC_STRUCK gGprmcdate;
GGA_STRUCK gGGAData;
hc_gps_cntx_struck g_gps_cntx;
hc_gps_epo_struck g_epo_cntx;
kal_uint8 gps_handle = 0xFF;
void hc_gps_set_work_state(hc_gps_state state);
void hc_gps_wake_hdlr(void);
void hc_gps_epo_send_assistance_data(U8 *uart_read_p);

extern kal_uint8 g_s_vm_sal_cell_nbr_num;
extern U32 hc_ud_time;
extern hc_fs_epo_cache g_epo_cache_cntx;

//extern U8 gCurrentMode;
extern nvram_ef_hc_sensor_cntx_struck g_sensor_cntx;


extern void hc_soc_upload_hdlr(void);


#if defined(__MMI_AGPS_DATA_H_SUPPORT__)
void UART_write_agps_entry(void);
#endif


extern vm_cell_info_struct g_s_vm_sal_cur_cell_info;
extern vm_cell_info_struct g_s_vm_sal_nbr_cell_info[VM_SAL_CELL_NBR_MAX];
extern kal_uint8 g_s_vm_sal_cell_nbr_num;
extern kal_uint8 g_cell_info_ta;


U8 hc_get_nvram_enable(){
	return g_sensor_cntx.plmn_info.enable;
}

void hc_saveplmn_info_first(){
	//hc_PLMAN_info_struct plmn_info;
	S16 error;
	U32 i;

	if(g_s_vm_sal_cell_nbr_num <= 0)
	{
		StartTimer(HC_SAVE_PLMN_TIMER,10*1000, hc_saveplmn_info_first);
		return;
	}

	memset(&(g_sensor_cntx.plmn_info), 0, sizeof(hc_PLMAN_info_struct));

	g_sensor_cntx.plmn_info.cell_num = g_s_vm_sal_cell_nbr_num + 1;
	g_sensor_cntx.plmn_info.mcc = g_s_vm_sal_cur_cell_info.mcc;
	g_sensor_cntx.plmn_info.mnc = g_s_vm_sal_cur_cell_info.mnc;
	g_sensor_cntx.plmn_info.lac = g_s_vm_sal_cur_cell_info.lac;
	g_sensor_cntx.plmn_info.ci = g_s_vm_sal_cur_cell_info.ci;
	g_sensor_cntx.plmn_info.rxlev = g_s_vm_sal_cur_cell_info.rxlev;
#if defined(__HC_CAGPS__)	
	g_sensor_cntx.plmn_info.ta = gAGPSParser.agpsdata.timing_advance;
#else
	g_sensor_cntx.plmn_info.ta = g_cell_info_ta;
#endif


	//strcpy(g_sensor_cntx.plmn_info.lati , g_epo_cntx.lat);
	//strcpy(g_sensor_cntx.plmn_info.longi , g_epo_cntx.lon);

	strcpy(g_sensor_cntx.plmn_info.lati , gGprmcdate.lati);
	strcpy(g_sensor_cntx.plmn_info.longi , gGprmcdate.longi);

	kal_prompt_trace(MOD_BT, "hc_saveplmn_info_first lati=%d %d %s %s",strlen(g_sensor_cntx.plmn_info.lati ), strlen(g_sensor_cntx.plmn_info.longi ), (char*)(g_sensor_cntx.plmn_info.lati), (char*) (g_sensor_cntx.plmn_info.longi)  );


	g_sensor_cntx.plmn_info.enable = 1;

	kal_prompt_trace(MOD_BT, "++++++++++hc_saveplmn_info_first cell_num=%d mcc=%d mnc=%d lac=%d ci=%d rxlev=%d ta=%d", g_sensor_cntx.plmn_info.cell_num ,
		g_sensor_cntx.plmn_info.mcc ,g_sensor_cntx.plmn_info.mnc ,g_sensor_cntx.plmn_info.lac ,g_sensor_cntx.plmn_info.ci ,g_sensor_cntx.plmn_info.rxlev ,g_sensor_cntx.plmn_info.ta);

	
	for (i = 0; i < g_s_vm_sal_cell_nbr_num && i<VM_SAL_CELL_NBR_MAX; i++) 
	{
		g_sensor_cntx.plmn_info.plmn_cell[i].lac = g_s_vm_sal_nbr_cell_info[i].lac;
		g_sensor_cntx.plmn_info.plmn_cell[i].ci = g_s_vm_sal_nbr_cell_info[i].ci;
		g_sensor_cntx.plmn_info.plmn_cell[i].rxlev = g_s_vm_sal_nbr_cell_info[i].rxlev;
		//g_sensor_cntx.plmn_info.plmn_cell[i].enable = 1;

		kal_prompt_trace(MOD_BT, "hc_saveplmn_info_first %d lac=%d ci=%d rxlev=%d", i, g_sensor_cntx.plmn_info.plmn_cell[i].lac ,g_sensor_cntx.plmn_info.plmn_cell[i].ci ,g_sensor_cntx.plmn_info.plmn_cell[i].rxlev );

	}
	
	WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);	

}


MMI_BOOL get_nvram_lati_longi(){

	U32 i=0;
	U32 j=0;

	if(g_s_vm_sal_cell_nbr_num <= 0)
	{
		return MMI_FALSE;
	}
		
	//g_sensor_cntx.plmn_info.ci
	if(g_sensor_cntx.plmn_info.lac == g_s_vm_sal_cur_cell_info.lac){
		for (i = 0; i < g_s_vm_sal_cell_nbr_num && i<VM_SAL_CELL_NBR_MAX; i++) 
		{
			//g_sensor_cntx.plmn_info.plmn_cell[i].ci = g_s_vm_sal_nbr_cell_info[i].ci;
			for (j=0; j<VM_SAL_CELL_NBR_MAX; j++) 
			{
				if(g_sensor_cntx.plmn_info.plmn_cell[j].lac == g_s_vm_sal_nbr_cell_info[i].lac)
				{
					return MMI_TRUE;
				}
			}
			
		}
	}
	
	return MMI_FALSE;
}


void show_nvram_plmn_info(){
	U8 i=0;

	kal_prompt_trace(MOD_BT, "show_nvram_plmn_info g_s_vm_sal_cur_cell_info mcc=%d mnc=%d ", g_s_vm_sal_cur_cell_info.mcc, g_s_vm_sal_cur_cell_info.mnc );
	
	kal_prompt_trace(MOD_BT, "show_nvram_plmn_info mcc=%d mnc=%d g_sensor_cntx.lac =%d ci=%d", g_sensor_cntx.plmn_info.mcc ,  g_sensor_cntx.plmn_info.mnc , g_sensor_cntx.plmn_info.lac ,  g_sensor_cntx.plmn_info.ci );

	kal_prompt_trace(MOD_BT, "show_nvram_plmn_info lati=%d %d %s %s",strlen(g_sensor_cntx.plmn_info.lati), strlen(g_sensor_cntx.plmn_info.longi), (char*)(g_sensor_cntx.plmn_info.lati), (char*) (g_sensor_cntx.plmn_info.longi)  );

	
		
	for (i = 0; i<VM_SAL_CELL_NBR_MAX; i++) 
	{
		kal_prompt_trace(MOD_BT, "show_nvram_plmn_info  %d g_sensor_cntx.plmn_info.lac =%d ci=%d", i, g_sensor_cntx.plmn_info.plmn_cell[i].lac ,  g_sensor_cntx.plmn_info.plmn_cell[i].ci );

	}
}


MMI_BOOL check_plmn_cell( VMUINT16 lac,  VMUINT16 ci  ){
	U8 i=0;


	if( g_sensor_cntx.plmn_info.lac == lac /* && g_sensor_cntx.plmn_info.ci == ci */ )
	{
		return MMI_TRUE;
	}

	for (i = 0; i < g_s_vm_sal_cell_nbr_num && i<VM_SAL_CELL_NBR_MAX; i++) 
	{

		if( g_sensor_cntx.plmn_info.plmn_cell[i].lac == lac /*&& g_sensor_cntx.plmn_info.plmn_cell[i].ci  == ci */ )
		{
			return MMI_TRUE;
		}

	}

	return MMI_FALSE;
}


MMI_BOOL check_plmn_info_match(){
	U8 check_num = 0;
	U8 i=0;

	kal_prompt_trace(MOD_BT, "check_plmn_info_match entry mcc=%d %d mnc=%d %d ", g_sensor_cntx.plmn_info.mcc , g_s_vm_sal_cur_cell_info.mcc ,  g_sensor_cntx.plmn_info.mnc, g_s_vm_sal_cur_cell_info.mnc );

	if( g_sensor_cntx.plmn_info.mcc == g_s_vm_sal_cur_cell_info.mcc 
		&& g_sensor_cntx.plmn_info.mnc == g_s_vm_sal_cur_cell_info.mnc 
		)
	{
		kal_prompt_trace(MOD_BT, "check_plmn_info_match cell_num=%d mcc=%d mnc=%d lac=%d ci=%d rxlev=%d ta=%d", g_sensor_cntx.plmn_info.cell_num ,
			g_sensor_cntx.plmn_info.mcc ,g_sensor_cntx.plmn_info.mnc ,g_sensor_cntx.plmn_info.lac ,g_sensor_cntx.plmn_info.ci ,g_sensor_cntx.plmn_info.rxlev ,g_sensor_cntx.plmn_info.ta);

		if( MMI_TRUE==check_plmn_cell(g_s_vm_sal_cur_cell_info.lac, g_s_vm_sal_cur_cell_info.ci ))
		{
			check_num++;
		}

		for (i = 0; i < g_s_vm_sal_cell_nbr_num ; i++) 
		{
			kal_prompt_trace(MOD_BT, "check_plmn_info_match %d lac=%d ci=%d rxlev=%d", i, g_sensor_cntx.plmn_info.plmn_cell[i].lac ,g_sensor_cntx.plmn_info.plmn_cell[i].ci ,g_sensor_cntx.plmn_info.plmn_cell[i].rxlev );
			if( MMI_TRUE==check_plmn_cell(g_s_vm_sal_nbr_cell_info[i].lac, g_s_vm_sal_nbr_cell_info[i].ci) ){
				check_num++;
			}
		}

		kal_prompt_trace(MOD_BT, "check_plmn_info_match %d  %d", check_num , g_s_vm_sal_cell_nbr_num+1 );
		
		if(check_num == (g_s_vm_sal_cell_nbr_num+1) ){
			return MMI_TRUE;
		}
		else{
			return MMI_FALSE;
		}
	}
	
	//return (g_s_vm_sal_cell_nbr_num+1-check_num);
	return MMI_FALSE;
}


//static MMI_BOOL GPSActived = MMI_FALSE;

MMI_BOOL hc_gps_get_state(void)
{
	static MMI_BOOL savePlmnInfo = MMI_FALSE;
	
	if ( ( g_gps_cntx.work_state == gps_wake ) && strcmp(gGprmcdate.state, "A") == 0) // && GPSActived == MMI_TRUE 
	{
		if( savePlmnInfo == MMI_FALSE){
			kal_prompt_trace(MOD_BT, "hc_gps_get_state A");
			hc_saveplmn_info_first();
			savePlmnInfo = MMI_TRUE;
		}
		
		return MMI_TRUE;
	}
	
	return MMI_FALSE;
}

MMI_BOOL hc_gps_work_state(void)
{

	
	return MMI_FALSE;
}


void hc_gps_update_icon_status(MMI_BOOL status)
{
	if(status)
	{
		//wgui_status_icon_bar_show_icon(STATUS_ICON_HC_GPS);
	}
	else
	{
		//wgui_status_icon_bar_hide_icon(STATUS_ICON_HC_GPS);
	}	
}

void gps_lon_parse(S8 *pBuff)
{
	U8 data_buf[16];
	U8 d_buf[4];
	U8 m_buf[16];	
	U8 result_buf[16]={0};
	
	U16 d = 0;
	float m = 0;
	float result = 0;
	U8 i=0;
	

	memset(data_buf, 0, sizeof(data_buf));
	memset(d_buf, 0, sizeof(d_buf));
	memset(m_buf, 0, sizeof(m_buf));
	memset(result_buf, 0, sizeof(result_buf));
	
	strcpy(data_buf, pBuff);
	//kal_prompt_trace(MOD_BT, "gps_lon_parse data_buf %s", data_buf);
	strncpy(d_buf, data_buf, 3);
	//kal_prompt_trace(MOD_BT, "gps_lon_parse d_buf %s", d_buf);
	sscanf(d_buf, "%d", &d);
	//kal_prompt_trace(MOD_BT, "gps_lon_parse d %d", d);

	for(i = 0; i < (strlen(data_buf) - 2); i++)
	{
	   m_buf[i] = data_buf[i+3];
	}
	//kal_prompt_trace(MOD_BT, "gps_lon_parse m_buf %s", m_buf);
	sscanf(m_buf, "%f", &m);

	result = (float)d + (float)((float)m / 60);

	sprintf(result_buf, "%.6f", result);
	//kal_prompt_trace(MOD_BT, "gps_lon_parse result_buf %s", result_buf);
	strcpy(gGprmcdate.longi, result_buf);
}


void gps_lat_parse(S8 *pBuff)
{
    U8 data_buf[16];
	U8 d_buf[4];
	U8 m_buf[16];	
	U8 result_buf[16]={0};
	
	U16 d = 0;
	float m = 0;
	float result = 0;
	U8 i=0;
	

	memset(data_buf, 0, sizeof(data_buf));
	memset(d_buf, 0, sizeof(d_buf));
	memset(m_buf, 0, sizeof(m_buf));
	memset(result_buf, 0, sizeof(result_buf));
	
	strcpy(data_buf, pBuff);
	//kal_prompt_trace(MOD_BT, "gps_lat_parse data_buf %s", data_buf);
	strncpy(d_buf, data_buf, 2);
	//kal_prompt_trace(MOD_BT, "gps_lat_parse d_buf %s", d_buf);
    sscanf(d_buf, "%d", &d);
	//kal_prompt_trace(MOD_BT, "gps_lat_parse d %d", d);

	for(i = 0; i < (strlen(data_buf) - 2); i++)
	{
       m_buf[i] = data_buf[i+2];
	}
	//kal_prompt_trace(MOD_BT, "gps_lat_parse m_buf %s", m_buf);
	sscanf(m_buf, "%f", &m);

	result = (float)d + (float)((float)m / 60);

	sprintf(result_buf, "%.6f", result);
	//kal_prompt_trace(MOD_BT, "gps_lat_parse result_buf %s", result_buf);
	strcpy(gGprmcdate.lati, result_buf);
}

void UART_Close(UART_PORT port, module_type ownerid)
{
	DCL_HANDLE handle;
	UART_CTRL_CLOSE_T data;
	data.u4OwenrId = ownerid;
	handle = DclSerialPort_Open(port,0);
	DclSerialPort_Control(handle,SIO_CMD_CLOSE, (DCL_CTRL_DATA_T*)&data);		 
}

kal_bool UART_Open(UART_PORT port, module_type ownerid)
{
	DCL_HANDLE handle;
        UART_CTRL_OPEN_T data;
	UART_CTRL_INIT_T data_init;
	UART_CTRL_OWNER_T uart_owner;
	UART_CTRL_POWERON_T power;
	DCL_STATUS status;
	
	data.u4OwenrId = ownerid;
	data_init.u4Flag = 0;
	uart_owner.u4OwenrId = ownerid;
	handle = DclSerialPort_Open(port,0);

	status =DclSerialPort_Control(handle,SIO_CMD_INIT,(DCL_CTRL_DATA_T *)&data_init);
   	status = DclSerialPort_Control(handle,SIO_CMD_OPEN, (DCL_CTRL_DATA_T*)&data);
	power.bFlag_Poweron=KAL_TRUE;
	status =  DclSerialPort_Control(handle, UART_CMD_POWER_ON, (DCL_CTRL_DATA_T*)&power);
	status =  DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*)&uart_owner);

	 if(STATUS_OK != status)
		return KAL_FALSE;
	
}

kal_uint16 UART_GetBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, kal_uint8 *status, module_type ownerid)
{

	DCL_HANDLE handle;
	UART_CTRL_GET_BYTES_T data;

	data.u4OwenrId = ownerid;
	data.u2Length = Length;
	data.puBuffaddr = Buffaddr;
	data.pustatus = status;
	handle = DclSerialPort_Open(port,0);
	DclSerialPort_Control(handle,SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*)&data);
	return data.u2RetSize;

}


kal_uint16 UART_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length, module_type ownerid)
{

	DCL_HANDLE handle;
	UART_CTRL_PUT_BYTES_T data;

//	kal_prompt_trace(MOD_BT,"uart write %s", Buffaddr);
	data.u4OwenrId = ownerid;
	data.u2Length = Length;
	data.puBuffaddr = Buffaddr;
	//data.pustatus = status;
	handle = DclSerialPort_Open(port,0);
	DclSerialPort_Control(handle,SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*)&data);
	return data.u2RetSize;

}


void UART_SetBaudRate(UART_PORT port, UART_baudrate baudrate, module_type ownerid)
{

	DCL_HANDLE handle;
	UART_CTRL_BAUDRATE_T data;
	data.u4OwenrId = ownerid;
	data.baudrate = baudrate;
	handle = DclSerialPort_Open(port,0);
	DclSerialPort_Control(handle,SIO_CMD_SET_BAUDRATE, (DCL_CTRL_DATA_T*)&data);
}



module_type UART_GetOwnerID(UART_PORT port)
{

	DCL_HANDLE handle;
	UART_CTRL_OWNER_T data;

	handle = DclSerialPort_Open(port,0);
	DclSerialPort_Control(handle,SIO_CMD_GET_OWNER_ID, (DCL_CTRL_DATA_T*)&data);
	return (module_type)(data.u4OwenrId);
	
}	


void GPRMC_data_parse(U8 * pBuf)
{
#if 0
	U8*  pStart;
	U8 i, j, k;
	U8 temp[16];

	j = 0;
	pStart = strstr(pBuf, ",");
	for (i = 0; i < 9; i++)
	{
		k = 0;
		j++;
		memset(temp, 0, sizeof(temp));
		while (*(pStart + j) != ',') {
			switch (i) {
				case 0:
					gGprmcdate.time[k++] = *(pStart + j);
					break;
				case 1:
					gGprmcdate.state[k++] = *(pStart + j);
					break;
				case 2:
					// ddmm.mmmm -> dd.mmmmmm
					#if 0
					if (*(pStart + j) != '.') {
						if ((l++) == 2) {
							gGprmcdate.lati[k++] = '.';
						}
						gGprmcdate.lati[k++] = *(pStart + j);
					}
					#endif
					temp[k++] = *(pStart + j);
					break;
				case 3:
					gGprmcdate.N_S[k++] = *(pStart + j);
					break;
				case 4:
					// dddmm.mmmm -> ddd.mmmmmm
					#if 0
					if (*(pStart + j) != '.') {
						if ((l++) == 3) {					
							gGprmcdate.longi[k++] = '.';
						}
						gGprmcdate.longi[k++] = *(pStart + j);
					}
					#endif
					temp[k++] = *(pStart + j);
					break;
				case 5:
					gGprmcdate.E_W[k++] = *(pStart + j);
					break;
				case 6:
					gGprmcdate.speed[k++] = *(pStart + j);
					break;					
				case 7:
					gGprmcdate.direc[k++] = *(pStart + j);
					break;
				case 8:
					gGprmcdate.date[k++] = *(pStart + j);
					break;

				default:
					break;
			}
			j++;
		}

		if (temp[0])
		{
			if (i == 2)
			{
				gps_lat_parse(temp);
			}

			if (i == 4)
			{
				gps_lon_parse(temp);
			}
		}
	}

	//kal_prompt_trace(MOD_BT,"gGprmcdate.lati: %s", gGprmcdate.lati);
	return;
#else
	U8 *start_p = NULL;
	U8 *end_p = NULL;
	U8 temp[16];
	U32 len = 0;
	S32 error;

	// time
	start_p = pBuf + strlen("$GPRMC,");
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -1;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		//kal_prompt_trace(MOD_BT,"start: %x, end: %x, len: %d", start_p, end_p, len);
		if (len >= sizeof(gGprmcdate.time))
		{
			error = -11;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGprmcdate.time, start_p, len);
			}
		}
	}

	// state
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -2;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGprmcdate.state))
		{
			error = -21;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGprmcdate.state, start_p, len);

				if (strcmp(gGprmcdate.state, "A") == 0)
				{
					kal_prompt_trace(MOD_BT, "=====sat gGprmcdate state=%s gGprmcdate.time=%s hc_ud_time=%d", gGprmcdate.state, gGprmcdate.time ,hc_ud_time);

					if(mmi_frm_scrn_get_active_id() == SCR_ID_FM_GPS_TEST){ //  && (gGGAData.sat_num[0]>='1' && gGGAData.sat_num[0]<='9' )
						S16 error;

						kal_prompt_trace(MOD_BT, "get sat num close test gps");
						g_sensor_cntx.gps_test_count++;
						if(g_sensor_cntx.gps_test_count>200){
							g_sensor_cntx.gps_test_count = 200;
						}
						HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_GPS_AVALIABLE_REQ, NULL);
						WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
					}
				}
				else{
					kal_prompt_trace(MOD_BT, "====GPRMC_data_parse gGprmcdate state=%s gGprmcdate.time=%s hc_ud_time=%d", gGprmcdate.state,gGprmcdate.time, hc_ud_time);
				}
				
			}
		}
	}

	// lat
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -3;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(temp))
		{
			error = -31;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				memset(temp, 0, sizeof(temp));
				strncpy(temp, start_p, len);
				gps_lat_parse(temp);
			}
		}
	}

	// N/S
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -4;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGprmcdate.N_S))
		{
			error = -41;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGprmcdate.N_S, start_p, len);
			}
		}
	}

	// lon
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -5;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(temp))
		{
			error = -51;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				memset(temp, 0, sizeof(temp));
				strncpy(temp, start_p, len);
				gps_lon_parse(temp);
			}
		}
	}

	// E/W
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -6;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGprmcdate.E_W))
		{
			error = -61;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGprmcdate.E_W, start_p, len);
			}
		}
	}

	// speed
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -7;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGprmcdate.speed))
		{
			error = -71;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGprmcdate.speed, start_p, len);
			}
		}
	}

	// direc
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -8;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGprmcdate.direc))
		{
			error = -81;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGprmcdate.direc, start_p, len);
			}
		}
	}

	// date
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -9;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGprmcdate.date))
		{
			error = -91;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGprmcdate.date, start_p, len);
			}
		}
	}

	return;
err:
	kal_prompt_trace(MOD_BT,"[GPS] GPRMC Parse error %d", error);
	kal_prompt_trace(MOD_BT,"[GPS] %s", pBuf);
	return;
#endif
}


void GGADataParse(U8 * pBuf)
{
#if 0
	U8*  pStart;
	U8 i, j, k, l;

	j = 0;
	pStart = strstr(pBuf, ",");
	for (i = 0; i < 9; i++)
	{
		k = 0;
		l = 0;
		j++;
		while (*(pStart + j) != ',') {
			switch (i) {

				case 6:
					gGGAData.sat_num[k++] = *(pStart + j);
					break;					

				case 8:
					gGGAData.elev[k++] = *(pStart + j);
					break;

				default:
					break;
			}
			j++;
		}
	}

	return;
#else
	U8 *start_p = NULL;
	U8 *end_p = NULL;
	U8 temp[16];
	U32 len = 0;
	S32 error;

	// time
	start_p = pBuf + strlen("$GPGGA,");
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -1;
		goto err; 
	}

	// lat
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -2;
		goto err; 
	}

	// N/S
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -3;
		goto err; 
	}

	// lon
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -4;
		goto err; 
	}

	// E/W
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -5;
		goto err; 
	}

	// state
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -6;
		goto err; 
	}
	
	// sat num
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -7;
		goto err; 
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGGAData.sat_num))
		{
			error = -71;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGGAData.sat_num, start_p, len);
				//kal_prompt_trace(MOD_BT, "get sat num=%s len=%d", gGGAData.sat_num,len );
				
				/*if(mmi_frm_scrn_get_active_id() == SCR_ID_FM_GPS_TEST && (gGGAData.sat_num[0]>='1' && gGGAData.sat_num[0]<='9' ) ){ 
					kal_prompt_trace(MOD_BT, "get sat num close test gps");
					HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_GPS_AVALIABLE_REQ, NULL);
				}*/
				
			}
		}
	}

	// HDOP
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -8;
		goto err; 
	}

	// elev
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -9;
		goto err; 
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(gGGAData.elev))
		{
			error = -91;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(gGGAData.elev, start_p, len);
			}
		}
	}

	return;
err:
	kal_prompt_trace(MOD_BT,"[GPS] GGA Parse error %d", error);
	kal_prompt_trace(MOD_BT,"[GPS] %s", pBuf);
	return;
#endif

}


void GPRMC_gps_parse(U8 *pBuf)
{
	U8* pStart;

	pStart = strstr(pBuf, "$GPRMC,");
	if (pStart != NULL)
	{
		//kal_prompt_trace(MOD_BT,"GPRMC: %s", pStart);
		GPRMC_data_parse(pStart);
	}
	return;
}

void GGAParse(U8 *pBuf)
{
	U8* pStart;

	pStart = strstr(pBuf, "$GPGGA,");
	if (pStart != NULL)
	{
		//kal_prompt_trace(MOD_BT,"GPGGA: %s", pStart);
		//GPGGA_data_parse(pStart);
		GGADataParse(pStart);
	}
	return; 
}


U8 mmi_GPS_uart_readyToRead_ind_hdler(void* msg)
{
	uart_ready_to_read_ind_struct* uart_rtr_ind = (uart_ready_to_read_ind_struct*)msg;
	kal_uint16 len = 0;
	kal_uint8 status =0;
	kal_uint8 rbuf[64];
	U8 *pbuf;
	U32 total_len;
	U8* start_p;
	//kal_prompt_trace(MOD_BT,"uart read gps data begin");

	memset(&gGprmcdate, 0x00, sizeof(GPRMC_STRUCK));
	memset(&gGGAData, 0x00, sizeof(GGA_STRUCK));

	
	if(uart_rtr_ind->port !=uart_port2 || UART_GetOwnerID(uart_rtr_ind->port) != MOD_MMI) 
		return;

	total_len = 0;
	pbuf = OslMalloc(1024);
	if (pbuf == NULL)
	{
		kal_prompt_trace(MOD_BT,"[GPS] buffer malloc failed");
		return;
	}
		
	memset(rbuf, 0, sizeof(rbuf));	
	memset(pbuf, 0, 1024);
	do{
		len = UART_GetBytes(uart_rtr_ind->port, rbuf, sizeof(rbuf), &status, MOD_MMI);
		if (len > 0)
		{
			memcpy(pbuf + total_len, rbuf, len);
			total_len += len;
		}
	}while(len > 0);

//	kal_prompt_trace(MOD_BT,"uart read: %s", pbuf);
	if (total_len > 0)
	{
		start_p = strstr(pbuf, "$PMTK");
		if (epo_write_start && start_p != NULL)
		{
			hc_gps_epo_send_assistance_data(pbuf);
		}
		else
		{
			GPRMC_gps_parse(pbuf);
			GGAParse(pbuf);
		}
		//kal_prompt_trace(MOD_BT,"read len total: %d", total_len);
	}
	
	OslMfree(pbuf);
    //kal_prompt_trace(MOD_BT,"uart read gps data end");
}

#if defined(__MMI_AGPS_DATA_H_SUPPORT__)
kal_uint16 uart_write_agps_flag = 0;
extern U32 rcvd_buffer_agps_ub_length;

extern S8	rcvd_buffer_agps_ub[1536];
static kal_uint8 agps_uart_handle;

void UART_write_agps_open(void);



void UART_write_agps_entry(void)
{
    //kal_prompt_trace(MOD_BT,"-->hsl UART_write_agps_entry 1");
    if((GPSdw_sms_open_flag!=1) && (g_gj_gps_flag!=1))
    {
         //kal_prompt_trace(MOD_BT,"-->hsl UART_write_agps_entry 2");
         uart_write_agps_flag=1;
         UART_write_agps_open();
	}
}

void UART_write_agps_close_timer_handle(void)
{
     StopTimer(PHONE_AGPS_WRITE_TIMER);
     UART_Close(uart_port2, MOD_MMI);
	 uart_write_agps_flag=0;

	GPIO_ModeSetup(gpio_gps_power_pin, 0);
	GPIO_InitIO(1, gpio_gps_power_pin);
	GPIO_WriteIO(0, gpio_gps_power_pin);	 
}

void UART_write_agps_open(void)
{
    kal_uint16 returnWriteLen = 0;
    kal_uint8 status =0;


	GPIO_ModeSetup(gpio_gps_power_pin, 0);
	GPIO_InitIO(1, gpio_gps_power_pin);
	GPIO_WriteIO(1, gpio_gps_power_pin);	

    kal_prompt_trace(MOD_BT,"-->hsl UART_write_agps_open");

	agps_uart_handle = L1SM_GetHandle ();
#if !defined(WIN32)	
	UART_SetSleepEnable(0);
#endif
	L1SM_SleepDisable(agps_uart_handle);	
	UART_Open(uart_port2, MOD_MMI);
	UART_SetBaudRate(uart_port2,UART_BAUD_115200,MOD_MMI);

    returnWriteLen = UART_PutBytes_h(uart_port2, rcvd_buffer_agps_ub, rcvd_buffer_agps_ub_length, &status, MOD_MMI);

	kal_prompt_trace(MOD_BT,"-->hsl write data returnWriteLen=%d,buffer_data=%d",returnWriteLen,rcvd_buffer_agps_ub_length);

    StartTimer(PHONE_AGPS_WRITE_TIMER,2*1000, UART_write_agps_close_timer_handle);

}

#endif

void HcTurnOnVMC(kal_bool turnOnLdo)
{
	DCL_HANDLE handle;
	PMU_CTRL_LDO_BUCK_SET_EN val;

	/*
		currently, we just call the PMIC API to control the LDO.
		We have to add debug information here so that we can assert on race conditions.
	*/
	//turnOnLdo = KAL_TRUE;
	turnOnLdo = turnOnLdo;
	handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
	val.enable = turnOnLdo;
	val.mod = VMC;
	DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);

	DclPMU_Close(handle);
}

unsigned char calc_nmea_checksum (const char* sentence)
{
	unsigned char checksum = 0;
	while (*sentence)
	{
		checksum ^= (unsigned char)*sentence++;
	}
	return checksum;
}

int utc_to_gps_hour (int iYr, int iMo, int iDay, int iHr)
{
	int iYearsElapsed; // Years since 1980
	int iDaysElapsed; // Days elapsed since Jan 6, 1980
	int iLeapDays; // Leap days since Jan 6, 1980
	int i;
	// Number of days into the year at the start of each month (ignoring leap years)
	const unsigned short doy[12] =
	{0,31,59,90,120,151,181,212,243,273,304,334};
	iYearsElapsed = iYr - 1980;
	i = 0;
	iLeapDays = 0;
	while (i <= iYearsElapsed)
	{
		if ((i % 100) == 20)
		{
			if ((i % 400) == 20)
			{
				iLeapDays++;
			}
		}
		else if ((i % 4) == 0)
		{
			iLeapDays++;
		}
		i++;
	}
	
	if ((iYearsElapsed % 100) == 20)
	{
		if (((iYearsElapsed % 400) == 20) && (iMo <= 2))
		{
			iLeapDays--;
		}
	}
	else if (((iYearsElapsed % 4) == 0) && (iMo <= 2))
	{
		iLeapDays--;
	}
	iDaysElapsed = iYearsElapsed * 365 + (int)doy[iMo - 1] + iDay + iLeapDays
	- 6;
	// Convert time to GPS weeks and seconds
	return (iDaysElapsed * 24 + iHr);
}

U32 hc_get_utc_sec(void)
{
    applib_time_struct t;

    applib_dt_get_rtc_time(&t);
    return (U32) applib_dt_sec_local_to_utc(applib_dt_mytime_2_utc_sec(&t, KAL_FALSE));
}


U8 gps_data_post_idle_entry = 0; //  0 http ; 1 nv idle ; 2 plmn ; 3 finish

void hc_gps_epo_send_assistance_data(U8 *uart_read_p)
{
	static S32 i = 0;
	FS_HANDLE fd = -1;
	S32 segment, epo_gps_hour, current_gps_hour;
	U32 epobuf[MTKEPO_RECORD_SIZE/sizeof(U32)];
	CHAR strbuf[200], outbuf[200];
	S32 ret = 0;
	U32 read_size = 0;

	U16 wFilename[32];
	U16 wFilepath[HC_PATH_BUFFER_SIZE];
	U8* start_p;

    applib_time_struct utc_time;
    applib_time_struct rtc_time;

	kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data uart_read_p=%s gps_data_post_idle_entry=%d", uart_read_p, gps_data_post_idle_entry);

	applib_dt_get_rtc_time(&rtc_time);
	applib_dt_rtc_to_utc_with_default_tz(&rtc_time, &utc_time);

	memset(strbuf, 0, sizeof(strbuf));
	memset(outbuf, 0, sizeof(outbuf));

	start_p = strstr(uart_read_p, "$PMTK010,001*2E"); // start-up 
	if (start_p != NULL)
	{
		//GPSActived = MMI_TRUE;
	
		// utc time
		sprintf(strbuf, "PMTK740,%04d,%02d,%02d,%02d,%02d,%02d", utc_time.nYear, utc_time.nMonth, utc_time.nDay,
																 utc_time.nHour, utc_time.nMin, utc_time.nSec);
		sprintf(outbuf, "$%s*%02X\r\n", strbuf, calc_nmea_checksum(strbuf));

		kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data post time=%s", outbuf);
		
		ret = UART_PutBytes(uart_port2, outbuf, strlen(outbuf), MOD_MMI);
		goto exit;
	}

	start_p = strstr(uart_read_p, "$PMTK010,002*2D");
	if (start_p != NULL)
	{
		goto exit;
	}
	
	start_p = strstr(uart_read_p, "$PMTK001,740,3*33"); //  utc time ack
	if (start_p != NULL)
	{
		// location
		if(gps_data_post_idle_entry == 1 && hc_get_nvram_enable()==1 ){ // nv
			kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data1 %s %s", (char*)(g_sensor_cntx.plmn_info.lati) , (char*)(g_sensor_cntx.plmn_info.longi) );
			
			sprintf(strbuf, "PMTK741,%s,%s,0000,%04d,%02d,%02d,%02d,%02d,%02d", (char*)(g_sensor_cntx.plmn_info.lati) , (char*)(g_sensor_cntx.plmn_info.longi),
					utc_time.nYear, utc_time.nMonth, utc_time.nDay, utc_time.nHour, utc_time.nMin, utc_time.nSec);
		}
		else { // if(gps_data_post_idle_entry == 2 ) plmn  if(gps_data_post_idle_entry == 3 ) end
			kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data2 %s %s", g_epo_cntx.lat, g_epo_cntx.lon );
						
			sprintf(strbuf, "PMTK741,%s,%s,0000,%04d,%02d,%02d,%02d,%02d,%02d", g_epo_cntx.lat, g_epo_cntx.lon,
					utc_time.nYear, utc_time.nMonth, utc_time.nDay, utc_time.nHour, utc_time.nMin, utc_time.nSec);
		}

		
		sprintf(outbuf, "$%s*%02X\r\n", strbuf, calc_nmea_checksum(strbuf));

		kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data post location=%s", outbuf);
		
		ret = UART_PutBytes(uart_port2, outbuf, strlen(outbuf), MOD_MMI);
		goto exit;
	}

	start_p = strstr(uart_read_p, "$PMTK001,741,3*32"); // location ack
	if (start_p != NULL)
	{
		i = 0;
		memset(wFilename, 0, sizeof(wFilename));
		memset(wFilepath, 0, sizeof(HC_PATH_BUFFER_SIZE));

		if(gps_data_post_idle_entry == 1){ // nv
			char filename[32] = {0};
			sprintf(filename, "%4d%02d%02d.EPO", utc_time.nYear,  utc_time.nMonth, utc_time.nDay);
			
			kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data epo_11 %s", filename );
			mmi_asc_to_wcs(wFilename, filename);
		}
		else{
			kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data epo_12 %s", g_epo_cntx.filename );
			mmi_asc_to_wcs(wFilename, g_epo_cntx.filename);
		}
		

		kal_wsprintf(wFilepath, "%w%w", g_epo_cache_cntx.cache_path, wFilename);
		fd = FS_Open(wFilepath, FS_READ_ONLY);
		if (fd < 0)
		{
			kal_prompt_trace(MOD_BT,"open epo file error");
			epo_write_start = MMI_FALSE;
			goto exit;
		}

		ret = FS_Read(fd, &epo_gps_hour, 4, &read_size);

		kal_prompt_trace(MOD_BT,"send_assistance_data  gps1:%s %d %d",g_epo_cntx.filename, read_size, ret);
		
		if (ret == FS_NO_ERROR && read_size == 4)
		{
			epo_gps_hour &= 0x00FFFFFF;
			current_gps_hour = utc_to_gps_hour(utc_time.nYear, utc_time.nMonth, utc_time.nDay, utc_time.nHour);
			segment = (current_gps_hour - epo_gps_hour) / 6;
			if ((segment < 0) || (segment >= MTKEPO_SEGMENT_NUM))
			{
				kal_prompt_trace(MOD_BT,"segment error");
				goto exit;
			}
	
//			kal_prompt_trace(MOD_BT,"segment %d", segment);
			
			FS_Seek(fd, segment*(MTKEPO_RECORD_SIZE)*(MTKEPO_SV_NUMBER), SEEK_SET);
			memset(epobuf, 0, sizeof(epobuf));
			FS_Read(fd, &epobuf, MTKEPO_RECORD_SIZE, &read_size);
			// epo data
			sprintf(strbuf, "PMTK721,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X",
				i+1,
				epobuf[0], epobuf[1], epobuf[2], epobuf[3], epobuf[4], epobuf[5],
				epobuf[6], epobuf[7], epobuf[8], epobuf[9], epobuf[10], epobuf[11],
				epobuf[12], epobuf[13], epobuf[14], epobuf[15], epobuf[16], epobuf[17]);
			sprintf(outbuf, "$%s*%02X\r\n", strbuf, calc_nmea_checksum(strbuf));
			//kal_prompt_trace(MOD_BT, "============UART_PutBytes index=%d  outbuf=%s ", i, outbuf);
			ret = UART_PutBytes(uart_port2, outbuf, strlen(outbuf), MOD_MMI);
			goto exit;
//				kal_prompt_trace(MOD_BT,"uart write %d", ret);
		}
		else{
			kal_prompt_trace(MOD_BT,"send_assistance_data  FS_Read error");
			goto exit;
		}
		
	}

	start_p = strstr(uart_read_p, "$PMTK001,721,3*34"); // epo data
	if (start_p != NULL)
	{
		++i;
		
		kal_prompt_trace(MOD_BT,"post epo i=%d utc_time.nHour=%d", i, utc_time.nHour);
		
		if (i == MTKEPO_SV_NUMBER*2)
		{
			kal_prompt_trace(MOD_BT,"post epo end");
			epo_write_start = MMI_FALSE;
			gps_data_post_idle_entry = 3; // end
			goto exit;
		}
		
		memset(wFilename, 0, sizeof(wFilename));
		memset(wFilepath, 0, sizeof(HC_PATH_BUFFER_SIZE));

		if(gps_data_post_idle_entry == 1){ // nv
			char filename[32] = {0};
			sprintf(filename, "%4d%02d%02d.EPO", utc_time.nYear,  utc_time.nMonth, utc_time.nDay);
			
			kal_prompt_trace(MOD_BT,"hc_gps_epo_send_assistance_data epo_21 %s", filename );
			mmi_asc_to_wcs(wFilename, filename);
		}
		else{
			mmi_asc_to_wcs(wFilename, g_epo_cntx.filename);
		}
		
		kal_wsprintf(wFilepath, "%w%w", g_epo_cache_cntx.cache_path, wFilename);
		fd = FS_Open(wFilepath, FS_READ_ONLY);
		if (fd < 0)
		{
			kal_prompt_trace(MOD_BT,"open epo file error");
			epo_write_start = MMI_FALSE;
			goto exit;
		}
	
		if (ret = FS_Read(fd, &epo_gps_hour, 4, &read_size) == FS_NO_ERROR && read_size == 4)
		{
		    S32 fs_ret;
			
			epo_gps_hour &= 0x00FFFFFF;
			current_gps_hour = utc_to_gps_hour(utc_time.nYear, utc_time.nMonth, utc_time.nDay, utc_time.nHour);
			segment = (current_gps_hour - epo_gps_hour) / 6;
			if ((segment < 0) || (segment >= MTKEPO_SEGMENT_NUM))
			{
				kal_prompt_trace(MOD_BT,"segment error");
				goto exit;
			}
	
//			kal_prompt_trace(MOD_BT,"segment %d", segment);
			
			fs_ret = FS_Seek(fd, segment*(MTKEPO_RECORD_SIZE)*(MTKEPO_SV_NUMBER) + i*MTKEPO_RECORD_SIZE, SEEK_SET);

			kal_prompt_trace(MOD_BT,"FS_Seek fs_ret=%d address=%d", fs_ret, segment*(MTKEPO_RECORD_SIZE)*(MTKEPO_SV_NUMBER) + i*MTKEPO_RECORD_SIZE, SEEK_SET);

			if(segment*(MTKEPO_RECORD_SIZE)*(MTKEPO_SV_NUMBER) + i*MTKEPO_RECORD_SIZE, SEEK_SET>=18432 ){
				epo_write_start = MMI_FALSE;
				gps_data_post_idle_entry = 3; // end
				goto exit;
			}
			
			memset(epobuf, 0, sizeof(epobuf));
			FS_Read(fd, &epobuf, MTKEPO_RECORD_SIZE, &read_size);
			sprintf(strbuf, "PMTK721,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X,%X",
				(i%MTKEPO_SV_NUMBER+1),
				epobuf[0], epobuf[1], epobuf[2], epobuf[3], epobuf[4], epobuf[5],
				epobuf[6], epobuf[7], epobuf[8], epobuf[9], epobuf[10], epobuf[11],
				epobuf[12], epobuf[13], epobuf[14], epobuf[15], epobuf[16], epobuf[17]);
			sprintf(outbuf, "$%s*%02X\r\n", strbuf, calc_nmea_checksum(strbuf));
			kal_prompt_trace(MOD_BT, "============UART_PutBytes index=%d  outbuf=%s ", i, outbuf);
			ret = UART_PutBytes(uart_port2, outbuf, strlen(outbuf), MOD_MMI);
			goto exit;
//				kal_prompt_trace(MOD_BT,"uart write %d", ret);
		}

	}

	epo_write_start = MMI_FALSE;

exit:
	if (fd >= FS_NO_ERROR)
	{
		FS_Close(fd);
	}

	if (!epo_write_start)
	{
		if (g_gps_cntx.work_state == gps_sleep)
		{
			hc_gps_set_work_state(gps_sleep);
		}
	}
//	kal_prompt_trace(MOD_BT,"uart write %d", ret);
	return;
}

void hc_gps_epo_uart_write_hdlr(void)
{
	CHAR strbuf[200], outbuf[200];
	MYTIME  LocalTime, UtcTime, temp;	
	S32 ret;
	U32 utc_sec;
	FLOAT timezone;

	kal_prompt_trace(MOD_BT,"hc_gps_epo_uart_write_hdlr entry %d %d gps_data_post_idle_entry=%d", g_s_vm_sal_cell_nbr_num , hc_get_nvram_enable() ,gps_data_post_idle_entry);


	if(g_s_vm_sal_cell_nbr_num <= 0 ){ // || hc_get_nvram_enable() == 0 
		kal_prompt_trace(MOD_BT,"hc_gps_epo_uart_write_hdlr error" );
		StartTimer(HC_PLMN_AVALIABLE_TIMER, 1000, hc_gps_epo_uart_write_hdlr);
		return;
	}


	if( epo_write_start == MMI_TRUE){
		kal_prompt_trace(MOD_BT,"hc_gps_epo_uart_write_hdlr epo_write_start MMI_TRUE" );
		return;
	}


	//show_nvram_plmn_info();
	//hc_saveplmn_info_first();
		
//	memset(&LocalTime, 0, sizeof(MYTIME));
//	memset(&UtcTime, 0, sizeof(MYTIME));
//	memset(&temp, 0, sizeof(MYTIME));
//	GetDateTime(&LocalTime);
//	kal_prompt_trace(MOD_BT,"%d/%d/%d", LocalTime.nYear, LocalTime.nMonth, LocalTime.nDay);
//	kal_prompt_trace(MOD_BT,"%d:%d:%d", LocalTime.nHour, LocalTime.nMin, LocalTime.nSec);	

	kal_prompt_trace(MOD_BT,"========hc_gps_epo_uart_write_hdlr hc_gps_wake_hdlr" );
	if (g_gps_cntx.work_state == gps_sleep)
	{
		hc_gps_wake_hdlr();
	}

	epo_write_start = MMI_TRUE;
	
	memset(strbuf, 0, sizeof(strbuf));
	memset(outbuf, 0, sizeof(outbuf));
	
	sprintf(strbuf, "PMTK101");
	sprintf(outbuf, "$%s*%02X\r\n", strbuf, calc_nmea_checksum(strbuf));
	ret = UART_PutBytes(uart_port2, outbuf, strlen(outbuf), MOD_MMI);
//	kal_prompt_trace(MOD_BT,"uart write %d", ret);

//	utc_sec = hc_get_utc_sec();
//	timezone = mmi_dt_get_tz();
//	kal_prompt_trace(MOD_BT,"utc_sec %d", utc_sec);
//	mmi_dt_utc_sec_2_mytime(utc_sec, &temp, MMI_TRUE);
//    mmi_dt_utc_to_rtc(timezone, temp, UtcTime);
//	kal_prompt_trace(MOD_BT,"%d/%d/%d", UtcTime.nYear, UtcTime.nMonth, UtcTime.nDay);
//	kal_prompt_trace(MOD_BT,"%d:%d:%d", UtcTime.nHour, UtcTime.nMin, UtcTime.nSec);

//	sprintf(strbuf, "PMTK740,%04d,%02d,%02d,%02d,%02d,%02d", UtcTime.nYear, UtcTime.nMonth, UtcTime.nDay,
//															 UtcTime.nHour, UtcTime.nMin, UtcTime.nSec);
//	sprintf(outbuf, "$%s*%02X\r\n", strbuf, calc_nmea_checksum(strbuf));
//	ret = UART_PutBytes(uart_port2, outbuf, strlen(outbuf), MOD_MMI);
//	kal_prompt_trace(MOD_BT,"uart write %d", ret);	

//	sprintf(strbuf, "PMTK741,%s,%s,0000,%04d,%02d,%02d,%02d,%02d,%02d", g_epo_cntx.lat, g_epo_cntx.lon,
//			UtcTime.nYear, UtcTime.nMonth, UtcTime.nDay, UtcTime.nHour, UtcTime.nMin, UtcTime.nSec);
//	
//	sprintf(outbuf, "$%s*%02X\r\n", strbuf, calc_nmea_checksum(strbuf));
//	ret = UART_PutBytes(uart_port2, outbuf, strlen(outbuf), MOD_MMI);
//	kal_prompt_trace(MOD_BT,"uart write %d", ret);

//	hc_gps_epo_send_assistance_data(filename, UtcTime.nYear, UtcTime.nMonth, UtcTime.nDay, UtcTime.nHour);
}

S32 hc_gps_epo_parse_url(U8 *pbuff)
{
	U8 *start_p = NULL;
	U8 *end_p = NULL;
	S32 len = 0;
	U8 domain_name[64];
	U8 ip[24];
	U8 port[8];
	U8 path[32];
	U8 filename[32];

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_parse_url");
	
	start_p = strstr(pbuff, "http://");
	if (start_p != NULL)
	{
		start_p = start_p + strlen("http://");
		end_p = strchr(start_p, '/');
		if (end_p != NULL)
		{
			len = end_p - start_p;
			if (len > 0 && len < sizeof(domain_name))
			{
				memset(domain_name, 0, sizeof(domain_name));
				memset(ip, 0, sizeof(ip));
				memset(port, 0, sizeof(port));
				memset(path, 0, sizeof(path));
				
				memcpy(domain_name, start_p, len);
				start_p = end_p;
				end_p = strchr(domain_name, ':');
				if (end_p == NULL)
				{
					strcpy(ip, domain_name);
					strcpy(port, "80");
				}
				else
				{
					*end_p = '\0';

					strcpy(ip, domain_name);
					strcpy(port, end_p + 1);					
				}

				if (strlen(start_p) < sizeof(path))
				{
					U8 ip0, ip1, ip2, ip3, nPort;
						
					strcpy(path, start_p);
					start_p = start_p + 1;
					end_p = strchr(start_p, '/');
					if (end_p != NULL)
					{
						start_p = end_p + 1;
						strcpy(filename, start_p);

//						strcpy(g_epo_cntx.ip, ip);
//						strcpy(g_epo_cntx.port, port);
						strcpy(g_epo_cntx.path, path);
						strcpy(g_epo_cntx.filename, filename);

						kal_prompt_trace(MOD_BT,"=======hc_gps_epo_parse_url get epo filename=%s",filename);
						
						sscanf(ip, "%d.%d.%d.%d", &ip0, &ip1, &ip2, &ip3);
						sscanf(port, "%d", &nPort);
						g_epo_cntx.addr.addr[0] = ip0;
						g_epo_cntx.addr.addr[1] = ip1;
						g_epo_cntx.addr.addr[2] = ip2;
						g_epo_cntx.addr.addr[3] = ip3;
						g_epo_cntx.addr.port = nPort;
						g_epo_cntx.addr.addr_len = 4;
						g_epo_cntx.addr.sock_type = SOC_SOCK_STREAM;
//						kal_prompt_trace(MOD_BT,"[GPS] Epo url parse result: ");
//						kal_prompt_trace(MOD_BT,"[GPS] %s", ip);
//						kal_prompt_trace(MOD_BT,"[GPS] %s", port);
//						kal_prompt_trace(MOD_BT,"[GPS] %s", path);
//						kal_prompt_trace(MOD_BT,"[GPS] %s", filename);
//	 					kal_prompt_trace(MOD_BT,"[GPS] %d.%d.%d.%d:%d", ip0, ip1, ip2, ip3, nPort);
						return 0;
					}
				}
			}
		}
	}
	
	return -1;
}

S32 hc_gps_epo_parse_dt(U8 *dt)
{
	U8 *start_p = NULL;
	U8 *end_p = NULL;
	U8 len;
	CHAR date[12];
	CHAR time[12];
//	CHAR filename[32];
	S32 error;
	S32 ret;
	U16 yr, mo, day, hr, min, sec;

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_parse_dt");

	memset(date, 0, sizeof(date));
	memset(time, 0, sizeof(time));
	start_p = dt;
	end_p = strchr(start_p, ' ');
	if (end_p == NULL)
	{
		error = -1;
		goto err;
	}
	else
	{
		len = end_p - start_p;
		if (len > 0 && len < sizeof(date))
		{
			memcpy(date, start_p, len);
		}
		else
		{
			error = -11;
			goto err;		
		}
	}

	start_p = end_p + 1;
	len = strlen(start_p);
	if (len > 0 && len < sizeof(time))
	{
		memcpy(time, start_p, len);
	}
	else
	{
		error = -2;
		goto err;
	}

	ret = sscanf(date, "%d/%d/%d", &yr, &mo, &day);
	if (ret != 3)
	{
		error = -3;
		goto err;
	}
	
	ret = sscanf(time, "%d:%d:%d", &hr, &min, &sec);
	if (ret != 3)
	{
		error = -4;
		goto err;
	}

//	kal_prompt_trace(MOD_BT,"%d/%d/%d", yr, mo, day);
//	kal_prompt_trace(MOD_BT,"%d:%d:%d", hr, min, sec);

	g_epo_cntx.yr = yr;
	g_epo_cntx.mo = mo;
	g_epo_cntx.day = day;
	g_epo_cntx.hr = hr;
	g_epo_cntx.min = min;
	g_epo_cntx.sec = sec;
	
	return 0;
err:
	kal_prompt_trace(MOD_BT,"[EPO] Get UTC error %d, %s", error, dt);
	return error;
}


void hc_gps_epo_send_req(void)
{
	U8 *send_data = NULL;
	U32 send_size;
	U32 BUFFER_SIZE = 256;
	//U32 nDelay = 60*1000;
	S32 remaining_size = 0;

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_send_req  hc_client_ready=%d g_s_vm_sal_cell_nbr_num=%d EPO_REQ_DELAY=%d",hc_client_ready(), g_s_vm_sal_cell_nbr_num, EPO_REQ_DELAY);

	if(g_s_vm_sal_cell_nbr_num <= 0 ){ // || hc_get_nvram_enable() == 0 
		kal_prompt_trace(MOD_BT,"hc_gps_epo_send_req 1000ms" );
		StartTimer(HC_PLMN_AVALIABLE_TIMER, 1000, hc_gps_epo_send_req);
		return;
	}

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_send_req StopTimer HC_EPO_REQ_TIMER");
	
	StopTimer(HC_EPO_REQ_TIMER);
	if (!hc_client_ready())
	{
		return;
	}

	remaining_size = hc_fs_get_drive_remaining_size();

	if ((g_s_vm_sal_cell_nbr_num > 0) && (remaining_size > 19*1024))
	{
		// malloc buffer
		media_get_ext_buffer(MOD_MMI, (void **)&send_data, BUFFER_SIZE);
		if (send_data == NULL)
		{
			kal_prompt_trace(MOD_BT,"[sys] make info get buffer error %d", __LINE__);
			return;
		}

		memset(send_data, 0, BUFFER_SIZE);
		send_size = hc_make_location_info(HC_PROTL_EPO, send_data, BUFFER_SIZE);
		kal_prompt_trace(MOD_BT,"=========hc_gps_epo_send_req: %s", send_data);
				
		hc_client_send(send_data, send_size);

		// free buffer
		if (send_data != NULL)
		{
			media_free_ext_buffer(MOD_MMI, (void **)&send_data);
		}	
	}

	if(g_s_vm_sal_cell_nbr_num <=0){
		kal_prompt_trace(MOD_BT,"=======hc_gps_epo_send_req 2000 hc_gps_epo_send_req");
		StartTimer(HC_EPO_REQ_TIMER, 2000, hc_gps_epo_send_req);
	}
	else{
	//	EPO_REQ_DELAY = 60*1000;
		kal_prompt_trace(MOD_BT,"=======hc_gps_epo_send_req %d hc_gps_epo_send_req",EPO_REQ_DELAY);
		StartTimer(HC_EPO_REQ_TIMER, EPO_REQ_DELAY, hc_gps_epo_send_req);
	}
}

void hc_gps_epo_req_timer_start(void)
{
	kal_prompt_trace(MOD_BT,"=========hc_gps_epo_req_timer_start hc_gps_epo_send_req" );

	EPO_REQ_DELAY = 30*1000;

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_req_timer_start StopTimer HC_EPO_REQ_TIMER");
	StopTimer(HC_EPO_REQ_TIMER);
	StartTimer(HC_EPO_REQ_TIMER, EPO_REQ_DELAY, hc_gps_epo_send_req);
}

S32 hc_gps_epo_req_hdlr(void *msg)
{
kal_prompt_trace(MOD_BT,"=========hc_gps_epo_req_hdlr hc_gps_epo_send_req" );
	hc_gps_epo_send_req();
	return 0;
}

void hc_gps_epo_req_start()
{
	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_req_start hc_gps_epo_send_req");

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_req_start StopTimer HC_EPO_REQ_TIMER");
	StopTimer(HC_EPO_REQ_TIMER);
	EPO_REQ_DELAY = 2*1000;
	StartTimer(HC_EPO_REQ_TIMER, EPO_REQ_DELAY, hc_gps_epo_send_req);
	EPO_REQ_DELAY = 2*60*60*1000;
}

void hc_gps_epo_rsp_hdlr(U8 *pbuf, U32 nlen)
{
	U8 *start_p = NULL;
	U8 *end_p = NULL;
	S32 len = 0;
	S32 error = 0;

	U8 lat[12];
	U8 lon[12];

	U8 n_s[2];
	U8 e_w[2];

	U8 utc_dt[24];
	U8 epo_url[64];

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_rsp_hdlr");
	
	if (!nlen)
	{
		return;
	}

	memset(lat, 0 , sizeof(lat));
	memset(lon, 0 , sizeof(lon));
	memset(n_s, 0 , sizeof(n_s));
	memset(e_w, 0 , sizeof(e_w));
	memset(utc_dt, 0 , sizeof(utc_dt));
	memset(epo_url, 0 , sizeof(epo_url));

	// lat
	start_p = pbuf;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -1;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(lat))
		{
			error = -11;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(lat, start_p, len);
			}
			else
			{
				error = -12;
				goto err;				
			}
		}
	}

	// N/S
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -2;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(n_s))
		{
			error = -21;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(n_s, start_p, len);
			}
			else
			{
				error = -22;
				goto err;				
			}
		}
	}

	// lon
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -3;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(lon))
		{
			error = -31;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(lon, start_p, len);
			}
			else
			{
				error = -32;
				goto err;				
			}
		}
	}

	// E/W
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -4;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(e_w))
		{
			error = -41;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(e_w, start_p, len);
			}
			else
			{
				error = -42;
				goto err;				
			}
		}
	}

	// UTC Date Time
	start_p = end_p + 1;
	end_p = strchr(start_p, ',');
	if (end_p == NULL)
	{
		error = -5;
		goto err;	
	}
	else
	{
		len = end_p - start_p;
		if (len >= sizeof(utc_dt))
		{
			error = -51;
			goto err;
		}
		else
		{
			if (len > 0)
			{
				strncpy(utc_dt, start_p, len);
			}
			else
			{
				error = -52;
				goto err;				
			}
		}
	}

	// EPO Download Addr
	start_p = end_p + 1;
	len = nlen - (start_p - pbuf);
	if (len >= sizeof(epo_url))
	{
		error = -6;
		goto err;
	}
	else
	{
		if (len > 0)
		{
			strncpy(epo_url, start_p, len);
		}
		else
		{
			error = -61;
			goto err;				
		}
	}

//	kal_prompt_trace(MOD_BT,"[GPS] Epo rsp parse result: ");
//	kal_prompt_trace(MOD_BT,"[GPS] %s", lat);
//	kal_prompt_trace(MOD_BT,"[GPS] %s", n_s);
//	kal_prompt_trace(MOD_BT,"[GPS] %s", lon);
//	kal_prompt_trace(MOD_BT,"[GPS] %s", e_w);
//	kal_prompt_trace(MOD_BT,"[GPS] %s", utc_dt);
//	kal_prompt_trace(MOD_BT,"[GPS] %s", epo_url);

	memset(&g_epo_cntx, 0, sizeof(hc_gps_epo_struck));
	if (hc_gps_epo_parse_url(epo_url) < 0)
	{
		error = -7;
		goto err;		
	}

	if (hc_gps_epo_parse_dt(utc_dt) < 0)
	{
		error = -8;
		goto err;
	}
	
	strcpy(g_epo_cntx.lat, lat);
	strcpy(g_epo_cntx.lon, lon);
	strcpy(g_epo_cntx.n_s, n_s);
	strcpy(g_epo_cntx.e_w, e_w);

	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_rsp_hdlr StopTimer HC_EPO_REQ_TIMER");
	
	StopTimer(HC_EPO_REQ_TIMER);
	EPO_REQ_DELAY = 2*60*60*1000;
	kal_prompt_trace(MOD_BT,"=======hc_gps_epo_rsp_hdlr hc_gps_epo_send_req");
	StartTimer(HC_EPO_REQ_TIMER, EPO_REQ_DELAY, hc_gps_epo_send_req);

	kal_prompt_trace(MOD_BT,"======hc_gps_epo_rsp_hdlr handle epo");
	if (hc_fs_epo_check_local_file_exist(g_epo_cntx.filename) && !hc_gps_get_state() && ( gps_data_post_idle_entry == 1|| gps_data_post_idle_entry == 2 || gps_data_post_idle_entry == 3 )/* && g_sensor_cntx.plmn_info.enable == 1*/)
	{
		kal_prompt_trace(MOD_BT,"======hc_gps_epo_rsp_hdlr post epo directly");
		hc_gps_epo_uart_write_hdlr();
	}
	else
	{
		kal_prompt_trace(MOD_BT,"======hc_gps_epo_rsp_hdlr post epo after download file");
		HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_EPO_HTTP_REQ, NULL);
	}
	
	return;
err:
	kal_prompt_trace(MOD_BT,"[GPS] Epo rsp parse error %d", error);
	kal_prompt_trace(MOD_BT,"[GPS] %s", pbuf);	
	return;
}

S32 hc_gps_epo_http_req(void* msg)
{
	hc_gps_epo_create_http();
	
	return 0;
}

void hc_gps_wake_hdlr(void)
{
	kal_prompt_trace(MOD_BT,"hc_gps_wake_hdlr hc_ud_time=%d",hc_ud_time );
	hc_gps_set_work_state(gps_wake);
}

void hc_gps_locating_timer_hdlr(void)
{
	S16 error;

	ReadRecord(NVRAM_EF_LOCATION_DATA_SEND_TIMER_LID, 1, &hc_ud_time, NVRAM_EF_LOCATION_DATA_SEND_TIMER_SIZE, &error);
	g_gps_cntx.work_state = gps_ready;
	kal_prompt_trace(MOD_BT,"========hc_gps_locating_timer_hdlr hc_upload_timer_hdlr" );
	hc_upload_timer_hdlr();
}

void hc_gps_uart_set_work(MMI_BOOL on)
{
	if (gps_handle == 0xFF)
	{
		gps_handle = L1SM_GetHandle();
	}	
	
	if (on)
	{
		L1SM_SleepDisable(gps_handle);	
		UART_Open(uart_port2, MOD_MMI);
		UART_SetBaudRate(uart_port2,UART_BAUD_115200,MOD_MMI);
		SetProtocolEventHandler(mmi_GPS_uart_readyToRead_ind_hdler, MSG_ID_UART_READY_TO_READ_IND );			
	}
	else
	{
		L1SM_SleepEnable(gps_handle);
		UART_Close(uart_port2, MOD_MMI);
		ClearProtocolEventHandler(MSG_ID_UART_READY_TO_READ_IND);
	}
}

void hc_gps_set_work(MMI_BOOL on)
{
	static MMI_BOOL state = MMI_FALSE;

	kal_prompt_trace(MOD_BT,"hc_gps_set_work on=%d", on);
	if (state == on)
	{
		return;
	}
	
	state = on;

	kal_prompt_trace(MOD_BT,"hc_gps_set_work gGprmcdate.state clear");
	// strcpy(gGprmcdate.state, "V"  );
	memset(gGprmcdate.state, 0, sizeof(gGprmcdate.state) ); // added by donghanchao for get correct gps state 
	
	if (on)
	{
		HcTurnOnVMC(KAL_TRUE);
		hc_gps_uart_set_work(MMI_TRUE);
		hc_gps_update_icon_status(MMI_TRUE);	
	}
	else
	{
		HcTurnOnVMC(KAL_FALSE);
		//GPSActived = MMI_FALSE;
		
		hc_gps_uart_set_work(MMI_FALSE);
		hc_gps_update_icon_status(MMI_FALSE);
	}
}

void hc_gps_set_work_state(hc_gps_state state)
{
	hc_gps_state curr_state = g_gps_cntx.work_state;

	kal_prompt_trace(MOD_BT,"hc_gps_set_work_state  state=%d curr_state=%d epo_write_start=%d", state,curr_state, epo_write_start);

	if (curr_state == gps_not_ready)
	{
		return;
	}

	if (curr_state == state)
	{
		return;
	}

	//if (curr_state == gps_locating)
	//{
	//	return;
	//}

	g_gps_cntx.work_state = state;

	switch (state)
	{
		case gps_wake:
			hc_gps_set_work(MMI_TRUE);
			kal_prompt_trace(MOD_BT,"hc_gps_set_work_state  gps_wake MMI_TRUE %d %d", hc_fs_epo_check_local_file_exist(g_epo_cntx.filename) ,hc_gps_get_state() );
			if (hc_fs_epo_check_local_file_exist(g_epo_cntx.filename) && !hc_gps_get_state() && gps_data_post_idle_entry==3  ) // added by donghanchao 
			{
				kal_prompt_trace(MOD_BT,"+++++++++hc_gps_set_work_state  gps_wake hc_gps_epo_send_req");
				
				//hc_gps_epo_send_req(); // need lat long 
				if(g_s_vm_sal_cell_nbr_num > 0 ){
					hc_gps_epo_uart_write_hdlr();
				}
			}
	
			break;
			
		case gps_sleep:
			kal_prompt_trace(MOD_BT,"========hc_gps_set_work_state hc_gps_set_work epo_write_start=%d", epo_write_start );
			if (!epo_write_start)
			{
				hc_gps_set_work(MMI_FALSE);
			}
			break;	
			
		case gps_locating:
			hc_gps_set_work(MMI_TRUE);
			//hc_ud_time = 60;
			kal_prompt_trace(MOD_BT,"========hc_gps_set_work_state hc_upload_timer_hdlr" );
			hc_upload_timer_hdlr();
			StartTimer(HC_GPS_LOCATING_TIMER, g_gps_cntx.locating_timer, hc_gps_locating_timer_hdlr);
			//StopTimer(HC_SOC_UD_TIMER);
			//StopTimer(HC_GPS_OPEN_TIMER);
			//StartTimer(HC_SOC_UD_TIMER, hc_ud_time*1000, hc_soc_upload_hdlr);
			break;				
		default:
			break;
	}
}

void hc_gps_setclkout(char clk_num, gpio_clk_mode mode)
{
	DCL_HANDLE handle;
	GPIO_CTRL_SET_CLK_OUT_T data;
	handle=DclGPIO_Open(DCL_GPIO_CLK,clk_num);
	data.u2ClkNum=clk_num;
	data.u2Mode=mode;
	DclGPIO_Control(handle,GPIO_CMD_SET_CLK_OUT,(DCL_CTRL_DATA_T*)&data);
	DclGPIO_Close(handle);	
}

void hc_gps_init(void)
{
	if (g_gps_cntx.first_init)
	{
		return;
	}

	g_gps_cntx.first_init = MMI_TRUE;
	g_gps_cntx.work_state = gps_ready;
	//memset(&gGprmcdate, 0x00, sizeof(GPRMC_STRUCK));
	//memset(&gGGAData, 0x00, sizeof(GGA_STRUCK));
	hc_gps_setclkout(0, mode_f32k_ck); //打开32k
	hc_gps_set_work_state(gps_locating);
}

void hc_gps_init_ByFactoryMode(void)
{
	kal_prompt_trace(MOD_BT,"hc_gps_init_ByFactoryMode work_state=%d", g_gps_cntx.work_state );

	//if(g_gps_cntx.work_state != gps_sleep && g_gps_cntx.work_state != gps_wake ){
		g_gps_cntx.first_init = MMI_TRUE;
		g_gps_cntx.work_state = gps_ready;
		hc_gps_setclkout(0, mode_f32k_ck); //打开32k
		hc_gps_set_work_state(gps_locating);
		
	/*}
	else{
		// read nvram
		kal_prompt_trace(MOD_BT,"hc_gps_init_ByFactoryMode gps launched work_state=%d", g_gps_cntx.work_state);

		HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_GPS_AVALIABLE_REQ, NULL);
	}*/
}


void hc_gps_bootup_init(void)
{
	memset(&g_gps_cntx, 0, sizeof(hc_gps_cntx_struck));
	g_gps_cntx.first_init = MMI_FALSE;
	g_gps_cntx.work_state = gps_not_ready;
	g_gps_cntx.locating_timer = 3*60*1000;
}

#endif
#endif
