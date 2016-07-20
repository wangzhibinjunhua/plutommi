#include "MMI_features.h"
#include "MMIDataType.h"
#include "kal_general_types.h"
#include "gui_typedef.h"
#include "GlobalResDef.h"
#include "mmi_frm_scenario_gprot.h"
#include "wgui_categories_util.h"
#include "ps_public_struct.h"
#include "mmi_rp_app_sms_def.h"
#include "mmi_msg_struct.h"
#include "mmi_frm_mem_gprot.h"
#include "kal_public_api.h"
#include "kal_release.h"
#include "DebugInitDef_Int.h"
#include "string.h"
#include "nvram_common_defs.h"
#include "SmsAppGprot.h"
#include "GpioSrvGprot.h"
#include "mmi_frm_input_gprot.h"
#include "Unicodexdcl.h"
#include "custom_mmi_default_value.h"
#include "mmi_frm_events_gprot.h"
#include "CustDataRes.h"
#include "gui_data_types.h"
#include "UmSrvStruct.h"
#include "app_ltlcom.h"
#include "stack_config.h"
#include "stack_msgs.h"
#include "mmi_frm_queue_gprot.h"
#include "NotificationGprot.h"
//#include "mmi_rp_app_unifiedmessage_def.h"
#include "UmSrvDefs.h"
#include "MessagesMiscell.h"
#include "MessagesExDcl.h"
#include "SmsGuiInterfaceProt.h"
#include "SMsGuiInterfaceType.h"
#include "SmsPsHandler.h"
#include "l4c2smsal_struct.h"
#include "ems.h"
#include "SmsSrvGprot.h"
#include "UMGProt.h"
#include "DateTimeGprot.h"
#include "DateTimeType.h"
#include "IdleNotificationManagerGprot.h"
#include "SmsAppType.h"
#include "SmsAppProt.h"
#include "SmsAppMsg.h"
#include "SmsAppUtil.h"
#include "UcmSrvGprot.h"
#include "SimCtrlSrvGProt.h"
#include "IdleGprot.h"
#include "ModeSwitchSrvGprot.h"
#include "NwInfoSrvGprot.h"
#include "custom_phb_config.h"
#include "mmi_rp_app_phonesetting_new_def.h"
#include "mmi_rp_app_ucm_def.h"
#include "mmi_rp_srv_prof_def.h"
#include "mmi_frm_scenario_gprot.h"
#include "custom_nvram_extra.h"
#include "common_nvram_editor_data_item.h"
#include "fs_gprot.h"
#include "Conversions.h"
#include "ProfilesSrvGprot.h"
#include "UcmSrvGprot.h"
#include "AlarmSrvGprot.h"
#include "mmi_rp_app_idle_def.h"
#include "mmi_rp_app_scr_locker_def.h"
#if defined(__MMI_SCREEN_SAVER__)
#include "mmi_rp_app_scr_saver_def.h"
#endif

#ifdef __MMI_BT_DIALER_SUPPORT__
#include "mmi_rp_app_ucmbt_def.h"
#endif

#include "app_datetime.h"

#include "HcWatchDefine.h"


#if defined(__CUSTOM_FAMILY_NUMBER__)
extern family_num_struct family_num_st;
extern whitelist1_num_struct  whitelist1_num_st;
extern whitelist1_num_struct  whitelist2_num_st;


void user_config_custom_family_num_get_info(family_num_struct* pst)
{
    S16 error;

	memset(pst, 0, sizeof(family_num_struct));
	ReadRecord(NVRAM_EF_CUSTOM_FAMILY_LID, 1, pst, NVRAM_EF_CUSTOM_FAMILY_SIZE, &error);
}
void user_config_custom_family_num_set_info(family_num_struct* pst)
{
    S16 error;
	
    WriteRecord(NVRAM_EF_CUSTOM_FAMILY_LID, 1, pst, NVRAM_EF_CUSTOM_FAMILY_SIZE, &error);
}

void user_config_whitelist1_num_get_info(whitelist1_num_struct* pst)
{
    S16 error;

	memset(pst, 0, sizeof(whitelist1_num_struct));
	ReadRecord(NVRAM_EF_WHITELIST1_LID, 1, pst, NVRAM_EF_WHITELIST1_SIZE, &error);
}
void user_config_whitelist1_num_set_info(whitelist1_num_struct* pst)
{
    S16 error;
	
    WriteRecord(NVRAM_EF_WHITELIST1_LID, 1, pst, NVRAM_EF_WHITELIST1_SIZE, &error);
}

void user_config_whitelist2_num_get_info(whitelist1_num_struct* pst)
{
    S16 error;

	memset(pst, 0, sizeof(whitelist1_num_struct));
	ReadRecord(NVRAM_EF_WHITELIST2_LID, 1, pst, NVRAM_EF_WHITELIST2_SIZE, &error);
}
void user_config_whitelist2_num_set_info(whitelist1_num_struct* pst)
{
    S16 error;
	
    WriteRecord(NVRAM_EF_WHITELIST2_LID, 1, pst, NVRAM_EF_WHITELIST2_SIZE, &error);
}

void family_num_init(void)
{
	memset(&family_num_st, 0, sizeof(family_num_st));
	memset(&whitelist1_num_st, 0, sizeof(whitelist1_num_st));
	memset(&whitelist2_num_st, 0, sizeof(whitelist2_num_st));	
	//kal_prompt_trace(MOD_BT,"sos 1: %s", family_num_st.family_num[0]);
	//kal_prompt_trace(MOD_BT,"sos 2: %s", family_num_st.family_num[1]);
	//kal_prompt_trace(MOD_BT,"sos 3: %s", family_num_st.family_num[2]);
	

	//kal_prompt_trace(MOD_BT,"whitelist 1: %s", whitelist1_num_st.whitelist1_num[0]);
	//kal_prompt_trace(MOD_BT,"whitelist 2: %s", whitelist1_num_st.whitelist1_num[1]);
	//kal_prompt_trace(MOD_BT,"whitelist 3: %s", whitelist1_num_st.whitelist1_num[2]);
	//kal_prompt_trace(MOD_BT,"whitelist 4: %s", whitelist1_num_st.whitelist1_num[3]);
	//kal_prompt_trace(MOD_BT,"whitelist 5: %s", whitelist1_num_st.whitelist1_num[4]);
	
	user_config_custom_family_num_get_info(&family_num_st);
	user_config_whitelist1_num_get_info(&whitelist1_num_st);
	user_config_whitelist2_num_get_info(&whitelist2_num_st);
}
#endif


