/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * BTdialerApp.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
*------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifdef __BT_SPEAKER_SUPPORT__

#ifdef __MMI_AVRCP_SUPPORT__
#include "AvrcpSrvGprot.h"
#endif //__MMI_AVRCP_SUPPORT__


#include "A2dpSrvGprot.h"
#include "MMI_features.h"
#include "MMIDataType.h"
#include "mmi_frm_scenario_gprot.h"
#include "kal_general_types.h"
#include "CustDataRes.h"
#include "GlobalResDef.h"
#include "wgui_categories_inputs.h"
#include "mmi_frm_events_gprot.h"
#include "mmi_frm_mem_gprot.h"
#include "kal_public_api.h"
#include "app_buff_alloc.h"
#include "mmi_frm_input_gprot.h"
#include "mmi_rp_app_bt_dialer_def.h"
#include "BTMMIScr.h"
#include "BTSpeaker.h"
#include "BTMMIAVRCPGProt.h"
#include "Bt_avrcp_struct.h"
#include "wgui_categories_util.h"
#include "GlobalConstants.h"
#include "wgui_categories_list.h"
#include "mmi_frm_input_gprot.h"
#include "CommonScreensResDef.h"
#include "wgui_categories_popup.h"
#include "mmi_rp_app_audioplayer_def.h"
#include "Gui_font_size.h"
#include "wgui_softkeys.h"


#ifdef __MMI_BT_SPEAKER_SUPPORT__
#define BT_SPEAKER_LOADING_SCREEN_DURATION 3000

/***************************************************************************** 
* External Functions 
*****************************************************************************/

extern MMI_BOOL srv_avrcp_is_avrcp_connected(void);
extern MMI_BOOL srv_avrcp_is_avrcp_ct_ready_cmd(void);
static void mmi_bt_speaker_close_loading_screen();
static void mmi_bt_speaker_show_loading_screen(MMI_ID parent_gid , MMI_ID scr_id);
/***************************************************************************** 
* External Global Variable
*****************************************************************************/
static U8 g_gain=0;
static MMI_BOOL csk_flag= MMI_FALSE;
static MMI_ID parent_grp_id = 0;
MMI_BOOL is_pressed=MMI_FALSE;

GDI_HANDLE osd_layer;
GDI_HANDLE skin_layer;

#ifdef __MMI_TOUCH_SCREEN__
    mmi_pen_polygon_area_struct LSK_area;
	static mmi_pen_point_struct LSK_points[4];
#endif /*__MMI_TOUCH_SCREEN__*/


/*  Include: MMI header file */
/***************************************************************************** 
* Local Structures
*****************************************************************************/

typedef struct
{
    S16 x, y;
    S16 w, h;
    PU8 off_img;
	PU8 down_img;
} bt_music_main_button_struct;


typedef enum
{
    BT_MUSIC_MAIN_DISABLED = -1,
    BT_MUSIC_MAIN_PLAY = 0,
    BT_MUSIC_MAIN_PREV,
    BT_MUSIC_MAIN_NEXT,
    BT_MUSIC_MAIN_STOP,
    BT_MUSIC_MAIN_PAUSE,
    NO_OF_BT_MUSIC_MAIN_BUTTONS
} bt_music_main_buttons_enum;


typedef enum
{
    BT_MUSIC_MAIN_UP,
    BT_MUSIC_MAIN_DOWN,
    BT_MUSIC_MAIN_DISABLE,
    NO_OF_BT_MUSIC_BUTTONS_STATE
} bt_music_buttons_state_enum;

typedef enum
 {
    STATE_IDLE,
    STATE_PLAY,
    STATE_PAUSED,
    NO_OF_STATE
} bt_music_state_enum;

static S16 bt_music_main_buttons_x1;
static S16 bt_music_main_buttons_y1;
static S16 bt_music_main_buttons_x2;
static S16 bt_music_main_buttons_y2;
static bt_music_main_button_struct        bt_music_main_buttons[NO_OF_BT_MUSIC_MAIN_BUTTONS];
S16 g_bt_music_main_selected_button = BT_MUSIC_MAIN_DISABLED;
MMI_BOOL g_bt_music_main_selected_button_down = MMI_FALSE;

typedef struct
{
	
	U16 bg_img_id;
	U8 text_border_color_r, text_border_color_g, text_border_color_b;
	U8 text_fg_color_r, text_fg_color_g, text_fg_color_b;
	U8 text_bg_color_r, text_bg_color_g, text_bg_color_b;

	S16 title_x, title_y;
	S16 title_w, title_h;
	
	S16 prev_button_x, prev_button_y;
	U16 prev_button_image_id;
	U16 prev_button_down_image_id;
	S16 next_button_x, next_button_y;
	U16 next_button_image_id;
	U16 next_button_down_image_id;
	S16 play_button_x, play_button_y;
	U16 play_button_image_id;
	U16 play_button_down_image_id;
	U16 pause_button_image_id;
	U16 pause_button_down_image_id;

	S16 stop_button_x, stop_button_y;
	U16 stop_button_image_id;
	U16 stop_button_down_image_id;
	
} mmi_bt_skin_struct;


const  mmi_bt_skin_struct mmi_bt_speaker_skin[] =
{
	
	//skin1
		IMG_ID_BT_MAIN_SKIN1_BUTTON,
		0,0,0, // text_border_color_r, text_border_color_g, text_border_color_b
		255,255,255, // text_fg_color_r, text_fg_color_g, text_fg_color_b
		255,255,255, // text_bg_color_r, text_bg_color_g, text_bg_color_b
		18,26,// title_x, title_y
		141,17,// title_w, title_h
		
		/*prev button*/
		#ifdef __MMI_TOUCH_SCREEN__
			#if defined(__MMI_MAINLCD_240X320__)
		59,221, // prev_button_x, prev_button_y
			#elif defined(__MMI_MAINLCD_320X480__)
				79,332, // prev_button_x, prev_button_y
			#elif defined(__MMI_MAINLCD_320X240__)
				79, 166, // prev_button_x, prev_button_y
			#elif defined(__MMI_MAINLCD_240X400__)
				59, 277,
			#endif
		#else
			#if defined(__MMI_MAINLCD_96X64__)
				21, 46, // prev_button_x, prev_button_y
			#elif defined(__MMI_MAINLCD_128X64__)
				28, 41, // prev_button_x, prev_button_y
			#elif defined(__MMI_MAINLCD_128X128__)
				28, 82, // prev_button_x, prev_button_y
			#elif defined(__MMI_MAINLCD_128X160__)
				28, 115, // prev_button_x, prev_button_y
			#elif defined(__MMI_MAINLCD_176X220__)
		39, 158, // prev_button_x, prev_button_y
			#endif
		#endif /*__MMI_TOUCH_SCREEN__*/
		
		
		IMG_ID_BT_MAIN_SKIN1_PREV, // prev_button_off_image_id
		IMG_ID_BT_MAIN_SKIN1_PREV, // prev_button_down_image_id
		
		/*next button*/
		#ifdef __MMI_TOUCH_SCREEN__
			#if defined(__MMI_MAINLCD_240X320__)
		149,221, // next_button_x, next_button_y
			#elif defined(__MMI_MAINLCD_320X480__)
				199,332, // next_button_x, next_button_y
			#elif defined(__MMI_MAINLCD_320X240__)
				199,166, // next_button_x, next_button_y
			#elif defined(__MMI_MAINLCD_240X400__)
				149,277, // next_button_x, next_button_y
			#endif
		#else
			#if defined(__MMI_MAINLCD_96X64__)
				59, 46, // next_button_x, next_button_y
			#elif defined(__MMI_MAINLCD_128X64__)
				78, 41, // next_button_x, next_button_y
			#elif defined(__MMI_MAINLCD_128X128__)
				78, 82, // next_button_x, next_button_y
			#elif defined(__MMI_MAINLCD_128X160__)
				78, 115, // next_button_x, next_button_y
			#elif defined(__MMI_MAINLCD_176X220__)
		107, 158, // next_button_x, next_button_y
			#endif
		#endif /*__MMI_TOUCH_SCREEN__*/
		
		
		IMG_ID_BT_MAIN_SKIN1_NEXT, // next_button_off_image_id
		IMG_ID_BT_MAIN_SKIN1_NEXT, // next_button_down_image_id
		
		/*play button*/
		#ifdef __MMI_TOUCH_SCREEN__
			#if defined(__MMI_MAINLCD_240X320__)
		104,221, // play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_320X480__)
				139,332, // play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_320X240__)
				139,166, // play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_240X400__)
				104,277, // play_button_x, play_button_y
			#endif
		#else
			#if defined(__MMI_MAINLCD_96X64__)
				40, 46, // play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_128X64__)
				53, 41, // play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_128X128__)
				53, 82, //  play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_128X160__)
				53, 115, //  play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_176X220__)
		73, 158, // play_button_x, play_button_y
			#endif 
		#endif /*__MMI_TOUCH_SCREEN__*/
		
		
		IMG_ID_BT_MAIN_SKIN1_PLAY, // play_button_off_image_id
		IMG_ID_BT_MAIN_SKIN1_PLAY, // play_button_down_image_id
		IMG_ID_BT_MAIN_SKIN1_PAUSE, // pause_button_off_image_id
		IMG_ID_BT_MAIN_SKIN1_PAUSE, // pause_button_down_image_id
		
		/*stop button*/
		#ifdef __MMI_TOUCH_SCREEN__
			#if defined(__MMI_MAINLCD_240X320__)
		104,253, // stop_button_x, stop_button_y
			#elif defined(__MMI_MAINLCD_320X480__)
				139,380, // stop_button_x, stop_button_y
			#elif defined(__MMI_MAINLCD_320X240__)
				139,190, // stop_button_x, stop_button_y
			#elif defined(__MMI_MAINLCD_240X400__)
				104,317, // stop_button_x, stop_button_y
			#endif
		#else
			#if defined(__MMI_MAINLCD_96X64__)
				40, 51, // stop_x, stop_y
			#elif defined(__MMI_MAINLCD_128X64__)
				53, 48, // play_button_x, play_button_y
			#elif defined(__MMI_MAINLCD_128X128__)
				53, 95, // stop_x, stop_y 
			#elif defined(__MMI_MAINLCD_128X160__)
				53, 128, // stop_x, stop_y 
			#elif defined(__MMI_MAINLCD_176X220__)
		73, 176, // stop_x, stop_y
			#endif
		#endif /*__MMI_TOUCH_SCREEN__*/
		
		
        IMG_ID_BT_MAIN_SKIN1_STOP, // stop_off_image_id
        IMG_ID_BT_MAIN_SKIN1_STOP, // shuffle_on_image_id
};
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_close_loading_screen
 * DESCRIPTION
 *  This function is to closing loading screen while entering bt sepaker
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_speaker_close_loading_screen()
{
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_SPEAKER_CLOSE_LOADING_SCR);
	mmi_frm_scrn_close(parent_grp_id,SCR_ID_BT_SPEAKER_REFRESH_SCREEN);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_show_loading_screen
 * DESCRIPTION
 *  This function is to show loading screen while entering bt sepaker
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_speaker_show_loading_screen(MMI_ID parent_gid , MMI_ID scr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!mmi_frm_scrn_enter(parent_gid, scr_id, NULL, (FuncPtr)mmi_bt_speaker_show_loading_screen, MMI_FRM_FULL_SCRN))
    {
        return;
    }
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_SPEAKER_SHOW_LOADING_SCR);
	StartTimer(BT_SPEAKER_LOADING_SCREEN_TIMER,BT_SPEAKER_LOADING_SCREEN_DURATION,mmi_bt_speaker_close_loading_screen);
    ClearHighlightHandler();

    ShowCategory151Screen(
        0,
        0,
        0,
        0,
        0,
        0,
        (PU8)GetString(STR_GLOBAL_PLEASE_WAIT),
        (PU8)GetImage(mmi_get_event_based_image(MMI_EVENT_PROGRESS)),
        NULL);
	SetLeftSoftkeyFunction(NULL, KEY_EVENT_UP);
    SetRightSoftkeyFunction(NULL, KEY_EVENT_UP);
	SetKeyHandler(NULL, KEY_END, KEY_EVENT_DOWN);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_btdialer_app_launch_func
 * DESCRIPTION
 *  This function is to activate or deactivate bt dialer
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_bt_speaker_launch_fn(MMI_ID parent_gid)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_SPEAKER_LAUNCH_FUNC,parent_gid);
	parent_grp_id = parent_gid;
	mmi_frm_group_create(parent_gid, GRP_ID_BT_SPEAKER, NULL, NULL);
	mmi_frm_group_enter(GRP_ID_BT_SPEAKER, MMI_FRM_NODE_SMART_CLOSE_FLAG);
	#ifdef __MMI_AVRCP_SUPPORT__
	mmi_frm_scrn_create(GRP_ID_BT_SPEAKER,SCR_ID_BT_SPEAKER,mmi_bt_speaker_avrcp_sink_send_cmd_frame,NULL);  
	#endif

	mmi_bt_speaker_show_loading_screen(parent_gid,SCR_ID_BT_SPEAKER_REFRESH_SCREEN);
	return MMI_TRUE;
}	 

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_de_launch_fn
 * DESCRIPTION
 *  This function is to close BT Speaker screen from BT CM
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 ****************************************************************************/
void mmi_bt_speaker_de_launch_fn(void)
{
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_SPEAKER_DELAUNCH_FUNC);
   mmi_frm_group_close(GRP_ID_BT_SPEAKER);
}

#if 0
/* under construction !*/
/* under construction !*/
	#if defined(__MMI_BT_SPEAKER_SUPPORT__) && defined(__BT_SPK_VOL_CONTROL__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	#endif //__BT_SPK_VOL_CONTROL__
/* under construction !*/
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_avrcp_sink_send_cmd_frame
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 ****************************************************************************/
#ifdef __MMI_AVRCP_SUPPORT__
MMI_RET mmi_bt_speaker_avrcp_sink_send_cmd_frame(mmi_event_struct *evt)
{
	mmi_frm_key_evt_struct* p_key;
	S16 error;	
	p_key = (mmi_frm_key_evt_struct*) evt;

	switch (evt->evt_id)
	{
		case EVT_ID_SCRN_INIT:
			mmi_bt_speaker_init_main();
			srv_a2dp_sink_set_callback_notifier((A2DP_SRV_CALLBACK)mmi_bt_speaker_update_main_screen);
			break;

		case EVT_ID_SCRN_ACTIVE:
			is_pressed = MMI_FALSE;
			csk_flag = (MMI_BOOL)srv_a2dp_sink_is_streaming();
			if(csk_flag == MMI_TRUE)
			{
			   g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
			}
			else
			{
			   g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
			}
		    mmi_bt_speaker_redraw_main_all();
			#ifdef __MMI_TOUCH_SCREEN__
			mmi_pen_register_down_handler(mmi_bt_speaker_pen_down_hdlr);
			mmi_pen_register_up_handler(mmi_bt_speaker_pen_up_hdlr);
			#endif /*__MMI_TOUCH_SCREEN__*/
			break;

		case EVT_ID_SCRN_INACTIVE:
		     break;
        case EVT_ID_SCRN_GOBACK_IN_END_KEY:
				mmi_frm_group_close(GRP_ID_BT_SPEAKER);
			break;
			
		case EVT_ID_SCRN_DEINIT:
					break;
		case EVT_ID_ON_KEY: 
		if(p_key->key_type == KEY_EVENT_DOWN)
		{   
			if(!(srv_avrcp_is_avrcp_ct_ready_cmd() == MMI_TRUE && srv_avrcp_is_avrcp_connected() == MMI_TRUE))
				return MMI_RET_OK;
			switch(p_key->key_code)
			{
				case KEY_DOWN_ARROW:
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_STOP;
					g_bt_music_main_selected_button_down = MMI_TRUE;
					mmi_audply_redraw_main_buttons_bt();
					break;
				case KEY_LEFT_ARROW:
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PREV;
					g_bt_music_main_selected_button_down = MMI_TRUE;
					mmi_audply_redraw_main_buttons_bt();
					break;
				case KEY_RIGHT_ARROW:
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_NEXT;
					g_bt_music_main_selected_button_down = MMI_TRUE;
					mmi_audply_redraw_main_buttons_bt();
					break;
				 case KEY_RSK:
					is_pressed = MMI_TRUE;
					mmi_bt_draw_softkey();
					break;
			}
		}
		if(p_key->key_type == KEY_EVENT_UP)
		{   
			switch(p_key->key_code)
			{
				case KEY_DOWN_ARROW:
					g_bt_music_main_selected_button_down = MMI_FALSE;
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
					srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_STOP);
					csk_flag = MMI_FALSE;
					mmi_audply_redraw_main_buttons_bt();
					break;
				case KEY_LEFT_ARROW:
					g_bt_music_main_selected_button_down = MMI_FALSE;
					srv_avrcp_sink_send_cmd_frame(MMI_AVRCP_POP_BACKWARD);
					mmi_audply_redraw_main_buttons_bt();
					break;
				case KEY_RIGHT_ARROW:
					g_bt_music_main_selected_button_down = MMI_FALSE;
					srv_avrcp_sink_send_cmd_frame(MMI_AVRCP_POP_FORWARD);
					mmi_audply_redraw_main_buttons_bt();
					break;
				case KEY_VOL_UP:
					if(g_gain < MDI_A2DP_SINK_VOL_EX_MUTE_MAX)
					{	
						if( (srv_a2dp_sink_is_codec_open() == MMI_FALSE) &&
							(mmi_frm_scrn_get_active_id() != SCR_ID_BT_SPEAKER) )
							break;
						ReadValue(NVRAM_BT_SPEAKER,
							&g_gain,
							DS_BYTE,
							&error);
						g_gain++;
						WriteValue(NVRAM_BT_SPEAKER,&g_gain, DS_BYTE, &error);
						if(g_gain <= MDI_A2DP_SINK_VOL_EX_MUTE_MAX)
						mdi_audio_set_volume(VOL_TYPE_MEDIA, g_gain);
						srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_VOLUME_UP);
					}
					mmi_audply_redraw_main_buttons_bt();
					break;
				case KEY_VOL_DOWN:
					if( g_gain > MDI_A2DP_SINK_VOL_EX_MUTE_MIN &&
						g_gain<=MDI_A2DP_SINK_VOL_EX_MUTE_MAX )
					{	
						if( (srv_a2dp_sink_is_codec_open() == MMI_FALSE) &&
							(mmi_frm_scrn_get_active_id() != SCR_ID_BT_SPEAKER) )
							break;
						ReadValue(NVRAM_BT_SPEAKER,
							&g_gain,
							DS_BYTE,
							&error);
						g_gain--;
						WriteValue(NVRAM_BT_SPEAKER,&g_gain,DS_BYTE, &error);
						if(g_gain <= MDI_A2DP_SINK_VOL_EX_MUTE_MAX)
						mdi_audio_set_volume(VOL_TYPE_MEDIA, g_gain);
						srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_VOLUME_DOWN);
					}
					mmi_audply_redraw_main_buttons_bt();
					break;
					case KEY_RSK:
						is_pressed = MMI_FALSE;
						mmi_bt_draw_softkey();
						mmi_frm_group_close(GRP_ID_BT_SPEAKER);
					break;
			}
		}
		break;
		
		case EVT_ID_POST_KEY:
			if(p_key->key_type == KEY_EVENT_DOWN)
			{
				if(!(srv_avrcp_is_avrcp_ct_ready_cmd() == MMI_TRUE && srv_avrcp_is_avrcp_connected() == MMI_TRUE))
					return MMI_RET_OK;
				if (p_key->key_code == KEY_CSK )
				{
				g_bt_music_main_selected_button_down = MMI_TRUE;
				mmi_audply_redraw_main_buttons_bt();
			}
			}
			if(p_key->key_type == KEY_EVENT_UP)
			{
			switch(p_key->key_code)
			{
				case KEY_CSK:
					if(csk_flag == MMI_FALSE)
						{	
							g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
							g_bt_music_main_selected_button_down = MMI_FALSE;
						mmi_audply_redraw_main_buttons_bt();						
						srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PLAY);
						csk_flag = MMI_TRUE;
					}
					else
						{	
							g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
							g_bt_music_main_selected_button_down = MMI_FALSE;
						mmi_audply_redraw_main_buttons_bt();						
						srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PAUSE);
						csk_flag = MMI_FALSE;
					}
					break;
				case KEY_LEFT_ARROW:
					if(csk_flag == MMI_FALSE)
					{
						g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
						g_bt_music_main_selected_button_down = MMI_FALSE;
					}
					else
					{
						g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
					g_bt_music_main_selected_button_down = MMI_FALSE;
					}
					mmi_audply_redraw_main_buttons_bt();
					break;					
					
					case KEY_RIGHT_ARROW:						
					if(csk_flag == MMI_FALSE)
					{
						g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
						g_bt_music_main_selected_button_down = MMI_FALSE;
					}
					else
					{
						g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
						g_bt_music_main_selected_button_down = MMI_FALSE;
					}
						mmi_audply_redraw_main_buttons_bt();
						break;	
			}
			}
					break;
			}
	return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_draw_button
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_music_draw_button(S32 x, S32 y, U8 *img_p, bt_music_buttons_state_enum state)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	S32 w_fg, h_fg;
	S32 w_bg, h_bg;
	#ifndef __MMI_TOUCH_SCREEN__
	PU8 bg_img;
	#endif /*__MMI_TOUCH_SCREEN__*/
	w_bg = 0;
	h_bg = 0;
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	gdi_image_get_dimension(img_p, &w_fg, &h_fg);
	#ifndef __MMI_TOUCH_SCREEN__
	bg_img = (PU8)GetImage(mmi_bt_speaker_skin[0].bg_img_id);
	gdi_image_get_dimension(bg_img, &w_bg, &h_bg);
    gdi_layer_push_and_set_clip(x, y, x + w_bg - 1, y + h_bg - 1);
    /* render button general background */
    gdi_image_draw(x, y,bg_img);
	#else /*__MMI_TOUCH_SCREEN__*/
	w_bg = w_fg;
	h_bg = h_fg;
	gdi_layer_push_and_set_clip(x, y,x + w_fg, y + h_fg);
	gui_draw_filled_area(0, 0,x + w_fg, y + h_fg,current_MMI_theme->sub_menu_bkg_filler); 
	#endif /*__MMI_TOUCH_SCREEN__*/

		    gdi_image_draw(x + (w_bg - w_fg) / 2, y + (h_bg - h_fg) / 2, img_p);

	switch (state)
	{
		case BT_MUSIC_MAIN_DOWN:
		{
			#ifndef __MMI_TOUCH_SCREEN__
			gdi_image_draw_resized(x, y, x + w_bg - 1, y + h_bg - 1,(PU8)GetImage(IMG_ID_BT_MAIN_SKIN1_HIGHLIGHT_BUTTON));
			#else
				gdi_image_draw(x, y,(PU8)GetImage(IMG_ID_BT_MAIN_SKIN1_HIGHLIGHT_BUTTON));
			#endif
			break;
		}
		default:
			break;
	}
	gdi_layer_pop_clip();
    return;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_audply_redraw_main_buttons
 * DESCRIPTION
 *  redraw audio player main buttons
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_speaker_init_main(void)
{
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_SPEAKER_INIT_MAIN);
	bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x = mmi_bt_speaker_skin[0].play_button_x;
	bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y = mmi_bt_speaker_skin[0].play_button_y;
	bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].off_img =(PU8)GetImage(mmi_bt_speaker_skin[0].play_button_image_id);
	bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].down_img = (PU8)GetImage(mmi_bt_speaker_skin[0].play_button_down_image_id);

	bt_music_main_buttons[BT_MUSIC_MAIN_PREV].x = mmi_bt_speaker_skin[0].prev_button_x;
	bt_music_main_buttons[BT_MUSIC_MAIN_PREV].y = mmi_bt_speaker_skin[0].prev_button_y;
	bt_music_main_buttons[BT_MUSIC_MAIN_PREV].off_img = (PU8)GetImage(mmi_bt_speaker_skin[0].prev_button_image_id);
	bt_music_main_buttons[BT_MUSIC_MAIN_PREV].down_img =(PU8)GetImage(mmi_bt_speaker_skin[0].prev_button_down_image_id);

	bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].x = mmi_bt_speaker_skin[0].next_button_x;
	bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].y = mmi_bt_speaker_skin[0].next_button_y;
	bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].off_img = (PU8)GetImage(mmi_bt_speaker_skin[0].next_button_image_id);
	bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].down_img = (PU8)GetImage(mmi_bt_speaker_skin[0].next_button_down_image_id);

	bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].x = mmi_bt_speaker_skin[0].play_button_x;
	bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].y = mmi_bt_speaker_skin[0].play_button_y;
	bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].off_img = (PU8)GetImage(mmi_bt_speaker_skin[0].pause_button_image_id);
	bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].down_img = (PU8)GetImage(mmi_bt_speaker_skin[0].pause_button_down_image_id);

	bt_music_main_buttons[BT_MUSIC_MAIN_STOP].x = mmi_bt_speaker_skin[0].stop_button_x;
	bt_music_main_buttons[BT_MUSIC_MAIN_STOP].y = mmi_bt_speaker_skin[0].stop_button_y;
	bt_music_main_buttons[BT_MUSIC_MAIN_STOP].off_img = (PU8)GetImage(mmi_bt_speaker_skin[0].stop_button_image_id);
	bt_music_main_buttons[BT_MUSIC_MAIN_STOP].down_img = (PU8)GetImage(mmi_bt_speaker_skin[0].stop_button_down_image_id);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_audply_redraw_main_buttons
 * DESCRIPTION
 *  redraw audio player main buttons
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_redraw_background(void)
{

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_push_and_set_active(skin_layer);
	gdi_push_and_set_alpha_blending_source_layer(skin_layer);
#endif /* __GDI_MEMORY_PROFILE_2__ */ 
    
    gdi_layer_push_and_set_clip(0, 0, UI_device_width - 1, UI_device_height - 1);
	gui_draw_filled_area(0, 0, GDI_LCD_WIDTH, GDI_LCD_HEIGHT, 
		current_MMI_theme->sub_menu_bkg_filler); 

	gdi_layer_pop_clip();

#ifdef __GDI_MEMORY_PROFILE_2__
	gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
#endif /* __GDI_MEMORY_PROFILE_2__ */ 
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_draw_softkey
 * DESCRIPTION
 *  redraw BT softkey
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_draw_softkey(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/ 
    CHAR* sk_str_p;
	S32 sk_offset_x, sk_offset_y;
	S32 truncated_w;
	S32 str_width, str_height;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gdi_layer_push_and_set_active(skin_layer);
	gdi_push_and_set_alpha_blending_source_layer(skin_layer);

	gui_set_font((UI_font_type)gui_font_get_type(GUI_FONT_SIZE_BUTTON));

        gui_draw_filled_area(
            0, 
            UI_device_height - MMI_softkey_height,
            UI_device_width - 1,
            UI_device_height - 1,
            current_MMI_theme->softkey_bar_bkg_filler);
			
	/* rsk */
	sk_str_p = (CHAR*)GetString(STR_GLOBAL_BACK);

	wgui_softkey_get_offset(
        (UI_string_type)sk_str_p, 
        &sk_offset_x, 
        &sk_offset_y, 
        &truncated_w, 
        MMI_RIGHT_SOFTKEY,
        MMI_FRM_SCREEN_ROTATE_0);
    gui_measure_string((UI_string_type)sk_str_p, &str_width, &str_height);
	
	if (is_pressed == MMI_TRUE)
    {
		gui_set_text_color(*current_MMI_theme->LSK_down_text_color);
	    gui_set_text_border_color(*current_MMI_theme->softkey_down_text_border_color);
        sk_offset_x++;
        sk_offset_y++;
		#ifdef __MMI_TOUCH_SCREEN__
		gui_draw_filled_area( UI_device_width - MMI_softkey_width,
							  UI_device_height - MMI_softkey_height, 
					          UI_device_width,
					          UI_device_height, 
					          current_MMI_theme->softkey_lsk_down_filler);
		#endif //__MMI_TOUCH_SCREEN__
    }
	else
	{
		#ifdef __MMI_TOUCH_SCREEN__
		gui_draw_filled_area( UI_device_width - MMI_softkey_width,
							  UI_device_height - MMI_softkey_height, 
					          UI_device_width,
					          UI_device_height, 
					          current_MMI_theme->softkey_lsk_up_filler);
		#endif //__MMI_TOUCH_SCREEN__
    	gui_set_text_color(*current_MMI_theme->LSK_up_text_color);
        gui_set_text_border_color(*current_MMI_theme->softkey_text_border_color);
	}
	
	/* Draw the text */
    if (truncated_w != 0)
	{
	    gui_print_truncated_borderd_text(sk_offset_x, sk_offset_y, truncated_w, (UI_string_type)sk_str_p);
	}
	else
	{
        gui_move_text_cursor(sk_offset_x, sk_offset_x);
        gui_print_bordered_text((UI_string_type) sk_str_p);
	}
	gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
	gdi_layer_blt_previous(0, 0, UI_device_width - 1, UI_device_height - 1);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_audply_redraw_main_buttons
 * DESCRIPTION
 *  redraw audio player main buttons
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_audply_redraw_main_buttons_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i;
    S16 selected_button = g_bt_music_main_selected_button;
	S32 w,h;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_push_and_set_active(skin_layer);
	gdi_push_and_set_alpha_blending_source_layer(skin_layer);
#endif /* __GDI_MEMORY_PROFILE_2__ */

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif 

    if (selected_button == BT_MUSIC_MAIN_DISABLED)
    {
		gui_measure_image(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].off_img, &w, &h);
		gdi_layer_push_and_set_clip(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x, bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y, 
									bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x+w, bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y+h);
        mmi_bt_music_draw_button(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x, bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y, bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].off_img, BT_MUSIC_MAIN_DISABLE);
		gdi_layer_pop_clip();
    }
	else if (selected_button == BT_MUSIC_MAIN_PLAY && g_bt_music_main_selected_button_down)
    {
	/* For Down key press */

			gui_measure_image(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].down_img, &w, &h);
			mmi_bt_music_draw_button(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x, bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y, 
									bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].down_img, BT_MUSIC_MAIN_DOWN);
    }
	else if (selected_button == BT_MUSIC_MAIN_PLAY && !g_bt_music_main_selected_button_down)
	{
	/* For Up key press */

			gui_measure_image(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].off_img, &w, &h);
			mmi_bt_music_draw_button(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x, bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y, 
									bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].off_img, BT_MUSIC_MAIN_UP);
	}
	else if (selected_button == BT_MUSIC_MAIN_PAUSE && g_bt_music_main_selected_button_down)
	{
			gui_measure_image(bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].off_img, &w, &h);
			mmi_bt_music_draw_button(bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].x, bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].y, 
									bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].off_img, BT_MUSIC_MAIN_DOWN);
	}
	else if (selected_button == BT_MUSIC_MAIN_PAUSE && !g_bt_music_main_selected_button_down)
	{
			gui_measure_image(bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].off_img, &w, &h);
			mmi_bt_music_draw_button(bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].x, bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].y, 
									bt_music_main_buttons[BT_MUSIC_MAIN_PAUSE].off_img, BT_MUSIC_MAIN_UP);
	}

#ifdef __MMI_AUDIO_PLAYER_SKIN_SLIM__
    /*Redraw Prev, Next, Stop button*/
    for (i = BT_MUSIC_MAIN_PREV; i < BT_MUSIC_MAIN_PAUSE; i++)
    {
        if (selected_button == BT_MUSIC_MAIN_DISABLED)
        {
            mmi_bt_music_draw_button(bt_music_main_buttons[i].x, bt_music_main_buttons[i].y, bt_music_main_buttons[i].off_img, BT_MUSIC_MAIN_DISABLE);
        }
        else if (selected_button == i && g_bt_music_main_selected_button_down)
        {
            mmi_bt_music_draw_button(bt_music_main_buttons[i].x, bt_music_main_buttons[i].y, bt_music_main_buttons[i].down_img, BT_MUSIC_MAIN_DOWN);
        }
        else
        {
            mmi_bt_music_draw_button(bt_music_main_buttons[i].x, bt_music_main_buttons[i].y, bt_music_main_buttons[i].off_img, BT_MUSIC_MAIN_UP);
        }
    }
#else
    /*Redraw Prev, Next, Stop button*/
    for (i = BT_MUSIC_MAIN_PREV; i < BT_MUSIC_MAIN_PAUSE; i++)
    {
        if (selected_button == BT_MUSIC_MAIN_DISABLED)
        {
            mmi_bt_music_draw_button(bt_music_main_buttons[i].x, bt_music_main_buttons[i].y, bt_music_main_buttons[i].off_img, BT_MUSIC_MAIN_DISABLE);
        }
        else if (selected_button == i && g_bt_music_main_selected_button_down)
        {
            mmi_bt_music_draw_button(bt_music_main_buttons[i].x, bt_music_main_buttons[i].y, bt_music_main_buttons[i].down_img, BT_MUSIC_MAIN_DOWN);
        }
        else
        {
            mmi_bt_music_draw_button(bt_music_main_buttons[i].x, bt_music_main_buttons[i].y, bt_music_main_buttons[i].off_img, BT_MUSIC_MAIN_UP);
        }
    }
#endif
    //gdi_layer_pop_clip();
    #if(UI_DOUBLE_BUFFER_SUPPORT)
     gui_unlock_double_buffer();
   	 gui_BLT_double_buffer(
        bt_music_main_buttons_x1,
        bt_music_main_buttons_y1,
        bt_music_main_buttons_x2,
        bt_music_main_buttons_y2);
    #endif
#ifdef __GDI_MEMORY_PROFILE_2__
	gdi_pop_and_restore_alpha_blending_source_layer();
    gdi_layer_pop_and_restore_active();
#endif /* __GDI_MEMORY_PROFILE_2__ */
gdi_layer_blt_previous(0, 0, UI_device_width - 1, UI_device_height - 1);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_audply_redraw_main_AP_title
 * DESCRIPTION
 *  redraw audio player main AP title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_audply_redraw_main_BT_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 str_w, str_h;
    S32 x1;
    S32 height_base = 0 ;
	#ifdef __MMI_TOUCH_SCREEN__
	color *head_text_color = current_MMI_theme->title_text_color;
    color *border_color = current_MMI_theme->title_text_border_color;
	#else
    color head_text_color = gui_color(61, 94, 60);
    color border_color = gui_color(0,0,0);
	#endif /*__MMI_TOUCH_SCREEN__*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_push_and_set_active(skin_layer);
#endif /* __GDI_MEMORY_PROFILE_2__ */ 
	#if defined(__MMI_MAINLCD_320X240__)
	gui_set_font(&MMI_small_font);    
#else
    gui_set_font((UI_font_type)gui_font_get_type(GUI_FONT_SIZE_TITLE));
#endif
	#ifdef __MMI_TOUCH_SCREEN__
	gui_set_text_color(*head_text_color);
	gui_set_text_border_color(*border_color);
	#else
    gui_set_text_color(head_text_color);
	
	gui_set_text_border_color(border_color);
    #endif /*__MMI_TOUCH_SCREEN__*/
    gui_measure_string((UI_string_type)GetString(STR_ID_BT_SPEAKER_TITLE_MESSAGE), &str_w, &str_h);
    gui_set_line_height(str_h);
    if (str_w > UI_device_width)
    {
        str_w = UI_device_width;
    }
#if defined(__MMI_AUDIO_PLAYER_SKIN_SHOW_ICON_BAR__)
    height_base = MMI_status_bar_height-1;
#endif
    gdi_layer_push_and_set_clip(0, height_base, UI_device_width - 1, height_base+MMI_title_height - 1);
#ifdef __MMI_BIDI_ALG__
    if (r2lMMIFlag)
    {
        x1 = (UI_device_width + str_w) / 2;
    }
    else
#endif
    {
        x1 = (UI_device_width - str_w) / 2;
    }
	#ifdef __MMI_TOUCH_SCREEN__
		gui_draw_filled_area(
        					0, height_base, 
					        UI_device_width, height_base+MMI_title_height, 
					        current_MMI_theme->title_filler);
	#endif //__MMI_TOUCH_SCREEN__
    gui_print_truncated_text(x1, height_base+((MMI_title_height - str_h)/2) , UI_device_width - 2, (UI_string_type)GetString(STR_ID_BT_SPEAKER_TITLE_MESSAGE));
    gdi_layer_pop_clip();

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_pop_and_restore_active();
#endif /* __GDI_MEMORY_PROFILE_2__ */ 

}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_redraw_main_all
 * DESCRIPTION
 *  redraw audio player main buttons
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_speaker_redraw_main_all(void)
{

    /* get base layer as skin layer */
    gdi_layer_get_base_handle(&skin_layer);
    gdi_layer_clear_background(GDI_COLOR_TRANSPARENT);
    gdi_layer_set_source_key(MMI_TRUE, GDI_COLOR_TRANSPARENT);
	mmi_bt_redraw_background();
	mmi_audply_redraw_main_BT_title();
	mmi_audply_redraw_main_buttons_bt();
    mmi_bt_draw_softkey();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_update_main_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_speaker_update_main_screen(srv_a2dp_callback_event_enum event)
{
    MMI_ID scrn_id = 0;
	scrn_id = mmi_frm_scrn_get_active_id(); 
	
	if(scrn_id!=SCR_ID_BT_SPEAKER)
		return;
	switch(event)
	{
		case SRV_A2DP_CALLBACK_EVENT_STREAM_SUSPEND_IND:
		case SRV_A2DP_CALLBACK_EVENT_STREAM_CLOSE_IND:
		case SRV_A2DP_CALLBACK_EVENT_STREAM_ABORT_IND:
		case SRV_A2DP_CALLBACK_EVENT_UNEXPECTED_DISCONNECT_IND:
			if(csk_flag != (MMI_BOOL)srv_a2dp_sink_is_streaming())
			{
				csk_flag = MMI_FALSE;
			g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
			mmi_audply_redraw_main_buttons_bt();
			}
			break;
		case SRV_A2DP_CALLBACK_EVENT_STREAM_START_IND:
			if(csk_flag != (MMI_BOOL)srv_a2dp_sink_is_streaming())
			{
				csk_flag = MMI_TRUE;
			g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
			mmi_audply_redraw_main_buttons_bt();
			}
			break;
	}
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_pen_down_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __MMI_TOUCH_SCREEN__
void mmi_bt_speaker_pen_down_hdlr(mmi_pen_point_struct pos)
{	
	mmi_bt_speaker_pen_hdlr(pos,PEN_EVENT_DOWN);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_pen_up_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_speaker_pen_up_hdlr(mmi_pen_point_struct pos)
{
	mmi_bt_speaker_pen_hdlr(pos,PEN_EVENT_UP);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_pen_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_speaker_pen_hdlr(mmi_pen_point_struct pos, btsp_pen_events event)
{	
	 /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S16 i = BTSP_PEN_LSK;
    mmi_pen_point_struct point;
	S32  btsp_pen_event_on_object;
	S32 w_bg;
	S32 h_bg;
    mmi_pen_polygon_area_struct *area = NULL;
	point.x = 0;
	point.y = 0;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    btsp_pen_event_on_object = BTSP_PEN_NONE;

    for (i=BTSP_PEN_NONE; i <= BTSP_PEN_STOP; i++)
    {
        switch (i)
        {
            case BTSP_PEN_LSK:
				LSK_area.points = (mmi_pen_point_struct*) LSK_points;
				LSK_area.num = 4;
				LSK_points[0].x = LSK_points[3].x =  UI_device_width - MMI_softkey_width;
				LSK_points[1].x = LSK_points[2].x =  UI_device_width;
				LSK_points[0].y = LSK_points[1].y =  UI_device_height - MMI_softkey_height;
				LSK_points[2].y = LSK_points[3].y =  UI_device_height;

                area = (mmi_pen_polygon_area_struct*) & LSK_area;
                point = pos;
                break;
			case BTSP_PEN_PLAY:
				gdi_image_get_dimension(bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].down_img, &w_bg, &h_bg);
				LSK_area.points = (mmi_pen_point_struct*) LSK_points;
				LSK_area.num = 4;
				
				LSK_points[0].x = LSK_points[3].x =  bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x;
				LSK_points[1].x = LSK_points[2].x =  bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].x + w_bg;
				LSK_points[0].y = LSK_points[1].y =  bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y;
				LSK_points[2].y = LSK_points[3].y =  bt_music_main_buttons[BT_MUSIC_MAIN_PLAY].y + h_bg;
				
                area = (mmi_pen_polygon_area_struct*) & LSK_area;
                point = pos;
                break;
			case BTSP_PEN_PREV:
				gdi_image_get_dimension(bt_music_main_buttons[BT_MUSIC_MAIN_PREV].down_img, &w_bg, &h_bg);
				LSK_area.points = (mmi_pen_point_struct*) LSK_points;
				LSK_area.num = 4;
								
				LSK_points[0].x = LSK_points[3].x =  bt_music_main_buttons[BT_MUSIC_MAIN_PREV].x;
				LSK_points[1].x = LSK_points[2].x =  bt_music_main_buttons[BT_MUSIC_MAIN_PREV].x + w_bg;
				LSK_points[0].y = LSK_points[1].y =  bt_music_main_buttons[BT_MUSIC_MAIN_PREV].y;
				LSK_points[2].y = LSK_points[3].y =  bt_music_main_buttons[BT_MUSIC_MAIN_PREV].y + h_bg;

				
                area = (mmi_pen_polygon_area_struct*) & LSK_area;
                point = pos;
                break;
			case BTSP_PEN_NEXT:
				gdi_image_get_dimension(bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].down_img, &w_bg, &h_bg);
				LSK_area.points = (mmi_pen_point_struct*) LSK_points;
				LSK_area.num = 4;
								
				LSK_points[0].x = LSK_points[3].x =  bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].x;
				LSK_points[1].x = LSK_points[2].x =  bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].x + w_bg;
				LSK_points[0].y = LSK_points[1].y =  bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].y;
				LSK_points[2].y = LSK_points[3].y =  bt_music_main_buttons[BT_MUSIC_MAIN_NEXT].y + h_bg;

				
                area = (mmi_pen_polygon_area_struct*) & LSK_area;
                point = pos;
                break;
			case BTSP_PEN_STOP:
				gdi_image_get_dimension(bt_music_main_buttons[BT_MUSIC_MAIN_STOP].down_img, &w_bg, &h_bg);
				LSK_area.points = (mmi_pen_point_struct*) LSK_points;
				LSK_area.num = 4;
								
				LSK_points[0].x = LSK_points[3].x =  bt_music_main_buttons[BT_MUSIC_MAIN_STOP].x + w_bg;
				LSK_points[1].x = LSK_points[2].x =  bt_music_main_buttons[BT_MUSIC_MAIN_STOP].x;
				LSK_points[0].y = LSK_points[1].y =  bt_music_main_buttons[BT_MUSIC_MAIN_STOP].y;
				LSK_points[2].y = LSK_points[3].y =  bt_music_main_buttons[BT_MUSIC_MAIN_STOP].y + h_bg;

				
                area = (mmi_pen_polygon_area_struct*) & LSK_area;
                point = pos;
                break;
        }
		if ( area!= NULL && mmi_pen_check_inside_polygon(area, point))
        {
            btsp_pen_event_on_object = i;
            //is_touch_feedback = 1;
            break;
        }
    }
    switch (btsp_pen_event_on_object)
    {
    	case BTSP_PEN_LSK:
			if(event == PEN_EVENT_DOWN)
			{
				is_pressed = MMI_TRUE;
				mmi_bt_draw_softkey();
			}
			else
			{
				is_pressed = MMI_FALSE;
				mmi_bt_draw_softkey();
				gdi_layer_clear_background(GDI_COLOR_TRANSPARENT);
				mmi_frm_group_close(GRP_ID_BT_SPEAKER);
			}		
			break;
		case BTSP_PEN_PLAY:
			if(event == PEN_EVENT_DOWN)
			{
				if(!(srv_avrcp_is_avrcp_ct_ready_cmd() == MMI_TRUE && srv_avrcp_is_avrcp_connected() == MMI_TRUE))
					return;
				g_bt_music_main_selected_button_down = MMI_TRUE;
				mmi_audply_redraw_main_buttons_bt();
			}
			else
			{
				if(csk_flag == MMI_FALSE)
				{	
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
					g_bt_music_main_selected_button_down = MMI_FALSE;
					mmi_audply_redraw_main_buttons_bt();
					srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PLAY);
					csk_flag = MMI_TRUE;
				}
				else
				{	
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
					g_bt_music_main_selected_button_down = MMI_FALSE;
					mmi_audply_redraw_main_buttons_bt();
					srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PAUSE);
					csk_flag = MMI_FALSE;
				}
			}
				
			break;
		case BTSP_PEN_PREV:
			if(event == PEN_EVENT_DOWN)
			{
				g_bt_music_main_selected_button = BT_MUSIC_MAIN_PREV;
				g_bt_music_main_selected_button_down = MMI_TRUE;
				mmi_audply_redraw_main_buttons_bt();
			}
			else
			{
				g_bt_music_main_selected_button_down = MMI_FALSE;
				srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_BACKWARD);

				if(csk_flag == MMI_FALSE)
				{
					csk_flag = MMI_FALSE;
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
					g_bt_music_main_selected_button_down = MMI_FALSE;
				}
				else
				{
					csk_flag = MMI_TRUE;
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
					g_bt_music_main_selected_button_down = MMI_FALSE;
				}
				mmi_audply_redraw_main_buttons_bt();
			}
				
			break;
		case BTSP_PEN_NEXT:
			if(event == PEN_EVENT_DOWN)
			{
				g_bt_music_main_selected_button = BT_MUSIC_MAIN_NEXT;
				g_bt_music_main_selected_button_down = MMI_TRUE;
				mmi_audply_redraw_main_buttons_bt();
}
			else
			{
				g_bt_music_main_selected_button_down = MMI_FALSE;
				srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_FORWARD);

				if(csk_flag == MMI_FALSE)
				{
					csk_flag = MMI_FALSE;
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
					g_bt_music_main_selected_button_down = MMI_FALSE;
				}
				else
				{
					csk_flag = MMI_TRUE;
					g_bt_music_main_selected_button = BT_MUSIC_MAIN_PAUSE;
					g_bt_music_main_selected_button_down = MMI_FALSE;
				}
				mmi_audply_redraw_main_buttons_bt();
			}
			break;
		case BTSP_PEN_STOP:
			if(event == PEN_EVENT_DOWN)
			{
				g_bt_music_main_selected_button = BT_MUSIC_MAIN_STOP;
				g_bt_music_main_selected_button_down = MMI_TRUE;
				mmi_audply_redraw_main_buttons_bt();
			}
			else
			{
				g_bt_music_main_selected_button_down = MMI_FALSE;
				g_bt_music_main_selected_button = BT_MUSIC_MAIN_PLAY;
				srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_STOP);
				csk_flag = MMI_FALSE;
				mmi_audply_redraw_main_buttons_bt();
			}	
			break;
    }
}
#endif /*__MMI_TOUCH_SCREEN__*/
#endif //__MMI_AVRCP_SUPPORT__
#endif /*__MMI_BT_SPEAKER_SUPPORT__*/
#endif /*__BT_SPEAKER_SUPPORT__*/
