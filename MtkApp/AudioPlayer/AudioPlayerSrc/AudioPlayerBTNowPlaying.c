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
/*  Include: MMI header file */
#include "MMI_features.h"
#if defined(__MMI_BT_MUSIC__) || defined(__MMI_AUDIO_PLAYER_BT__)
#ifdef __MMI_AUDIO_PLAYER__
#include "mmi_rp_app_audioplayer_def.h"
#include "AudioPlayerprot.h"
#endif
#include "FileManagerGProt.h"
#include "A2dpSrvGprot.h"
#include "mmi_rp_srv_a2dp_def.h"
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
#include "mmi_rp_app_audio_player_bt_def.h"
#include "BTMMIScr.h"
#include "AudioPlayerBTNowPlaying.h"
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
#include "Conversions.h"
#include "bt_a2dp_base_struct.h"
#include "mmi_rp_app_bluetooth_def.h"
#include "BtcmSrvGprot.h"
#include "IdleGprot.h"

/***************************************************************************** 
* External Functions 
*****************************************************************************/
extern MMI_BOOL srv_bt_cm_get_bqb_test_flag(void);
extern mdi_bt_speaker_power_on(void);
extern mdi_bt_speaker_power_off(void);
extern MMI_BOOL srv_avrcp_is_avrcp_connected(void);
extern MMI_BOOL srv_avrcp_is_avrcp_ct_ready_cmd(void);
extern void srv_avrcp_sink_send_cmd_frame(int cmd_frame);
/***************************************************************************** 
* Static Functions 
*****************************************************************************/
static void mmi_bt_entry_option();
static mmi_ret mmi_bt_music_select_proc(mmi_event_struct *evt);
static void mmi_bt_music_entry_local_music();
static void mmi_bt_on_key_hdlr_down(U8 key_code);
static void mmi_bt_on_key_hdlr_up(U8 key_code);
static void mmi_bt_music_draw_softkey(MMI_BOOL is_down, MMI_BOOL isLSK);
static void mmi_bt_music_bt_link_lsk_hdlr(void);
static void mmi_bt_music_show_bt_connect_page();
static void mmi_bt_music_entry_nowplaying_page();
static void mmi_bt_music_entry_bt_connect_page();
static void mmi_bt_music_scroll_main_title_handler(void);
static void mmi_bt_music_redraw_main_title_background(S32 x1, S32 y1, S32 x2, S32 y2);
static void mmi_bt_music_exit_nowplaying_scrn();
static void mmi_bt_music_auto_seeking(void);
static void mmi_bt_music_progressbar_forward(void);
static void mmi_bt_music_sync_current_pos(void);
static void mmi_bt_music_progressbar_forward_stop(void);
static void mmi_bt_music_gdi_layer_pop_clip_blt(S32 x1,S32 y1,S32 x2,S32 y2);
static void mmi_bt_music_gdi_layer_push_clip(S32 x1,S32 y1,S32 x2,S32 y2);
static void mmi_bt_music_redraw_LSK_up();
static void mmi_bt_music_redraw_LSK_down();
static void mmi_bt_music_redraw_RSK_up();
static void mmi_bt_music_redraw_RSK_down();
static void mmi_bt_music_redraw_main_volume_speaker();
static void mmi_bt_music_pen_abort_hdlr(mmi_pen_point_struct pos);
static void mmi_bt_music_press_up_key_longpress();
static void mmi_bt_music_press_down_key_longpress();
#if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
static void mmi_bt_music_up_key_pre_up();
static void mmi_bt_music_down_key_pre_up();
static void mmi_bt_music_up_key_pre_down();
static void mmi_bt_music_down_key_pre_down();
static void mmi_bt_music_press_prev_button_up();
static void mmi_bt_music_press_next_button_up();
#endif
static void mmi_bt_music_show_popup_init(mmi_scrn_essential_struct* param);
static void mmi_bt_music_close_hdlr();
static void mmi_bt_music_show_progress_scr(mmi_id group_id, U16 scrid);
static void mmi_bt_music_auto_connect(void);
static void mmi_bt_music_clear_song_info(void);
static void mmi_bt_music_redraw_main_BT_title(void);

/***************************************************************************** 
* External Global Variable
*****************************************************************************/
//MAUI_20131111 begin
BT_MUSIC_CALLBACK bt_music_callback = NULL; 
//MAUI_20131111 end
static MMI_BOOL stream_valid = MMI_FALSE;
static U8 g_gain=0;
static MMI_BOOL  is_exit_done = MMI_FALSE;
static MMI_BOOL is_streaming = MMI_FALSE;
static MMI_BOOL     bt_music_init_title_scrolling_done;
static scrolling_text      bt_music_scrolling_title;
static bt_music_title_struct         bt_music_title;
static color        bt_music_text_border_color;
MMI_BOOL g_is_launch_from_bt = MMI_FALSE;
GDI_HANDLE skin_layer_bt;
GDI_HANDLE bt_music_osd_layer;
static U16 g_nvram_volume = NVRAM_BT_MUSIC;

//MAUI_03425036
MMI_BOOL is_bt_music_premmpted = MMI_FALSE;

#ifdef __MMI_TOUCH_SCREEN__
static mmi_pen_polygon_area_struct LSK_area;
static mmi_pen_point_struct LSK_points[4];
static mmi_pen_polygon_area_struct RSK_area;
static mmi_pen_point_struct RSK_points[4];
static s32 bt_music_pen_event_on_object = BTSP_PEN_NONE;
static const bt_music_point_struct skin1_prev_button_points[] = {{2,2},{32,2},{32,32},{2,32}};
static const bt_music_point_struct skin1_next_button_points[] = {{2,2},{32,2},{32,32},{2,32}};
static const bt_music_point_struct skin1_play_button_points[] = {{2,2},{32,2},{32,32},{2,32}};
#endif /*__MMI_TOUCH_SCREEN__*/

static S16 bt_music_main_btns_x1;
static S16 bt_music_main_btns_y1;
static S16 bt_music_main_btns_x2;
static S16 bt_music_main_btns_y2;
static bt_music_time_struct            bt_music_time;
static color        bt_music_text_fg_color;
static gdi_color    bt_music_text_bg_color;
static bt_music_progressbar_struct     bt_music_progressbar;
static bt_music_volumebar_struct       bt_music_volumebar;
static bt_music_main_btn_struct        bt_music_main_btns[NO_OF_bt_music_main_btns];
static S16 g_bt_music_main_selected_btn = BT_MUSIC_MAIN_DISABLED;
static MMI_BOOL g_bt_music_main_selected_btn_down = MMI_FALSE;
static MMI_BOOL g_mmi_bt_music_longpressed = MMI_FALSE;
static U32 elapsed_ms = 0;
static U32 duration = 0;
MMI_BOOL g_curr_pos_valid = MMI_FALSE;
MMI_BOOL g_dura_pos_valid = MMI_FALSE;
static bt_music_bg_struct            bt_music_bg;
static UI_string_type     bt_music_main_LSK_text;
static UI_string_type     bt_music_main_RSK_text;
#if defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)
static bt_music_main_push_button_struct  bt_music_vol_speaker;
static bt_music_main_push_button_struct  bt_music_vol_speaker_mute;
static bt_music_main_push_button_struct  bt_music_main_LSK;
static bt_music_main_push_button_struct  bt_music_main_RSK;

static const bt_music_point_struct bt_music_volume_inc_points[] = {{0,0},{16,0},{16,24},{0,24}};
static const bt_music_point_struct bt_music_volume_dec_points[] = {{0,0},{17,0},{17,24},{0,24}};
static const bt_music_point_struct bt_music_prev_button_points[] = {{0,0},{26,0},{26,32},{0,32}};
static const bt_music_point_struct bt_music_next_button_points[] = {{0,0},{26,0},{26,32},{0,32}};
static const bt_music_point_struct bt_music_play_button_points[] = {{0,0},{26,0},{26,32},{0,32}};

const  mmi_bt_skin_struct mmi_bt_music_skin[] =
{
       //FTE audio player
        IMG_ID_AUDPLY_MAIN_SKIN1_BG, //bg_id
        
        #if defined(__MMI_MAINLCD_240X320__)
        47, 189,
        #elif defined(__MMI_MAINLCD_320X480__)
        56, 286,
        #elif defined(__MMI_MAINLCD_320X240__)
        168, 103,
        #else
        168, 103,
        #endif
        
        0,
        IMG_ID_AUDPLY_MAIN_SKIN1_OPTION_UP, //option_up_id
        IMG_ID_AUDPLY_MAIN_SKIN1_OPTION_DOWN, //option_down_id
        IMG_ID_AUDPLY_MAIN_SKIN1_BACK_UP, //back_up_id
        IMG_ID_AUDPLY_MAIN_SKIN1_BACK_DOWN, //back_down_id
        248,248,248, //bg_color_r, bg_color_g, bg_color_b
        
        #if defined(__MMI_MAINLCD_240X320__)
        9, 289,    // lsk_pos_x, lsk_pos_y;
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        0, 204,    // lsk_pos_x, lsk_pos_y;
        #else
        9, 210,    // lsk_pos_x, lsk_pos_y;
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        11, 436,    // lsk_pos_x, lsk_pos_y;
        #else
        11, 436,    // lsk_pos_x, lsk_pos_y;
        #endif
        
        IMG_ID_AUDPLY_MAIN_SKIN1_OPTION_UP, // lsk_up_img_id, lsk_down_img_id;
        IMG_ID_AUDPLY_MAIN_SKIN1_OPTION_DOWN, // lsk_up_img_id, lsk_down_img_id;

        #if defined(__MMI_MAINLCD_240X320__)
        199, 289, // rsk_pos_x, rsk_pos_y;
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        190, 204, // rsk_pos_x, rsk_pos_y;
        #else
        282, 210, // rsk_pos_x, rsk_pos_y;
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        267, 436, // rsk_pos_x, rsk_pos_y;
        #else
        267, 436, // rsk_pos_x, rsk_pos_y;      
        #endif

        IMG_ID_AUDPLY_MAIN_SKIN1_BACK_UP, // lsk_up_img_id, lsk_down_img_id;
        IMG_ID_AUDPLY_MAIN_SKIN1_BACK_DOWN, // lsk_up_img_id, lsk_down_img_id;
        IMG_ID_AUDPLY_MAIN_SKIN1_FG_DOWN, //fg_down_id
        IMG_ID_AUDPLY_MAIN_SKIN1_FG_DISABLE, //fg_disable_id
        0,0,0, // text_border_color_r, text_border_color_g, text_border_color_b
        255,255,255, // text_fg_color_r, text_fg_color_g, text_fg_color_b
        255,255,255, // text_bg_color_r, text_bg_color_g, text_bg_color_b

        #if defined(__MMI_MAINLCD_240X320__)
        0,0,// title_x, title_y
        240,41,// title_w, title_h
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        0,20,
        320,41,
        #else
        0,23,// title_x, title_y
        160,27,// title_w, title_h
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        0,23,// title_x, title_y
        320,51,// title_w, title_h
        #else
        0,23,// title_x, title_y
        320,51,// title_w, title_h
        #endif

        IMG_ID_AUDPLY_MAIN_SKIN1_BG_TITLE, // bg_title_image_id

        #if defined(__MMI_MAINLCD_240X320__)
        176,262,15,14, //speaker_x speaker_y speaker_h speaker_w
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        144,154,15,14,
        #else
        10,183,15,14, //speaker_x speaker_y speaker_h speaker_w
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        231,399,21,20, //speaker_x speaker_y speaker_h speaker_w
        #else
        231,399,21,20, //speaker_x speaker_y speaker_h speaker_w        
        #endif

        IMG_ID_AUDPLY_MAIN_SKIN1_VOLUME_SPEAK_BUTTON_UP, //speaker_up_id
        0, //speaker_down_id
        IMG_ID_AUDPLY_MAIN_SKIN1_VOLUME_SPEAK_MUTE_BUTTON_UP, // speaker_mute_up_id
        0, //speaker_mute_down_id

        #if defined(__MMI_MAINLCD_240X320__)
        194,262,// volumebar_x, volumebar_y, 
        32,14,// volumebar_w, volumebar_h, 
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        162,156,
        32,14,
        #else
        28,183,// volumebar_x, volumebar_y, 
        32,14,// volumebar_w, volumebar_h, 
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        256,399,// volumebar_x, volumebar_y, 
        48,20,// volumebar_w, volumebar_h, 
        #else
        256,399,// volumebar_x, volumebar_y, 
        48,20,// volumebar_w, volumebar_h,         
        #endif

        0,//volumebar_ind_len
        0, //volumebar_direction
        IMG_ID_AUDPLY_MAIN_SKIN1_BG_VOLUME, // bg_volume_image_id
        IMG_ID_AUDPLY_MAIN_SKIN1_VOLUME_INDICATOR, // volumebar_ind_image_id

        #if defined(__MMI_MAINLCD_240X320__)
        9,175,// progressbar_x, progressbar_y
        220, 14, // progressbar_w, progressbar_h
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        10,180,
        300,14,
        #else
        166,92,// progressbar_x, progressbar_y
        146, 10, // progressbar_w, progressbar_h
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        14,269,// progressbar_x, progressbar_y
        293, 14, // progressbar_w, progressbar_h
        #else
        14,269,// progressbar_x, progressbar_y
        293, 14, // progressbar_w, progressbar_h        
        #endif

        IMG_ID_AUDPLY_MAIN_SKIN1_BG_PROGRESS, // bg_progress_image_id
        IMG_ID_AUDPLY_MAIN_SKIN1_PROGRESSBAR, // progressbar_image_id
        IMG_ID_AUDPLY_MAIN_SKIN1_PROGRESSBAR_FAIL, // progressbar_fail_image_id

        #if defined(__MMI_MAINLCD_240X320__)
        59,221, // prev_button_x, prev_button_y
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        0,110,
        #else
        181,136, // prev_button_x, prev_button_y
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        72,332, // prev_button_x, prev_button_y
        #else
        72,332, // prev_button_x, prev_button_y        
        #endif

        IMG_ID_AUDPLY_MAIN_SKIN1_BG_BUTTON, //bg_button_id
        IMG_ID_AUDPLY_MAIN_SKIN1_PREV, // prev_button_image_id
        0, // prev_button_image_id

        #if defined(__MMI_MAINLCD_240X320__)
        149,221, // next_button_x, next_button_y
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        290,110,
        #else
        271,136, // next_button_x, next_button_y
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        206,332, // next_button_x, next_button_y
        #else
        206,332, // next_button_x, next_button_y        
        #endif

        IMG_ID_AUDPLY_MAIN_SKIN1_NEXT, // next_button_image_id
        0, // next_button_image_id
        
#if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)

        #if defined(__MMI_MAINLCD_240X320__)
        104,221, // play_button_x, play_button_y
        #elif defined(__MMI_MAINLCD_320X240__)
        226,136, // play_button_x, play_button_y
        #elif defined(__MMI_MAINLCD_320X480__)
        139,332, // play_button_x, play_button_y
        #else
        139,332, // play_button_x, play_button_y        
        #endif
        
        IMG_ID_AUDPLY_MAIN_SKIN1_PLAY, // play_button_image_id
        0, // play_button_image_id
        IMG_ID_AUDPLY_MAIN_SKIN1_PAUSE, // pause_button_image_id
#endif

#ifdef __MMI_TOUCH_SCREEN__
        {(const bt_music_point_struct *)bt_music_prev_button_points, 4}, // prev_button_area
        {(const bt_music_point_struct *)bt_music_next_button_points, 4}, // next_button_area
        {(const bt_music_point_struct *)bt_music_play_button_points, 4}, // play_button_area

#endif /*__MMI_TOUCH_SCREEN__*/

        #if defined(__MMI_MAINLCD_240X320__)
        12,188,// time_left_x, time_left_y
        227,188,// time_right_x, time_right_y
        #elif defined(__MMI_MAINLCD_320X240__)
        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        10,170,
        310,170,
        #else
        171,74,// time_left_x, time_left_y
        312,74,// time_right_x, time_right_y
        #endif
        #elif defined(__MMI_MAINLCD_320X480__)
        22,254,// time_left_x, time_left_y
        297,254,// time_right_x, time_right_y
        #else
        22,254,// time_left_x, time_left_y
        297,254,// time_right_x, time_right_y        
        #endif

        {IMG_ID_AUDPLY_MAIN_SKIN1_NUM0, 
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM1,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM2,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM3,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM4,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM5,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM6,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM7,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM8,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUM9,
        IMG_ID_AUDPLY_MAIN_SKIN1_NUMC} 
  };

#else
    
const  mmi_bt_skin_struct mmi_bt_music_skin[] =
{
    //skin1
        IMG_ID_BT_MUSIC_MAIN_SKIN1_BUTTON,
        0,0,0, // text_border_color_r, text_border_color_g, text_border_color_b
        61,94,60, // text_fg_color_r, text_fg_color_g, text_fg_color_b
        255,255,255, // text_bg_color_r, text_bg_color_g, text_bg_color_b
        
        #if defined(__MMI_MAINLCD_128X128__)
        0,0,// title_x, title_y
        128,18,// title_w, title_h
        #elif defined(__MMI_MAINLCD_128X160__)
        0,0,// title_x, title_y
        128,20,// title_w, title_h
        #elif defined(__MMI_MAINLCD_176X220__)
        0,0,// title_x, title_y
        176,24,// title_w, title_h
        #elif defined(__MMI_MAINLCD_240X320__)
        0,0,// title_x, title_y
        240,33,// title_w, title_h
        #else
        0,0,// title_x, title_y
        240,33,// title_w, title_h
        #endif
        
        IMG_ID_AUDPLY_MAIN_SKIN1_BG_TITLE, // bg_title_image_id
        
        #if defined(__MMI_MAINLCD_128X128__)
            9,73,// time_left_x, time_left_y
            118,73,// time_right_x, time_right_y
        #elif defined(__MMI_MAINLCD_128X160__)
        9,97,// time_left_x, time_left_y
        118,97,// time_right_x, time_right_y
        #elif defined(__MMI_MAINLCD_176X220__)
        16,128,// time_left_x, time_left_y
        159,128,// time_right_x, time_right_y
        #elif defined(__MMI_MAINLCD_240X320__)
        21,174,// time_left_x, time_left_y
        218,174,// time_right_x, time_right_y
        #else
        21,174,// time_left_x, time_left_y
        218,174,// time_right_x, time_right_y        
        #endif

            {IMG_ID_AUDPLY_MAIN_SKIN1_NUM0, 
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM1,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM2,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM3,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM4,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM5,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM6,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM7,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM8,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUM9,
            IMG_ID_AUDPLY_MAIN_SKIN1_NUMC},

        #if defined(__MMI_MAINLCD_128X128__)
            99,99,// volumebar_x, volumebar_y, 
        #elif defined(__MMI_MAINLCD_128X160__)
        99,128,// volumebar_x, volumebar_y, 
        #elif defined(__MMI_MAINLCD_176X220__)
        141,178,// volumebar_x, volumebar_y, 
        #elif defined(__MMI_MAINLCD_240X320__)
        186,261,// volumebar_x, volumebar_y, 
        #else
        186,261,// volumebar_x, volumebar_y,         
        #endif
        
            20,8,// volumebar_w, volumebar_h, 
            0,//volumebar_ind_len
            0, //volumebar_direction
            IMG_ID_AUDPLY_MAIN_SKIN1_BG_VOLUME, // bg_volume_image_id
            IMG_ID_AUDPLY_MAIN_SKIN1_VOLUME_INDICATOR, // volumebar_ind_image_id
            
        #if defined(__MMI_MAINLCD_128X128__)
            9,68,// progressbar_x, progressbar_y
        110,3,// progressbar_w, progressbar_h
        #elif defined(__MMI_MAINLCD_128X160__)
        9,91,// progressbar_x, progressbar_y
        110,3,// progressbar_w, progressbar_h
        #elif defined(__MMI_MAINLCD_176X220__)
        15,118,// progressbar_x, progressbar_y
        146, 4, // progressbar_w, progressbar_h
        #elif defined(__MMI_MAINLCD_240X320__)
        20,160,// progressbar_x, progressbar_y
        200, 7, // progressbar_w, progressbar_h
        #else
        20,160,// progressbar_x, progressbar_y
        200, 7, // progressbar_w, progressbar_h
        #endif
            
        IMG_ID_AUDPLY_MAIN_SKIN1_BG_PROGRESS, // bg_progress_image_id
            IMG_ID_AUDPLY_MAIN_SKIN1_PROGRESSBAR, // progressbar_image_id
            IMG_ID_AUDPLY_MAIN_SKIN1_PROGRESSBAR_FAIL, // progressbar_fail_image_id      
            
        /*prev button*/
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
        #elif defined(__MMI_MAINLCD_240X320__)
            50,228, // prev_button_x, prev_button_y
        #else
        50,228, // prev_button_x, prev_button_y
            #endif
        
        
        IMG_ID_BT_MUSIC_MAIN_SKIN1_PREV, // prev_button_off_image_id
        IMG_ID_BT_MUSIC_MAIN_SKIN1_PREV, // prev_button_down_image_id
        
        /*next button*/
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
        #elif defined(__MMI_MAINLCD_240X320__)
            148,228, // next_button_x, next_button_y
        #else
        148,228, // next_button_x, next_button_y
            #endif
        
        
        IMG_ID_BT_MUSIC_MAIN_SKIN1_NEXT, // next_button_off_image_id
        IMG_ID_BT_MUSIC_MAIN_SKIN1_NEXT, // next_button_down_image_id
        
        /*play button*/
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
        #elif defined(__MMI_MAINLCD_240X320__)
            99,228, // play_button_x, play_button_y
        #else
        99,228, // play_button_x, play_button_y
            #endif 
        
        IMG_ID_BT_MUSIC_MAIN_SKIN1_PLAY, // play_button_off_image_id
        IMG_ID_BT_MUSIC_MAIN_SKIN1_PLAY, // play_button_down_image_id
        IMG_ID_BT_MUSIC_MAIN_SKIN1_PAUSE, // pause_button_off_image_id
        IMG_ID_BT_MUSIC_MAIN_SKIN1_PAUSE, // pause_button_down_image_id  


        #ifdef __MMI_TOUCH_SCREEN__
        {(const bt_music_point_struct *)skin1_prev_button_points, 4}, // prev_button_area
        {(const bt_music_point_struct *)skin1_next_button_points, 4}, // next_button_area
        {(const bt_music_point_struct *)skin1_play_button_points, 4}, // play_button_area
        #endif /*__MMI_TOUCH_SCREEN__*/
};
#endif//__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__
/***************************************************************************** 
* function implement
*****************************************************************************/
static void mmi_bt_music_stream_start_timeout(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_STREAM_START_TIMEOUT);
    stream_valid = MMI_TRUE;
}
static void mmi_bt_music_AVRCP_track_change_timeout()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_get_active_id() == SCR_ID_BT_MUSIC_APP)
    {
        mmi_bt_music_clear_song_info();
        mmi_bt_music_redraw_time();
        mmi_bt_music_redraw_progressbar();
        mmi_bt_music_redraw_main_BT_title();
    }
}

//MAUI_03425036 BEGIN
void mmi_btspeaker_set_volume_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S16 error;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    ReadValue(g_nvram_volume, &g_gain, DS_BYTE, &error);
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_SET_VOL, g_gain);
    if(g_gain > MDI_AUD_VOL_EX_NUM)
    {
        g_gain = MDI_AUD_VOL_EX_NUM;
        WriteValue(g_nvram_volume, &g_gain, DS_BYTE, &error);
    }
    
    mdi_audio_set_volume(VOL_TYPE_MEDIA, (U8)(MDI_AUD_VOL_EX_MUTE(g_gain)));
}
//MAUI_03425036 END

//MAUI_20131111 begin
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_show_pop_up
 * DESCRIPTION
 *  select to close bt music or not.
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/ 
void mmi_bt_music_disconnect(BT_MUSIC_CALLBACK callback)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_DISCONNECT);
    bt_music_callback = callback;
    mmi_frm_scrn_first_enter(GRP_ID_ROOT, SCR_ID_BT_MUSIC_CLOSE_CONFIRM, mmi_bt_music_show_popup_init,NULL);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_check_connection
 * DESCRIPTION
 *  Check bt music need to disconnect
 * PARAMETERS
 *  void
 *
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_bt_music_check_connection(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 role;
    MMI_BOOL A2DP_connc = MMI_FALSE;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    A2DP_connc = srv_bt_cm_is_profile_connected(SRV_BT_CM_A2DP_CONNECTION);
    role = srv_a2dp_get_role((srv_bt_cm_bt_addr *)mmi_a2dp_get_bt_headset());
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CHECK_CONNECTION, A2DP_connc, role);
    if(BT_A2DP_SINK == role && A2DP_connc)
    {
        return MMI_TRUE;
    }
    return MMI_FALSE;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_nmgr_entry_hdlr
 * DESCRIPTION
 *  This function is entry multimedia app screen by nmgr way
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_bt_music_nmgr_entry_hdlr(mmi_scenario_id scen_id, void *arg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(bt_music_callback)
    {
        (*bt_music_callback)(MMI_TRUE);
        bt_music_callback = NULL;
    }
    return MMI_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_close_cb
 * DESCRIPTION
 *  bt music close callback function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_music_close_cb()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CLOSE_CALLBACK);
    mmi_frm_cb_dereg_event(EVT_ID_SRV_A2DP_DISCONNECT, mmi_bt_music_close_cb, NULL);
    mmi_frm_scrn_close(GRP_ID_ROOT, SCR_ID_BT_MUSIC_CLOSE_WAITING);
    mmi_frm_scrn_close(GRP_ID_ROOT, SCR_ID_BT_MUSIC_CLOSE_CONFIRM);
    mmi_frm_nmgr_notify_by_app(MMI_SCENARIO_ID_DEFAULT,
                               MMI_EVENT_DEFAULT,
                               mmi_bt_music_nmgr_entry_hdlr,
                               NULL);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_show_popup_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  MMI_RET_ALLOW_CLOSE
 *****************************************************************************/
mmi_ret mmi_bt_music_show_popup_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_DEINIT:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_SHOW_POPUP_PROC);
            mmi_frm_cb_dereg_event(EVT_ID_SRV_A2DP_DISCONNECT, (mmi_proc_func)mmi_bt_music_close_cb, NULL);
            break;
        }
        default:
            break;
    }

    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_show_popup_init
 * DESCRIPTION
 *  This function is bt music function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_music_show_popup_init(mmi_scrn_essential_struct* param)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!mmi_frm_scrn_enter(
                param->group_id,
                param->scrn_id,
                (FuncPtr) NULL,
                (FuncPtr) mmi_bt_music_show_popup_init,
        MMI_FRM_UNKNOW_SCRN))
    {
        return;
    }
    ShowCategory163Screen(
        (UI_string_type)GetString(STR_GLOBAL_OK),
        (PU8)GetImage(IMG_GLOBAL_OK),
        (UI_string_type)GetString(STR_GLOBAL_BACK),
        (PU8)GetImage(IMG_GLOBAL_BACK),
        (UI_string_type)GetString(STR_ID_BT_MUSIC_DISCONNECT_CONFIRM),
        mmi_get_event_based_image(MMI_EVENT_PROGRESS),
        NULL);
    /*03477042*/
    mmi_frm_cb_reg_event(EVT_ID_SRV_A2DP_DISCONNECT, (mmi_proc_func)mmi_bt_music_close_cb, NULL);
    SetLeftSoftkeyFunction(mmi_bt_music_close_hdlr, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_bt_music_close_hdlr, KEY_EVENT_UP);
    mmi_frm_scrn_set_leave_proc(param->group_id,
                                param->scrn_id,
                                mmi_bt_music_show_popup_proc);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_disconnecting_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  MMI_RET_ALLOW_CLOSE
 *****************************************************************************/
mmi_ret mmi_bt_music_disconnecting_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_INIT:
        {
            mmi_frm_cb_reg_event(EVT_ID_SRV_A2DP_DISCONNECT, (mmi_proc_func)mmi_bt_music_close_cb, NULL);
            break;
        }
        case EVT_ID_SCRN_ACTIVE:
        {
            ShowCategory66Screen(
                STR_ID_BT_MUSIC_DISCONNECTING,
                GetRootTitleIcon(MENU_CONN_BT_MAIN),
                0,
                0,
                0,
                0,
                (U8*)GetString(STR_GLOBAL_DISCONNECTING),
                mmi_get_event_based_image(MMI_EVENT_PROGRESS),
                NULL);
            break;
        }
        default:
            break;
    }
    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_close_hdlr
 * DESCRIPTION
 *  This function is bt music close  function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_music_close_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CLOSE_HDLR);
    
    mmi_frm_scrn_close(GRP_ID_ROOT, SCR_ID_BT_MUSIC_CLOSE_CONFIRM);
    mmi_bt_music_show_progress_scr(GRP_ID_ROOT, SCR_ID_BT_MUSIC_CLOSE_WAITING);
    srv_a2dp_disconnect();
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_close_hdlr
 * DESCRIPTION
 *  This function is bt music close  function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_music_show_progress_scr(mmi_id group_id, U16 scr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_is_present(GRP_ID_ROOT,SCR_ID_BT_MUSIC_CLOSE_WAITING, MMI_FRM_NODE_ALL_FLAG))
    {
        mmi_frm_scrn_close(GRP_ID_ROOT,SCR_ID_BT_MUSIC_CLOSE_WAITING);
    }
    mmi_frm_scrn_create(GRP_ID_ROOT,
                        SCR_ID_BT_MUSIC_CLOSE_WAITING,
                        mmi_bt_music_disconnecting_proc,
        NULL);
}
//MAUI_20131111 end

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_speaker_background_callback_hdlr
 * DESCRIPTION
 *  BT music background callbak func.
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/ 
MMI_BOOL mmi_bt_speaker_background_callback_hdlr(mdi_result result, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BG_CB, result, is_bt_music_premmpted);
    if(result == MDI_AUDIO_RESUME)
    {
        if(is_bt_music_premmpted)
        {
            kal_prompt_trace(MOD_MMI, "bt speaker power on");
            mmi_btspeaker_set_volume_handler();
            srv_a2dp_sink_avrcp_interface(SRV_A2DP_SINK_RESUME);
            is_bt_music_premmpted = MMI_FALSE;
        }
        
        mdi_audio_clear_background_handler(MDI_BACKGROUND_APP_BT_MUSIC);
    }
    return MMI_TRUE;
}

//MAUI_20131111 begin
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_sepaker_power_off
 * DESCRIPTION
 *  BT music interrupt callback func, will be registered by MDI when A2DP
 *  codec open.
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/ 
void mmi_bt_sepaker_power_off(S32 result, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID scrn_id = mmi_frm_scrn_get_active_id();
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_POWER_OFF, result, is_streaming, stream_valid);
    if(result == MDI_AUDIO_TERMINATED)
    {
    if (srv_a2dp_sink_is_streaming() == MMI_TRUE)
    {
        if (is_streaming && stream_valid)
        {
            is_bt_music_premmpted = MMI_TRUE;
        }
        srv_a2dp_sink_avrcp_interface(SRV_A2DP_SINK_TERMINATED);
        is_streaming = MMI_FALSE;
    }
    mdi_audio_set_background_handler(MDI_BACKGROUND_APP_BT_MUSIC, mmi_bt_speaker_background_callback_hdlr,NULL);
    mdi_audio_clear_other_background_handler(MDI_BACKGROUND_APP_BT_MUSIC);
}
}
//MAUI_20131111 end

void mmi_bt_music_inc_vol(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S16 error; 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    ReadValue(g_nvram_volume, &g_gain, DS_BYTE, &error);
    if (g_gain < MDI_AUD_VOL_EX_NUM)
    {  
        g_gain++;
        WriteValue(g_nvram_volume,&g_gain, DS_BYTE, &error);
        if(mmi_bt_music_is_playing())
        {
            mdi_audio_set_volume(VOL_TYPE_MEDIA, (U8)(MDI_AUD_VOL_EX_MUTE(g_gain)));
        }
    }    
    srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_VOLUME_UP);  
}

void mmi_bt_music_dec_vol(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S16 error; 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    ReadValue(g_nvram_volume, &g_gain, DS_BYTE, &error);
    if ((g_gain > MDI_AUD_VOL_EX_0) && (g_gain <= MDI_AUD_VOL_EX_NUM))
    { 
        g_gain--;
        WriteValue(g_nvram_volume,&g_gain, DS_BYTE, &error);
        if(mmi_bt_music_is_playing())
        {
            mdi_audio_set_volume(VOL_TYPE_MEDIA, (U8)(MDI_AUD_VOL_EX_MUTE(g_gain)));
        }
    }
    srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_VOLUME_DOWN);
}
MMI_BOOL mmi_bt_music_is_A2DP_sink(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 role;
    MMI_BOOL is_headset;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    is_headset = srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION);
    role = srv_a2dp_get_role((srv_bt_cm_bt_addr *)mmi_a2dp_get_bt_headset());
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_IS_A2DP_SINK, role, is_headset);
    if(BT_A2DP_SINK == role || (BT_A2DP_SRC_SINK == role && !is_headset))
    {
        return MMI_TRUE;
    }
    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_check_profile
 * DESCRIPTION
 *  check music player releated profiles: A2DP and AVRCP_CT
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_bt_music_check_profile()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL A2DP_connc = MMI_FALSE;
    MMI_BOOL AVRCP_connc = MMI_FALSE;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    A2DP_connc = srv_bt_cm_is_profile_connected(SRV_BT_CM_A2DP_CONNECTION);
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_A2DP_PROFILE, A2DP_connc);
    //AVRCP_connc = srv_bt_cm_is_profile_connected(SRV_BT_CM_AVRCP_CT_CONNECTION);
    AVRCP_connc = srv_avrcp_is_avrcp_connected();
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_AVRCP_PROFILE, AVRCP_connc);
    
    return (A2DP_connc && AVRCP_connc);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_launch_fn
 * DESCRIPTION
 *  This function is to launch bt music
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_music_launch_fn(MMI_ID parent_gid)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_LAUNCH, parent_gid);
    #ifdef __MMI_AUDIO_PLAYER_BT__
    if(mmi_frm_group_is_present(GRP_ID_AUDPLY_MAIN))
    {
        mmi_frm_group_close(GRP_ID_AUDPLY_MAIN);
    }
    #endif

    mmi_frm_group_create_ex(parent_gid,
                            GRP_ID_BT_MUSIC_APP,
                            NULL,
                            NULL,
                            MMI_FRM_NODE_SMART_CLOSE_FLAG);
    
    if(mmi_bt_music_check_profile() && mmi_bt_music_is_A2DP_sink())
    {
        mmi_bt_music_entry_nowplaying_page();
    }
    else
    {
        mmi_bt_music_entry_bt_connect_page();
        /*auto connect*/
        mmi_bt_music_auto_connect();
    }

    return;
} 
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_conn_A2DP_profile_cb
 * DESCRIPTION
 *  a2dp connect callback
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_music_conn_A2DP_profile_cb(srv_bt_cm_connection_type conn_type,MMI_BOOL result,MMI_BOOL is_connect)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID scrn_id = mmi_frm_scrn_get_active_id(); 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CONN_A2DP_CB, result);

    if(result)
    {
        if (mmi_bt_music_check_profile())
        {
        mmi_bt_music_entry_nowplaying_page();
            mmi_bt_dialer_conn_profile_end(SRV_BT_CM_A2DP_CONNECTION);
            mmi_frm_scrn_close(GRP_ID_BT_MUSIC_APP,SCR_BT_CONNECTING);
            mmi_frm_scrn_close(GRP_ID_BT_MUSIC_APP,SCR_ID_BT_MUSIC_CONN_SCREEN);
        }
    }
    else
    {
        MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CONN_FAILED);
        mmi_bt_dialer_conn_profile_end(SRV_BT_CM_A2DP_CONNECTION);
        mmi_frm_scrn_close(GRP_ID_BT_MUSIC_APP,SCR_BT_CONNECTING);
        mmi_frm_nmgr_popup(
            MMI_SCENARIO_ID_DEFAULT,
            MMI_EVENT_FAILURE,
            (WCHAR*)GetString(STR_ID_BT_MUSIC_CONN_FAILED));
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_auto_connect
 * DESCRIPTION
 *  This function is to auto connect A2DP profile
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_music_auto_connect(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID group_id = mmi_frm_group_get_active_id();
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_AUTO_CONN);
    if (!mmi_bt_dialer_app_is_connected())
    {
        return;
    }
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_A2DP_AUTO_CONN);
    mmi_bt_dialer_conn_profile(
                        group_id,
                        SRV_BT_CM_A2DP_CONNECTION,
                        mmi_bt_music_conn_A2DP_profile_cb);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_post_creat_nowplaying
 * DESCRIPTION
 *  workaround for post entry nowplaying page
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  MMI_RET
 *****************************************************************************/

MMI_RET mmi_bt_music_post_creat_nowplaying(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    mmi_bt_music_entry_nowplaying_page();
    return MMI_RET_OK;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_post_creat_conn
 * DESCRIPTION
 *  workaround for post entry conn page
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  MMI_RET
 *****************************************************************************/

MMI_RET mmi_bt_music_post_creat_conn(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    mmi_bt_music_entry_bt_connect_page();
    return MMI_RET_OK;
}

MMI_RET mmi_bt_music_conn_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_INIT:
        {
            break;
        }
        case EVT_ID_SCRN_ACTIVE:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CONN_PAGE_ACTIVE);
            mmi_bt_music_show_bt_connect_page();
            break;
            }
        case EVT_ID_SCRN_INACTIVE:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CONN_PAGE_INACTIVE);
            break;
        }
        case EVT_ID_SCRN_DEINIT:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_CONN_PAGE_CLOSE);
            //mmi_frm_group_close(GRP_ID_BT_MUSIC_APP);
            break;
        }
 
        default:
            break;
    }  
    return MMI_RET_OK;
}

static void mmi_bt_music_entry_nowplaying_page()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_ENTRY_NOWPLAYING_PAGE);
    mmi_frm_scrn_create(GRP_ID_BT_MUSIC_APP,
                        SCR_ID_BT_MUSIC_APP,
                        mmi_bt_music_avrcp_sink_send_cmd_frame,
                        NULL);  
}     
static void mmi_bt_music_bt_link_lsk_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID group_id = mmi_frm_group_get_active_id();
    MMI_BOOL is_bt_conn = mmi_bt_dialer_app_is_connected();
    MMI_BOOL is_a2dp_sink = mmi_bt_music_is_A2DP_sink();
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_LSK_CONN);
    if(srv_bt_cm_get_bqb_test_flag())
    {
        mmi_bt_dialer_conn_profile(
                        group_id,
                        SRV_BT_CM_A2DP_CONNECTION,
                        mmi_bt_music_conn_A2DP_profile_cb);
        return;
    }
    if(is_a2dp_sink == MMI_FALSE)
    {
        MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_NOT_AVAILABLE);
        mmi_frm_nmgr_popup(
                MMI_SCENARIO_ID_DEFAULT,
                MMI_EVENT_FAILURE,
                (WCHAR*)GetString(STR_GLOBAL_CURRENTLY_NOT_AVAILABLE));
        return;
    }
    if (is_bt_conn == MMI_FALSE)
    {
        MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_DIALER_CONN_ALL);
        mmi_bt_dialer_show_popup(group_id);
        return;
    }
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_A2DP_CONN);
    mmi_bt_dialer_conn_profile(
        group_id,
        SRV_BT_CM_A2DP_CONNECTION,
        mmi_bt_music_conn_A2DP_profile_cb);
}

static void mmi_bt_music_entry_bt_connect_page()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_is_present(GRP_ID_BT_MUSIC_APP,SCR_ID_BT_MUSIC_CONN_SCREEN, MMI_FRM_NODE_ALL_FLAG))
    {
        return;
    }
    mmi_frm_scrn_create(GRP_ID_BT_MUSIC_APP,
                    SCR_ID_BT_MUSIC_CONN_SCREEN,
                    mmi_bt_music_conn_proc,
                    NULL);                
}

static void mmi_bt_music_show_bt_connect_page()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 category_error_flag;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_SHOW_CONN_PAGE);
    wgui_set_menu_empty_string_by_id(STR_ID_BT_MUSIC_NO_CONN);
    wgui_cat1031_show(get_string(STR_ID_BT_MUSIC_TITLE),
                      NULL,
                      get_string(STR_GLOBAL_CONNECT),
                      NULL,
                      get_string(STR_GLOBAL_BACK),
                      NULL,
                      0,
                      NULL,
                      NULL,
                      0,
                      1,
                      0,
                      0,
                      mmi_frm_scrn_get_active_gui_buf(),
                      &category_error_flag);
    
    wgui_set_menu_empty_string_by_id(STR_GLOBAL_EMPTY);
    SetCenterSoftkeyFunction(mmi_bt_music_bt_link_lsk_hdlr, KEY_EVENT_UP);
    SetLeftSoftkeyFunction(mmi_bt_music_bt_link_lsk_hdlr, KEY_EVENT_UP);
}

BOOL mmi_bt_music_is_playing(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if ((MMI_BOOL)srv_a2dp_sink_is_streaming())
    {
        return MMI_TRUE;
    }
    return MMI_FALSE;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_a2dp_connect_callback_hdlr
 * DESCRIPTION
 *  passive connect a2dp event hdlr
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 ****************************************************************************/
mmi_ret mmi_bt_music_a2dp_connect_callback_hdlr(mmi_event_struct *event)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL nowplaying_page_is_present = mmi_frm_scrn_is_present(GRP_ID_BT_MUSIC_APP,SCR_ID_BT_MUSIC_APP, MMI_FRM_NODE_ALL_FLAG);
    MMI_BOOL conn_page_is_present = mmi_frm_scrn_is_present(GRP_ID_BT_MUSIC_APP,SCR_ID_BT_MUSIC_CONN_SCREEN, MMI_FRM_NODE_ALL_FLAG);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/    
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_A2DP_CONNECT_CALLBACK_HDLR, nowplaying_page_is_present, conn_page_is_present);
    if(conn_page_is_present && !nowplaying_page_is_present && mmi_bt_music_check_profile() && mmi_bt_music_is_A2DP_sink())
    {
        mmi_bt_music_entry_nowplaying_page();
    }
}

/*****************************************************************************
 * FUNCTION
*	mmi_bt_music_a2dp_stream_start_ind_hdlr
* DESCRIPTION
 *	passive  a2dp stream start ind event hdlr
* PARAMETERS
*	void
*
* RETURNS
*	void
****************************************************************************/
mmi_ret mmi_bt_music_a2dp_stream_start_ind_hdlr(mmi_event_struct *event)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	MMI_BOOL nowplaying_page_is_present = mmi_frm_scrn_is_present(GRP_ID_BT_MUSIC_APP,SCR_ID_BT_MUSIC_APP, MMI_FRM_NODE_ALL_FLAG);
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_A2DP_CB_START_IND,is_streaming);
	if(nowplaying_page_is_present)
		return MMI_RET_OK;

	mmi_btspeaker_set_volume_handler();
	if(!is_streaming)
	{
		is_streaming = MMI_TRUE;             
	}

	StopTimer(BT_MUSIC_STREAM_TIMER);
	StartTimer(BT_MUSIC_STREAM_TIMER, 300, mmi_bt_music_stream_start_timeout);	
	
	srv_a2dp_sink_set_callback_notifier((A2DP_SRV_CALLBACK)mmi_bt_music_A2DP_cb);
}

mmi_ret mmi_bt_music_profile_evt_hdlr(mmi_event_struct *event)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if ((MMI_BOOL)mmi_bt_music_is_playing())
    {
        return (!MMI_RET_OK);
    }

    return MMI_RET_OK;
}
static void mmi_bt_music_clear_song_info(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    //clear song info
    memset(bt_music_info.title, 0, sizeof(bt_music_info.title));
    duration = 0;
    elapsed_ms = 0;
    g_dura_pos_valid = MMI_FALSE;
    g_curr_pos_valid = MMI_FALSE;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_avrcp_sink_send_cmd_frame
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 ****************************************************************************/
MMI_RET mmi_bt_music_avrcp_sink_send_cmd_frame(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID scrn_id = mmi_frm_scrn_get_active_id(); 
    mmi_frm_key_evt_struct* p_key;
    p_key = (mmi_frm_key_evt_struct*) evt;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_INIT:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_NOWPLAYING_PAGE_INIT);
            mmi_bt_music_init_main();
            srv_a2dp_sink_set_callback_notifier((A2DP_SRV_CALLBACK)mmi_bt_music_A2DP_cb);
        #ifdef __MMI_BT_AVRCP_V13__
             srv_avrcp_register_result_notifier((srv_avrcp_notify_event)mmi_bt_music_avrcp_cb);
        #endif
            break;
        }
        case EVT_ID_SCRN_ACTIVE:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_NOWPLAYING_PAGE_ACTIVE);
            g_bt_music_main_selected_btn_down = MMI_FALSE;
            bt_music_main_LSK_text = (UI_string_type) GetString(STR_GLOBAL_OPTIONS);
            bt_music_main_RSK_text = (UI_string_type) GetString(STR_GLOBAL_BACK);
            is_streaming = srv_a2dp_sink_is_streaming();
            g_bt_music_main_selected_btn = is_streaming ? BT_MUSIC_MAIN_PAUSE : BT_MUSIC_MAIN_PLAY;
            #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            bt_music_main_LSK_text = is_streaming ? (UI_string_type)GetString(STR_GLOBAL_PAUSE):(UI_string_type)GetString(STR_GLOBAL_PLAY);
            #endif
            #ifdef __MMI_BT_AVRCP_V13__
            srv_avrcp_get_elements_attr_request();
            srv_avrcp_get_play_status_req();
            #endif
            mmi_bt_music_redraw_main_all();
            is_exit_done = MMI_FALSE;
            #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            /*down*/
            SetKeyHandler(mmi_bt_music_up_key_pre_down, KEY_UP_ARROW, KEY_EVENT_DOWN);
            SetKeyHandler(mmi_bt_music_down_key_pre_down, KEY_DOWN_ARROW, KEY_EVENT_DOWN);
            /*up*/
            SetKeyHandler(mmi_bt_music_up_key_pre_up, KEY_UP_ARROW, KEY_EVENT_UP);
            SetKeyHandler(mmi_bt_music_down_key_pre_up, KEY_DOWN_ARROW, KEY_EVENT_UP);
            /* longpress */
            SetKeyHandler(mmi_bt_music_press_up_key_longpress, KEY_UP_ARROW, KEY_EVENT_LONG_PRESS);
            SetKeyHandler(mmi_bt_music_press_down_key_longpress, KEY_DOWN_ARROW, KEY_EVENT_LONG_PRESS);
            /*repeat*/
            SetKeyHandler(mmi_bt_music_press_up_key_longpress, KEY_UP_ARROW, KEY_REPEAT);
            SetKeyHandler(mmi_bt_music_press_down_key_longpress, KEY_DOWN_ARROW, KEY_REPEAT);
            SetKeyHandler(mmi_idle_display, KEY_RSK, KEY_LONG_PRESS);
            #else
            /* longpress for bt dialer*/
            SetKeyHandler(mmi_bt_music_press_up_key_longpress, KEY_VOL_UP, KEY_EVENT_LONG_PRESS);
            SetKeyHandler(mmi_bt_music_press_down_key_longpress, KEY_VOL_DOWN, KEY_EVENT_LONG_PRESS);
            /*repeat*/
            SetKeyHandler(mmi_bt_music_press_up_key_longpress, KEY_VOL_UP, KEY_REPEAT);
            SetKeyHandler(mmi_bt_music_press_down_key_longpress, KEY_VOL_DOWN, KEY_REPEAT);
            #endif
            #ifdef __MMI_TOUCH_SCREEN__
            mmi_pen_register_down_handler(mmi_bt_music_pen_down_hdlr);
            mmi_pen_register_up_handler(mmi_bt_music_pen_up_hdlr);
            mmi_pen_register_abort_handler(mmi_bt_music_pen_abort_hdlr);
            mmi_pen_register_move_handler(mmi_bt_music_pen_move_hdlr);
            #endif
            break;
        }
        case EVT_ID_SCRN_INACTIVE:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_NOWPLAYING_PAGE_INACTIVE);
            mmi_bt_music_exit_nowplaying_scrn();
            break;
        }
        case EVT_ID_SCRN_DEINIT:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_NOWPLAYING_PAGE_DEINIT);
            mmi_bt_music_exit_nowplaying_scrn();
            mmi_bt_music_clear_song_info();
            break;
        }
        case EVT_ID_ON_KEY:
        {
            if(scrn_id != SCR_ID_BT_MUSIC_APP)
            {
                return;
            }
            if(p_key->key_type == KEY_EVENT_DOWN)
            {   
               mmi_bt_on_key_hdlr_down(p_key->key_code);
            }
            if(p_key->key_type == KEY_EVENT_UP)
            {
               mmi_bt_on_key_hdlr_up(p_key->key_code);             
            }
            break;
        }
        default:
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
    #if defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)
    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 w_fg, h_fg;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gdi_image_get_dimension(img_p, &w_fg, &h_fg);
    gdi_layer_push_and_set_clip(x, y, x + w_fg - 1, y + h_fg - 1);
    gui_draw_filled_area(0,
                         0,
                         UI_device_width-1,
                         UI_device_height-1, 
                         current_MMI_theme->sub_menu_bkg_filler);
    gdi_image_draw(x , y , img_p);
    switch (state)
    {
        case BT_MUSIC_MAIN_DOWN:
        {
            gdi_image_draw_resized(x, y, w_fg, h_fg, bt_music_bg.bt_music_main_button_img_hilite);
            break;
        }
        default:
            break;
    }
    gdi_layer_pop_clip();
    
    #else

    /*----------------------------------------------------------------*/
    /* Local Variables                                                  */
    /*----------------------------------------------------------------*/
    S32 w_fg, h_fg;
    S32 w_bg, h_bg;
    #ifndef __MMI_TOUCH_SCREEN__
    PU8 bg_img;
    #endif /*__MMI_TOUCH_SCREEN__*/
    w_bg = 0;
    h_bg = 0;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gdi_image_get_dimension(img_p, &w_fg, &h_fg);
    #ifndef __MMI_TOUCH_SCREEN__
    bg_img = (PU8)GetImage(mmi_bt_music_skin[0].bg_img_id);
    gdi_image_get_dimension(bg_img, &w_bg, &h_bg);
    gdi_layer_push_and_set_clip(x, y, x + w_bg - 1, y + h_bg - 1);
    /* render button general background */
    gdi_image_draw(x, y,bg_img);
    #else /*__MMI_TOUCH_SCREEN__*/
    w_bg = w_fg;
    h_bg = h_fg;
    gdi_layer_push_and_set_clip(x, y,x + w_fg, y + h_fg);
    #ifdef __MMI_MAINLCD_320X480__
    gui_draw_filled_area(0,0,UI_device_width-1,UI_device_height-1,current_MMI_theme->sub_menu_bkg_filler); 
    #else
    gui_draw_filled_area(0, 0,x + w_fg, y + h_fg,current_MMI_theme->sub_menu_bkg_filler); 
    #endif
    #endif /*__MMI_TOUCH_SCREEN__*/

    gdi_image_draw(x + (w_bg - w_fg) / 2, y + (h_bg - h_fg) / 2, img_p);

    switch (state)
    {
        case BT_MUSIC_MAIN_DOWN:
        {
            #ifndef __MMI_TOUCH_SCREEN__
            gdi_image_draw_resized(x, y, x + w_bg - 1, y + h_bg - 1,(PU8)GetImage(IMG_ID_BT_MUSIC_MAIN_SKIN1_HIGHLIGHT_BUTTON));
            #else
            gdi_image_draw(x, y,(PU8)GetImage(IMG_ID_BT_MUSIC_MAIN_SKIN1_HIGHLIGHT_BUTTON));
            #endif
            break;
        }
        default:
            break;
    }
    gdi_layer_pop_clip();

    #endif
    return;
}

void mmi_bt_music_init_main(void)
{
    S32 i, w, h;
    bt_music_text_border_color = gui_color(
                                mmi_bt_music_skin->text_border_color_r,
                                mmi_bt_music_skin->text_border_color_g,
                                mmi_bt_music_skin->text_border_color_b);
    bt_music_text_fg_color = gui_color(
                                mmi_bt_music_skin->text_fg_color_r,
                                mmi_bt_music_skin->text_fg_color_g,
                                mmi_bt_music_skin->text_fg_color_b);
    #ifdef __GDI_MEMORY_PROFILE_2__
    bt_music_text_bg_color = GDI_COLOR_TRANSPARENT ;   /* transparent */
    #else 
    bt_music_text_bg_color = gdi_act_color_from_rgb(255,
                                mmi_bt_music_skin->text_bg_color_r,
                                mmi_bt_music_skin->text_bg_color_g,
                                mmi_bt_music_skin->text_bg_color_b);
    #endif //__GDI_MEMORY_PROFILE_2__
    
    //title
    bt_music_title.x = mmi_bt_music_skin->title_x;
    bt_music_title.y = mmi_bt_music_skin->title_y;
    bt_music_title.w = mmi_bt_music_skin->title_w;
    bt_music_title.h = mmi_bt_music_skin->title_h;

    //time 
    bt_music_time.x1         = mmi_bt_music_skin->time_left_x;
    bt_music_time.y1         = mmi_bt_music_skin->time_left_y;
    bt_music_time.x2         = mmi_bt_music_skin->time_right_x;
    bt_music_time.y2         = mmi_bt_music_skin->time_right_y;
    for (i = 0; i < 10; i++)
    {
        bt_music_time.num_id[i] = mmi_bt_music_skin->ticks_image_id[i];
    }
    bt_music_time.col_id     = mmi_bt_music_skin->ticks_image_id[i];

    //volume
    bt_music_volumebar.x     = mmi_bt_music_skin->volumebar_x;
    bt_music_volumebar.y     = mmi_bt_music_skin->volumebar_y;
    bt_music_volumebar.ind_len               = mmi_bt_music_skin->volumebar_ind_len;
    bt_music_volumebar.bar_direction         = mmi_bt_music_skin->volumebar_direction;
    bt_music_volumebar.ind_img               = (PU8) GetImage(mmi_bt_music_skin->volumebar_ind_image_id);
    gdi_image_get_dimension(bt_music_volumebar.ind_img, &w, &h);
    bt_music_volumebar.w     = (S16) w;
    bt_music_volumebar.h     = (S16) h;

    //progress bar
    bt_music_progressbar.x   = mmi_bt_music_skin->progressbar_x;
    bt_music_progressbar.y   = mmi_bt_music_skin->progressbar_y;
    bt_music_progressbar.img                 = (PU8) GetImage(mmi_bt_music_skin->progressbar_image_id);
    bt_music_progressbar.img_fail            = (PU8) GetImage(mmi_bt_music_skin->progressbar_fail_image_id);
    bt_music_progressbar.w                   = (S16) mmi_bt_music_skin->progressbar_w;
    bt_music_progressbar.h                   = (S16) mmi_bt_music_skin->progressbar_h;
    
    //title bg
    bt_music_bg.bt_music_bg_title_img         = (PU8) GetImage(mmi_bt_music_skin->bg_title_image_id);
    bt_music_bg.bt_music_bg_title.x           = mmi_bt_music_skin->title_x;
    bt_music_bg.bt_music_bg_title.y           = mmi_bt_music_skin->title_y;
    bt_music_bg.bt_music_bg_title.w           = mmi_bt_music_skin->title_w;
    bt_music_bg.bt_music_bg_title.h           = mmi_bt_music_skin->title_h;

    // volume bg
    bt_music_bg.bt_music_bg_volume_img        = (PU8) GetImage(mmi_bt_music_skin->bg_volume_image_id);
    bt_music_bg.bt_music_bg_volume.x          = mmi_bt_music_skin->volumebar_x;
    bt_music_bg.bt_music_bg_volume.y          = mmi_bt_music_skin->volumebar_y;
    gdi_image_get_dimension(bt_music_bg.bt_music_bg_volume_img, &w, &h);
    bt_music_bg.bt_music_bg_volume.w          = w;
    bt_music_bg.bt_music_bg_volume.h          = h;

    //progress bg
    bt_music_bg.bt_music_bg_progress_img      = (PU8) GetImage(mmi_bt_music_skin->bg_progress_image_id);
    bt_music_bg.bt_music_bg_progress.x        = mmi_bt_music_skin->progressbar_x;
    bt_music_bg.bt_music_bg_progress.y        = mmi_bt_music_skin->progressbar_y;
    bt_music_bg.bt_music_bg_progress.w        = mmi_bt_music_skin->progressbar_w;
    bt_music_bg.bt_music_bg_progress.h        = mmi_bt_music_skin->progressbar_h;

    //Buttons    
    #if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    bt_music_main_btns[BT_MUSIC_MAIN_PLAY].x = mmi_bt_music_skin[0].play_button_x;
    bt_music_main_btns[BT_MUSIC_MAIN_PLAY].y = mmi_bt_music_skin[0].play_button_y;
    bt_music_main_btns[BT_MUSIC_MAIN_PLAY].off_img =(PU8)GetImage(mmi_bt_music_skin[0].play_button_image_id);
    #endif
    
    bt_music_main_btns[BT_MUSIC_MAIN_PREV].x = mmi_bt_music_skin[0].prev_button_x;
    bt_music_main_btns[BT_MUSIC_MAIN_PREV].y = mmi_bt_music_skin[0].prev_button_y;
    bt_music_main_btns[BT_MUSIC_MAIN_PREV].off_img = (PU8)GetImage(mmi_bt_music_skin[0].prev_button_image_id);

    bt_music_main_btns[BT_MUSIC_MAIN_NEXT].x = mmi_bt_music_skin[0].next_button_x;
    bt_music_main_btns[BT_MUSIC_MAIN_NEXT].y = mmi_bt_music_skin[0].next_button_y;
    bt_music_main_btns[BT_MUSIC_MAIN_NEXT].off_img = (PU8)GetImage(mmi_bt_music_skin[0].next_button_image_id);

    #if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].x = mmi_bt_music_skin[0].play_button_x;
    bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].y = mmi_bt_music_skin[0].play_button_y;
    bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].off_img = (PU8)GetImage(mmi_bt_music_skin[0].pause_button_image_id);
    #endif
    
    #ifdef __MMI_AUDIO_PLAYER_FTE_20_SUPPORT__

    /* bg image */
    bt_music_bg.bt_music_main_bg_img             = (PU8) GetImage(mmi_bt_music_skin->bg_image_id);
    bt_music_bg.bt_music_main_bg_panel_x         = mmi_bt_music_skin->bg_panel_x;
    bt_music_bg.bt_music_main_bg_panel_y         = mmi_bt_music_skin->bg_panel_y; 
    /* speaker */
    bt_music_vol_speaker.x        = mmi_bt_music_skin->speaker_x;
    bt_music_vol_speaker.y        = mmi_bt_music_skin->speaker_y;
    bt_music_vol_speaker.w        = mmi_bt_music_skin->speaker_w;
    bt_music_vol_speaker.h        = mmi_bt_music_skin->speaker_h;
    bt_music_vol_speaker.up_img    = (PU8) GetImage(mmi_bt_music_skin->speaker_up_id);
    bt_music_vol_speaker.dis_img    = (PU8) GetImage(mmi_bt_music_skin->speaker_down_id);
    bt_music_vol_speaker_mute.x        = mmi_bt_music_skin->speaker_x;
    bt_music_vol_speaker_mute.y        = mmi_bt_music_skin->speaker_y;
    bt_music_vol_speaker_mute.w        = mmi_bt_music_skin->speaker_w;
    bt_music_vol_speaker_mute.h        = mmi_bt_music_skin->speaker_h;
    bt_music_vol_speaker_mute.up_img    = (PU8) GetImage(mmi_bt_music_skin->speaker_mute_up_id);
    bt_music_vol_speaker_mute.dis_img = (PU8) GetImage(mmi_bt_music_skin->speaker_mute_down_id);

    /*LSK*/
    bt_music_main_LSK.x = mmi_bt_music_skin->lsk_pos_x;
    bt_music_main_LSK.y = mmi_bt_music_skin->lsk_pos_y;
    bt_music_main_LSK.up_img = get_image(mmi_bt_music_skin->lsk_up_img_id);
    bt_music_main_LSK.dis_img = get_image(mmi_bt_music_skin->lsk_down_img_id);
    gui_measure_image(bt_music_main_LSK.dis_img, &w, &h);
    bt_music_main_LSK.w = w;
    bt_music_main_LSK.h = h;

    /*RSK*/
    bt_music_main_RSK.x = mmi_bt_music_skin->rsk_pos_x;
    bt_music_main_RSK.y = mmi_bt_music_skin->rsk_pos_y;
    bt_music_main_RSK.up_img = get_image(mmi_bt_music_skin->rsk_up_img_id);
    bt_music_main_RSK.dis_img = get_image(mmi_bt_music_skin->rsk_down_img_id);
    gui_measure_image(bt_music_main_RSK.dis_img, &w, &h);
    bt_music_main_RSK.w = w;
    bt_music_main_RSK.h = h;
 
    /* bg and fg imge initialize */
    bt_music_bg.bt_music_main_bg_color             = gdi_act_color_from_rgb(255, mmi_bt_music_skin->bg_color_r, mmi_bt_music_skin->bg_color_g, mmi_bt_music_skin->bg_color_b);
    bt_music_bg.bt_music_main_bg_softkey_color     = GDI_COLOR_GRAY;
    bt_music_bg.bt_music_main_bg_button_img        = (PU8) GetImage(mmi_bt_music_skin->bg_button_id);
    bt_music_bg.bt_music_main_button_img_hilite    = (PU8) GetImage(mmi_bt_music_skin->fg_down_id);
    bt_music_bg.bt_music_main_button_img_disable   = (PU8) GetImage(mmi_bt_music_skin->fg_disable_id);
    
    /* play, pause, stop, prev, next buttons */
    bt_music_main_btns[BT_MUSIC_MAIN_PREV].disabled_img      = (PU8) GetImage(mmi_bt_music_skin->prev_button_dis_image_id); 
    bt_music_main_btns[BT_MUSIC_MAIN_NEXT].disabled_img      = (PU8) GetImage(mmi_bt_music_skin->next_button_dis_image_id); 
    #if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    bt_music_main_btns[BT_MUSIC_MAIN_PLAY].disabled_img      = (PU8) GetImage(mmi_bt_music_skin->play_button_dis_image_id);
    bt_music_main_btns[BT_MUSIC_MAIN_PLAY].down_img = (PU8)GetImage(mmi_bt_music_skin[0].play_button_image_id);
    bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].down_img = (PU8)GetImage(mmi_bt_music_skin[0].pause_button_image_id);
    #endif
    bt_music_main_btns[BT_MUSIC_MAIN_PREV].down_img =(PU8)GetImage(mmi_bt_music_skin[0].prev_button_image_id);
    bt_music_main_btns[BT_MUSIC_MAIN_NEXT].down_img = (PU8)GetImage(mmi_bt_music_skin[0].next_button_image_id);

    /* calculate buttons boundary */
    gdi_image_get_dimension((PU8) bt_music_main_btns[0].down_img, &w, &h);
    bt_music_main_btns[0].w    = (S16) w;
    bt_music_main_btns[0].h    = (S16) h;
    bt_music_main_btns_x1      = bt_music_main_btns[0].x;
    bt_music_main_btns_y1      = bt_music_main_btns[0].y;
    bt_music_main_btns_x2      = bt_music_main_btns[0].x + w - 1;
    bt_music_main_btns_y2      = bt_music_main_btns[0].y + h - 1;
    for (i = 1; i < NO_OF_bt_music_main_btns; i++)
    { 
        gdi_image_get_dimension(bt_music_main_btns[i].down_img, &w, &h); 
        bt_music_main_btns[i].w = (S16) w;
        bt_music_main_btns[i].h = (S16) h;
        if (bt_music_main_btns[i].x < bt_music_main_btns_x1)
        {
            bt_music_main_btns_x1 = bt_music_main_btns[i].x;
        }
        if (bt_music_main_btns[i].y < bt_music_main_btns_y1)
        {
            bt_music_main_btns_y1 = bt_music_main_btns[i].y;
        }
        if (bt_music_main_btns[i].x + w - 1 > bt_music_main_btns_x2)
        {
            bt_music_main_btns_x2 = bt_music_main_btns[i].x + w - 1;
        }
        if (bt_music_main_btns[i].y + h - 1 > bt_music_main_btns_y2)
        {
            bt_music_main_btns_y2 = bt_music_main_btns[i].y + h - 1;
        }
    }
#else
#if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].down_img = (PU8)GetImage(mmi_bt_music_skin[0].pause_button_down_image_id);
    bt_music_main_btns[BT_MUSIC_MAIN_PLAY].down_img = (PU8)GetImage(mmi_bt_music_skin[0].play_button_down_image_id);
#endif
    bt_music_main_btns[BT_MUSIC_MAIN_PREV].down_img =(PU8)GetImage(mmi_bt_music_skin[0].prev_button_down_image_id);
    bt_music_main_btns[BT_MUSIC_MAIN_NEXT].down_img = (PU8)GetImage(mmi_bt_music_skin[0].next_button_down_image_id);

#endif//__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__
}

void mmi_bt_music_redraw_background(void)
{
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_multi_layer_enable();

    /* get base layer as skin layer */
    gdi_layer_get_base_handle(&bt_music_osd_layer);
    gdi_layer_clear_background(GDI_COLOR_TRANSPARENT);
    gdi_layer_set_source_key(MMI_TRUE, GDI_COLOR_TRANSPARENT);

    gdi_layer_create(0, 0, UI_device_width, UI_device_height, &skin_layer_bt);
    gdi_layer_push_and_set_active(skin_layer_bt);
    gdi_layer_clear_background(GDI_COLOR_TRANSPARENT);
    gdi_layer_pop_and_restore_active();
    gdi_layer_push_and_set_active(skin_layer_bt);
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
    gdi_layer_push_and_set_clip(0, 0, UI_device_width - 1, UI_device_height - 1);
    gui_draw_filled_area(0, 0, GDI_LCD_WIDTH, GDI_LCD_HEIGHT, 
        current_MMI_theme->sub_menu_bkg_filler); 
    
    //softkey background
    gui_draw_filled_area(
            0, 
            UI_device_height - MMI_softkey_height,
            UI_device_width - 1,
            UI_device_height - 1,
            current_MMI_theme->softkey_bar_bkg_filler);

    /* draw progress bg */
    gdi_image_draw_resized(
        bt_music_bg.bt_music_bg_progress.x + 1, 
        bt_music_bg.bt_music_bg_progress.y + 1, 
        bt_music_bg.bt_music_bg_progress.w - 2, 
        bt_music_bg.bt_music_bg_progress.h - 2, 
        bt_music_bg.bt_music_bg_progress_img);

    /* draw volume bg */
    gdi_image_draw_resized(
        bt_music_bg.bt_music_bg_volume.x, 
        bt_music_bg.bt_music_bg_volume.y, 
        bt_music_bg.bt_music_bg_volume.w, 
        bt_music_bg.bt_music_bg_volume.h, 
        bt_music_bg.bt_music_bg_volume_img);

    gdi_layer_pop_clip();
    gdi_pop_and_restore_alpha_blending_source_layer();
    gdi_layer_pop_and_restore_active();
    gdi_layer_set_blt_layer(skin_layer_bt, bt_music_osd_layer, 0, 0); 
#endif /* __GDI_MEMORY_PROFILE_2__ */ 

}

static void mmi_bt_music_redraw_main_volume_speaker()
{
#if defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)
    S32 x1 = bt_music_vol_speaker.x;
    S32 y1 = bt_music_vol_speaker.y;
    S32 x2 = bt_music_vol_speaker.x + bt_music_vol_speaker.w - 1;
    S32 y2 = bt_music_vol_speaker.y + bt_music_vol_speaker.h - 1;
    
#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif 

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif 

    /* speaker icon */
    gdi_layer_push_and_set_clip(x1, y1, x2, y2);
    if (g_gain == 0)
    {
        gdi_image_draw(x1, y1, bt_music_vol_speaker_mute.up_img);
    }
    else
    {
        gdi_image_draw(x1, y1, bt_music_vol_speaker.up_img);
    }

    gdi_layer_pop_clip();

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif     

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(x1, y1, x2, y2);
#endif /* (UI_DOUBLE_BUFFER_SUPPORT) */ 
#endif // __MMI_AUDIO_PLAYER_FTE_20_SUPPORT__
}
#if defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)&& !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)

static void mmi_bt_music_redraw_LSK_down(void)
{
    S32 x1, y1, x2, y2;

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif 
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif 

    x1 = bt_music_main_LSK.x;
    y1 = bt_music_main_LSK.y;
    x2=  bt_music_main_LSK.x + bt_music_main_LSK.w;
    y2 = bt_music_main_LSK.y + bt_music_main_LSK.h;

    gui_push_clip();
    gui_set_clip(x1, y1, x2, y2);
    gui_show_image(x1, y1, bt_music_main_LSK.dis_img);
    gui_pop_clip();
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif 
#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(x1, y1, x2, y2);
#endif /* (UI_DOUBLE_BUFFER_SUPPORT) */
#ifdef __MMI_TOUCH_SCREEN__
    LSK_area.num = 4;
    LSK_area.points = (mmi_pen_point_struct*) LSK_points;
    LSK_points[0].x = LSK_points[3].x = x1;
    LSK_points[0].y = LSK_points[1].y = y1;
    LSK_points[1].x = LSK_points[2].x = x2 + 1;
    LSK_points[2].y = LSK_points[3].y = y2 + 1;
#endif
}
static void mmi_bt_music_redraw_LSK_up(void)
{
     S32 x1, y1, x2, y2;
    PU8 draw_img = bt_music_main_LSK.up_img;

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif 
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif 

    x1 = bt_music_main_LSK.x;
    y1 = bt_music_main_LSK.y;
    x2=  x1 + bt_music_main_LSK.w;
    y2 = y1 + bt_music_main_LSK.h;

    gui_push_clip();
    gui_set_clip(x1, y1, x2, y2);
    gui_show_image(x1, y1, draw_img);
    gui_pop_clip();
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif 
 
#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(x1, y1, x2, y2);
#endif /* (UI_DOUBLE_BUFFER_SUPPORT) */
#ifdef __MMI_TOUCH_SCREEN__
    LSK_area.num = 4;
    LSK_area.points = (mmi_pen_point_struct*) LSK_points;
    LSK_points[0].x = LSK_points[3].x = x1;
    LSK_points[0].y = LSK_points[1].y = y1;
    LSK_points[1].x = LSK_points[2].x = x2 + 1;
    LSK_points[2].y = LSK_points[3].y = y2 + 1;
#endif
}
static void mmi_bt_music_redraw_RSK_down(void)
{
    S32 x1, y1, x2, y2;

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif 
#ifdef __GDI_MEMORY_PROFILE_2__
   gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif 

    x1 = bt_music_main_RSK.x;
    y1 = bt_music_main_RSK.y;
    x2=  bt_music_main_RSK.x + bt_music_main_RSK.w;
    y2 = bt_music_main_RSK.y + bt_music_main_RSK.h;

    gui_push_clip();
    gui_set_clip(x1, y1, x2, y2);
    gui_show_image(x1, y1, bt_music_main_RSK.dis_img);
    gui_pop_clip();
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif 
#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(x1, y1, x2, y2);
#endif /* (UI_DOUBLE_BUFFER_SUPPORT) */ 
#ifdef __MMI_TOUCH_SCREEN__
    RSK_area.num = 4;
    RSK_area.points = (mmi_pen_point_struct*) RSK_points;
    RSK_points[0].x = RSK_points[3].x = x1;
    RSK_points[0].y = RSK_points[1].y = y1;
    RSK_points[1].x = RSK_points[2].x = x2 + 1;
    RSK_points[2].y = RSK_points[3].y = y2 + 1;
#endif
}

static void mmi_bt_music_redraw_RSK_up(void)
{
    S32 x1, y1, x2, y2;
    PU8 draw_img = bt_music_main_RSK.up_img;

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif 
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif 

    x1 = bt_music_main_RSK.x;
    y1 = bt_music_main_RSK.y;
    x2=  x1 + bt_music_main_RSK.w;
    y2 = y1 + bt_music_main_RSK.h;

    gui_push_clip();
    gui_set_clip(x1, y1, x2, y2);
    gui_show_image(x1, y1, draw_img);
    gui_pop_clip();

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif 

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(x1, y1, x2, y2);
#endif /* (UI_DOUBLE_BUFFER_SUPPORT) */ 
#ifdef __MMI_TOUCH_SCREEN__
    RSK_area.num = 4;
    RSK_area.points = (mmi_pen_point_struct*) RSK_points;
    RSK_points[0].x = RSK_points[3].x = x1;
    RSK_points[0].y = RSK_points[1].y = y1;
    RSK_points[1].x = RSK_points[2].x = x2 + 1;
    RSK_points[2].y = RSK_points[3].y = y2 + 1;
#endif

}

#else
static void  mmi_bt_music_redraw_LSK_up()
{
    mmi_bt_music_draw_softkey(MMI_FALSE,MMI_TRUE);
}
static void  mmi_bt_music_redraw_LSK_down()
{
    mmi_bt_music_draw_softkey(MMI_TRUE,MMI_TRUE);
}
static void mmi_bt_music_redraw_RSK_up()
{
    mmi_bt_music_draw_softkey(MMI_FALSE, MMI_FALSE);
}
static void mmi_bt_music_redraw_RSK_down()
{
    mmi_bt_music_draw_softkey(MMI_TRUE, MMI_FALSE);
}

#endif//__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_draw_softkey
 * DESCRIPTION
 *  redraw BT softkey
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_music_draw_softkey(MMI_BOOL is_down, MMI_BOOL isLSK)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/ 
    S32 str_w, str_h;
    S32 x1, y1, x2, y2;
    S32 offset_x, offset_y, truncated_w;
    S32 offset_down = is_down ? 1 : 0;
    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    S32 start_x = isLSK ? 0 : (UI_device_width/2 + 30);
    S32 start_y = UI_device_height - MMI_softkey_height;
    S32 softkey_width = 130;
    #endif//__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
    MMI_BOOL truncated = MMI_FALSE;
    UI_string_type string_text = isLSK ? bt_music_main_LSK_text : bt_music_main_RSK_text;
    WGUI_SOFTKEY_ENUM string_type = isLSK ? MMI_LEFT_SOFTKEY : MMI_RIGHT_SOFTKEY;
    #ifdef __MMI_TOUCH_SCREEN__
    mmi_pen_polygon_area_struct  *string_area = isLSK ? &LSK_area : &RSK_area;
    mmi_pen_point_struct         *string_points = isLSK ? LSK_points : RSK_points;
    #endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_set_font((UI_font_type)gui_font_get_type(GUI_FONT_SIZE_BUTTON));
    if(is_down)
    {
        gui_set_text_color(*current_MMI_theme->LSK_down_text_color);
        gui_set_text_border_color(*current_MMI_theme->softkey_down_text_border_color);
    }
    else
    {
        gui_set_text_color(*current_MMI_theme->LSK_up_text_color);
        gui_set_text_border_color(*current_MMI_theme->softkey_text_border_color);
    }
    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    
    if (isLSK && g_bt_music_main_selected_btn== BT_MUSIC_MAIN_DISABLED)
    {
        color c = {128, 128, 128, 90};
        if (is_down)
    {
            return;
    }
        gui_set_text_color(c);
    }
    #endif
    gui_measure_string(string_text, &str_w, &str_h);
    truncated = wgui_softkey_get_offset(
                            string_text,
                            &offset_x, 
                            &offset_y, 
                            &truncated_w,
                            string_type,
                            0
                            );

    y1 = offset_y;
    y2 = offset_y + str_h;
#ifdef __MMI_BIDI_ALG__
    if(r2lMMIFlag)
        {
        x2 = offset_x;
        x1 = x2 - str_w ;
        }
        else
#endif
        {
        x1 = offset_x;
        x2 = x1 + str_w;
}
    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    mmi_bt_music_gdi_layer_push_clip(
                        start_x,
                        start_y,
                        start_x + softkey_width,
                        start_y + MMI_softkey_height - 1);
    if (is_down)
    {
        gui_draw_filled_area(
                  start_x, 
                  start_y,
                  start_x + softkey_width,
                  start_y + MMI_softkey_height - 1,                 
                  current_MMI_theme->softkey_lsk_down_filler);
    }
    else
    {
        gui_draw_filled_area(
                  start_x, 
                  start_y,
                  start_x + softkey_width, 
                  start_y + MMI_softkey_height - 1,
                  current_MMI_theme->softkey_bar_bkg_filler);
    }
    #else
    mmi_bt_music_gdi_layer_push_clip(x1-1, y1-1, x2+2, y2+2);
    
    #ifdef __GDI_MEMORY_PROFILE_2__
    gdi_draw_solid_rect(x1-1, y1-1, x2+2, y2+2, GDI_COLOR_TRANSPARENT); 
#else
    /* draw softkey bg */
    gui_draw_filled_area(
        0, 
        UI_device_height - MMI_softkey_height,
        UI_device_width - 1,
        UI_device_height - 1,
        current_MMI_theme->softkey_bar_bkg_filler);
#endif
    #endif//__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
    if(truncated)
    {
        gui_print_truncated_borderd_text(
            offset_x+1,
            offset_y+1,
            truncated_w, 
            string_text);
    }
    else
    {
#ifdef __MMI_BIDI_ALG__
        if(r2lMMIFlag)
    {
            gui_move_text_cursor(x2 + offset_down, y1 + offset_down);
    }
    else
#endif            
    {
            gui_move_text_cursor(x1 + offset_down, y1 + offset_down);
    }

        gui_print_bordered_text(string_text);
    }
    #ifdef __MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
    mmi_bt_music_gdi_layer_pop_clip_blt(
                            start_x,
                            start_y,
                            start_x + softkey_width,
                            start_y + MMI_softkey_height - 1);
    #else
    mmi_bt_music_gdi_layer_pop_clip_blt(x1-1, y1-1, x2+2, y2+2);  
    #endif//__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
    #ifdef __MMI_TOUCH_SCREEN__
    string_area->num = 4;
    string_area->points = (mmi_pen_point_struct*) string_points;
    #ifdef __MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
    string_points[0].x = string_points[3].x = start_x;
    string_points[0].y = string_points[1].y = start_y;
    string_points[1].x = string_points[2].x = start_x + softkey_width + 1;
    string_points[2].y = string_points[3].y = start_y + MMI_softkey_height + 1;
    #else
    string_points[0].x = string_points[3].x = x1;
    string_points[0].y = string_points[1].y = y1;
    string_points[1].x = string_points[2].x = x2 + 1;
    string_points[2].y = string_points[3].y = y2 + 1;
    #endif //__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
    #endif /* __MMI_TOUCH_SCREEN__ */ 
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_redraw_main_btns_bt
 * DESCRIPTION
 *  redraw audio player main buttons
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_music_redraw_main_btns_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i;
    S16 selected_button = g_bt_music_main_selected_btn;
    S32 w,h;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_push_and_set_active(skin_layer_bt);
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif /* __GDI_MEMORY_PROFILE_2__ */

    mmi_bt_music_gdi_layer_push_clip(bt_music_main_btns_x1,
                                     bt_music_main_btns_y1,
                                     bt_music_main_btns_x2,
                                     bt_music_main_btns_y2);

    if (selected_button == BT_MUSIC_MAIN_DISABLED)
    {
        gui_measure_image(bt_music_main_btns[BT_MUSIC_MAIN_PLAY].off_img, &w, &h);
        gdi_layer_push_and_set_clip(bt_music_main_btns[BT_MUSIC_MAIN_PLAY].x, bt_music_main_btns[BT_MUSIC_MAIN_PLAY].y, 
                                    bt_music_main_btns[BT_MUSIC_MAIN_PLAY].x+w, bt_music_main_btns[BT_MUSIC_MAIN_PLAY].y+h);
        mmi_bt_music_draw_button(bt_music_main_btns[BT_MUSIC_MAIN_PLAY].x, bt_music_main_btns[BT_MUSIC_MAIN_PLAY].y, bt_music_main_btns[BT_MUSIC_MAIN_PLAY].off_img, BT_MUSIC_MAIN_DISABLE);
        gdi_layer_pop_clip();
    }
    else if (selected_button == BT_MUSIC_MAIN_PLAY && g_bt_music_main_selected_btn_down)
    {
    /* For Down key press */
        gui_measure_image(bt_music_main_btns[BT_MUSIC_MAIN_PLAY].down_img, &w, &h);
        mmi_bt_music_draw_button(bt_music_main_btns[BT_MUSIC_MAIN_PLAY].x, bt_music_main_btns[BT_MUSIC_MAIN_PLAY].y, 
                                bt_music_main_btns[BT_MUSIC_MAIN_PLAY].down_img, BT_MUSIC_MAIN_DOWN);
    }
    else if (selected_button == BT_MUSIC_MAIN_PLAY && !g_bt_music_main_selected_btn_down)
    {
    /* For Up key press */
        gui_measure_image(bt_music_main_btns[BT_MUSIC_MAIN_PLAY].off_img, &w, &h);
        mmi_bt_music_draw_button(bt_music_main_btns[BT_MUSIC_MAIN_PLAY].x, bt_music_main_btns[BT_MUSIC_MAIN_PLAY].y, 
                                bt_music_main_btns[BT_MUSIC_MAIN_PLAY].off_img, BT_MUSIC_MAIN_UP);
    }
    else if (selected_button == BT_MUSIC_MAIN_PAUSE && g_bt_music_main_selected_btn_down)
    {
        gui_measure_image(bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].off_img, &w, &h);
        mmi_bt_music_draw_button(bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].x, bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].y, 
                                bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].off_img, BT_MUSIC_MAIN_DOWN);
    }
    else if (selected_button == BT_MUSIC_MAIN_PAUSE && !g_bt_music_main_selected_btn_down)
    {
        gui_measure_image(bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].off_img, &w, &h);
        mmi_bt_music_draw_button(bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].x, bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].y, 
                                bt_music_main_btns[BT_MUSIC_MAIN_PAUSE].off_img, BT_MUSIC_MAIN_UP);
    }

    /*Redraw Prev, Next button*/
    for (i = BT_MUSIC_MAIN_PREV; i < BT_MUSIC_MAIN_PAUSE; i++)
    {
        if (selected_button == BT_MUSIC_MAIN_DISABLED)
        {
            mmi_bt_music_draw_button(bt_music_main_btns[i].x, bt_music_main_btns[i].y, bt_music_main_btns[i].off_img, BT_MUSIC_MAIN_DISABLE);
        }
        else if (selected_button == i && g_bt_music_main_selected_btn_down)
        {
            mmi_bt_music_draw_button(bt_music_main_btns[i].x, bt_music_main_btns[i].y, bt_music_main_btns[i].down_img, BT_MUSIC_MAIN_DOWN);
        }
        else
        {
            mmi_bt_music_draw_button(bt_music_main_btns[i].x, bt_music_main_btns[i].y, bt_music_main_btns[i].off_img, BT_MUSIC_MAIN_UP);
        }
    }

    mmi_bt_music_gdi_layer_pop_clip_blt(bt_music_main_btns_x1,
        bt_music_main_btns_y1,
        bt_music_main_btns_x2,
        bt_music_main_btns_y2);

    #ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
    gdi_layer_pop_and_restore_active();
    #endif /* __GDI_MEMORY_PROFILE_2__ */
    gdi_layer_blt_previous(0, 0, UI_device_width - 1, UI_device_height - 1);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_redraw_main_BT_title
 * DESCRIPTION
 *  redraw audio player main AP title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_music_redraw_main_BT_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 character_height, w;
    S32 x1 = bt_music_title.x;
    S32 y1 = bt_music_title.y;
    S32 x2 = bt_music_title.x + bt_music_title.w - 1;
    S32 y2 = bt_music_title.y + bt_music_title.h - 1;
    S32 x_offset = 0;
    S32 y_offset = 0; 
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /* stop previous scroll text */
    if (bt_music_init_title_scrolling_done)
    {
        gui_scrolling_text_stop(&bt_music_scrolling_title);
    }
    else
    {
        bt_music_init_title_scrolling_done = MMI_TRUE;
    }
#if defined(__MMI_MAINLCD_320X240__)
    gui_set_font(&MMI_small_font);    
#elif !defined(__MMI_MAINLCD_320X480__)
    gui_set_font(&MMI_medium_font);
#else
    gui_set_font(&MMI_large_font);
#endif
    gui_set_text_color(bt_music_text_fg_color);

    //if title is null set as default title
    if (!mmi_ucs2strlen((CHAR*)bt_music_info.title))
    {
        mmi_ucs2ncpy((CHAR *)bt_music_info.title, (CHAR *)GetString(STR_ID_BT_MUSIC_UNSUPPORT), SRV_FMGR_PATH_MAX_FILE_NAME_LEN + 1);
    }
    
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_push_and_set_active(bt_music_osd_layer);
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif
    gui_measure_string(bt_music_info.title, &w, &character_height);
       
    x_offset = 20;
    y_offset = (bt_music_title.h - character_height) / 2;

    gui_create_scrolling_text(
        &bt_music_scrolling_title,
        x1 + x_offset,
        y1 + y_offset,
        bt_music_title.w - (x_offset*2),
        bt_music_title.h - (y_offset*2),
        bt_music_info.title,
        mmi_bt_music_scroll_main_title_handler,
        mmi_bt_music_redraw_main_title_background,
        bt_music_text_fg_color,
        bt_music_text_border_color);
    
#if defined(__MMI_MAINLCD_320X240__)
    bt_music_scrolling_title.text_font = MMI_small_font;
#else
    bt_music_scrolling_title.text_font = MMI_medium_font;
#endif
    
    mmi_bt_music_gdi_layer_push_clip(x1, y1, x2, y2);
    gdi_draw_solid_rect(x1,y1,x2,y2,GDI_COLOR_TRANSPARENT);

    /* title */
    gui_scrolling_text_stop(&bt_music_scrolling_title);

    if (w > bt_music_title.w - (x_offset*2))
    {
        /* scrolling */
        gui_change_scrolling_text(&bt_music_scrolling_title, bt_music_info.title);
        gui_show_scrolling_text(&bt_music_scrolling_title);
    }
    else
    {
        /* background */
        mmi_bt_music_redraw_main_title_background(x1, y1, x2, y2);
#ifdef __MMI_BIDI_ALG__
    if (r2lMMIFlag)
    {
        gui_move_text_cursor(x1 + (bt_music_title.w + w) / 2, y1 + y_offset);
    }
    else
#endif
    {
        gui_move_text_cursor(x1 + (bt_music_title.w - w) / 2, y1 + y_offset);
    }
        gui_set_line_height(character_height);
        gui_print_text(bt_music_info.title);
    }

    mmi_bt_music_gdi_layer_pop_clip_blt(x1, y1, x2, y2);

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
    gdi_layer_pop_and_restore_active();
#endif /* __GDI_MEMORY_PROFILE_2__ */ 

}
static void mmi_bt_music_scroll_main_title_handler(void)
{
    gui_handle_scrolling_text(&bt_music_scrolling_title);
}

static void mmi_bt_music_redraw_main_title_background(S32 x1, S32 y1, S32 x2, S32 y2)
{
#if defined(__MMI_SLIM_IMG_RES__) || defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_draw_solid_rect(x1, y1, x2, y2, GDI_COLOR_TRANSPARENT);
#else
    gdi_draw_solid_rect(x1, y1, x2, y2, bt_music_text_bg_color);
#endif
#else
    gdi_draw_solid_rect(x1, y1, x2, y2, bt_music_text_bg_color);
#endif
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_redraw_main_all
 * DESCRIPTION
 *  redraw audio player main buttons
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_music_redraw_main_all(void)
{
    /* get base layer as skin layer */
    mmi_bt_music_redraw_background();
    mmi_bt_music_redraw_main_BT_title();
    mmi_bt_music_redraw_progressbar();
    mmi_bt_music_redraw_volumebar();
    mmi_bt_music_redraw_time();
    mmi_bt_music_redraw_main_btns_bt();
    mmi_bt_music_redraw_main_volume_speaker();
    #if !defined(__MMI_BT_MUSIC__) || defined(__MMI_BT_MUSIC__) && defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    mmi_bt_music_redraw_LSK_up();
    #endif
    mmi_bt_music_redraw_RSK_up();
}
static void mmi_bt_music_exit_nowplaying_scrn()
{
    if(is_exit_done)
    {
        return;
    }
    gui_scrolling_text_stop(&bt_music_scrolling_title);

    #ifdef __GDI_MEMORY_PROFILE_2__
    gdi_layer_flatten_to_base(skin_layer_bt, bt_music_osd_layer, 0, 0);
    gdi_layer_free(skin_layer_bt);
    gdi_layer_multi_layer_disable();

    //add for testing progress bar .
    elapsed_ms = 0;
    mmi_bt_music_progressbar_forward_stop();

    /* restore blt layer as base layer only */
    gdi_layer_set_blt_layer(bt_music_osd_layer, 0, 0, 0);
    #endif /* __GDI_MEMORY_PROFILE_2__ */ 
    is_exit_done = MMI_TRUE;
    
    g_is_launch_from_bt = MMI_FALSE;
}

void mmi_bt_music_get_image_for_time(U16* img_idx, U32 time,U32 hour_flag)
{
    U16 h, m, s;
    h = time/ 3600;  
    if (h > 99)
    {   /*Error protected*/
        h = 99;
        m = 59;
        s = 59;
    }
    else
    {
        m = (time - h * 3600) / 60;
        s = (time - h * 3600 - m * 60);
    }
    /*init play time image*/
    if(hour_flag != 0)
    {
        img_idx[0] = bt_music_time.num_id[h/10];
        img_idx[1] = bt_music_time.num_id[h%10];
        img_idx[2] = bt_music_time.col_id;
    }
    else
    {
        img_idx[0] = 0;
        img_idx[1] = 0;
        img_idx[2] = 0;
    }
    
    img_idx[3] = bt_music_time.num_id[m/10];
    img_idx[4] = bt_music_time.num_id[m%10];
    img_idx[5] = bt_music_time.col_id;
    img_idx[6] = bt_music_time.num_id[s/10];
    img_idx[7] = bt_music_time.num_id[s%10];
}
void mmi_bt_music_redraw_null_time(s32 x, s32 offset)
{
    U8 buffer[32];
    gdi_handle layer_handle;
    gdi_handle lcd_handle;
    gui_util_painter_struct bg_painter;
    #ifdef __MMI_MAINLCD_320X480__
    kal_wsprintf((kal_wchar*)buffer, "--:--");
    #else
    kal_wsprintf((kal_wchar*)buffer, "--");
    #endif
    gui_util_painter_create_empty(&bg_painter);
    gdi_layer_get_active(&layer_handle);
    gdi_lcd_get_active(&lcd_handle);
    
    wgui_text_label_create(
        0,
        x,
        bt_music_time.y1,
        bt_music_time.x2, 
        bt_music_time.y2 + offset,
        buffer,
        #ifdef __MMI_MAINLCD_320X480__
        &MMI_medium_font,
        #else
        &MMI_small_font,
        #endif
        *current_MMI_theme->title_text_color,
        MMI_FALSE,
        *current_MMI_theme->title_text_border_color,
        bg_painter,
        GUI_TEXT_LABEL_H_ALIGN_LEFT,
        GUI_TEXT_LABEL_H_ALIGN_LEFT,
        layer_handle,
        lcd_handle);
    wgui_text_label_show(0);

}
void mmi_bt_music_redraw_time(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/ 
    S32 i, x, y;
    S32 num_w, col_w;
    S32 offset_y;
    U32 time;
    U16 img_idx[16];
    S32 time_width = 0;
    U32 h;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif 
    
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif /* __GDI_MEMORY_PROFILE_2__ */ 
    
    h = ((duration + 500) / 1000)/ 3600; 

    //get current time image
    time = (U32)(elapsed_ms+ 500) / 1000;
    mmi_bt_music_get_image_for_time(&img_idx[0],time,h);

    //get duration time image
    time = (U32)((duration + 500) / 1000);
    mmi_bt_music_get_image_for_time(&img_idx[8],time,h);

    x = bt_music_time.x1;
    y = bt_music_time.y1;
    
    gdi_image_get_dimension_id(bt_music_time.num_id[0], &num_w, &offset_y);
    gdi_image_get_dimension_id(bt_music_time.col_id, &col_w, &offset_y);
    
    gdi_draw_solid_rect(
        bt_music_time.x1, 
        bt_music_time.y1, 
        bt_music_time.x2, 
        bt_music_time.y2 + offset_y,
        GDI_COLOR_TRANSPARENT);
    
    gdi_layer_push_and_set_clip(x, y, bt_music_time.x2, bt_music_time.y2 + offset_y);

    if(!g_curr_pos_valid)
    {
    #ifdef __MMI_MAINLCD_320X480__
        mmi_bt_music_redraw_null_time(bt_music_time.x1, y);
    #else
        mmi_bt_music_redraw_null_time(bt_music_time.x1, y);
        gdi_image_draw_id(bt_music_time.x1+14, y, bt_music_time.col_id);
        #ifdef __MMI_AUDIO_PLAYER_FTE_20_SUPPORT__
        mmi_bt_music_redraw_null_time(bt_music_time.x1+18, y);
        #else
        mmi_bt_music_redraw_null_time(bt_music_time.x1+16, y);
        #endif
    #endif
    }

    for (i = 0; i < 16; i++)
    {      
        if(img_idx[i] == 0)
        {
            continue;
        }

        if(i<=7 && g_curr_pos_valid)
        {
                gdi_image_draw_id(x, y, img_idx[i]);            
        }
        if(i>7)
        {
            if(g_dura_pos_valid)
            {
                gdi_image_draw_id(x, y, img_idx[i]);
            }
            else
            {
            #ifdef __MMI_MAINLCD_320X480__
                mmi_bt_music_redraw_null_time(x, y);
            #else
                mmi_bt_music_redraw_null_time(x-5, y);
                gdi_image_draw_id(x+9, y, bt_music_time.col_id);
                #ifdef __MMI_AUDIO_PLAYER_FTE_20_SUPPORT__
                mmi_bt_music_redraw_null_time(x+13, y);
                #else
                mmi_bt_music_redraw_null_time(x+11, y);
                #endif
            #endif
                break;
            }
        }

        if (bt_music_time.col_id == img_idx[i])
        {
            x += col_w + 1;
            time_width += col_w + 1;
        }
        else
        {
            x += num_w + 1;
            time_width += num_w + 1;
        }
        if(i == 7)
        {
            x = bt_music_time.x2 - time_width;
            y = bt_music_time.y2;
        }
    }

    gdi_layer_pop_clip();
    
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif /* __GDI_MEMORY_PROFILE_2__ */ 

#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(
        bt_music_time.x1, 
        bt_music_time.y1, 
        bt_music_time.x2, 
        bt_music_time.y2 + offset_y);
#endif /* (UI_DOUBLE_BUFFER_SUPPORT) */
}
static void mmi_bt_music_gdi_layer_pop_clip_blt(S32 x1,S32 y1,S32 x2,S32 y2)
{
    gdi_layer_pop_clip();
#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(x1, y1, x2, y2);
#endif
}
static void mmi_bt_music_gdi_layer_push_clip(S32 x1,S32 y1,S32 x2,S32 y2)
{
#if(UI_DOUBLE_BUFFER_SUPPORT)
    gui_lock_double_buffer();
#endif
    gdi_layer_push_and_set_clip(x1, y1, x2, y2);
}
void mmi_bt_music_redraw_volumebar(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 x1 = bt_music_volumebar.x;
    S32 y1 = bt_music_volumebar.y;
    S32 x2 = bt_music_volumebar.x + bt_music_volumebar.w - 1;
    S32 y2 = bt_music_volumebar.y + bt_music_volumebar.h - 1;
    U32 diff = 0; 
    U32 quota = 0;

    //need get quota
    S16 error;
    ReadValue(g_nvram_volume, &g_gain, DS_BYTE, &error);
    quota = (U32)g_gain;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    if(bt_music_volumebar.bar_direction == HORIZONTAL_VOL_BAR )
    {
        diff = bt_music_volumebar.ind_len + 
             quota * (bt_music_volumebar.w - 
             bt_music_volumebar.ind_len) /(MDI_AUD_VOL_EX_NUM -1);
        if (diff > (U32) bt_music_volumebar.w)
        {
            diff = (U32) bt_music_volumebar.w;
        }
    }
    else if(bt_music_volumebar.bar_direction == VERTICAL_VOL_BAR )
    {
        diff = bt_music_volumebar.ind_len + 
             quota * (bt_music_volumebar.h - 
             bt_music_volumebar.ind_len) / MDI_AUD_VOL_EX_NUM;
        if (diff > (U32) bt_music_volumebar.h)
        {
            diff = (U32) bt_music_volumebar.h;
        }
    }
    else
    {
        ASSERT(0);
    }
    mmi_bt_music_gdi_layer_push_clip(x1, y1, x2, y2);
    
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_draw_solid_rect(x1, y1, x2, y2, bt_music_text_bg_color);
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif

    /* draw volume bg */
    gdi_image_draw_resized(
        bt_music_bg.bt_music_bg_volume.x, 
        bt_music_bg.bt_music_bg_volume.y, 
        bt_music_bg.bt_music_bg_volume.w, 
        bt_music_bg.bt_music_bg_volume.h, 
        bt_music_bg.bt_music_bg_volume_img);

    if (diff)
    {
        if(bt_music_volumebar.bar_direction == HORIZONTAL_VOL_BAR)
        {
            gdi_layer_set_clip(x1, y1, x1 + diff, y2);
        }
        else
        {
            gdi_layer_set_clip(x1, y1+bt_music_volumebar.h-diff, x2, y2);
        }

        gdi_image_draw(x1, y1, bt_music_volumebar.ind_img);
    }
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif
    mmi_bt_music_gdi_layer_pop_clip_blt(x1, y1, x2, y2);
}
static void mmi_bt_music_auto_seeking(void)
{
    StopTimer(BT_MUSIC_SEEKING_TIMER);
    StartTimer(BT_MUSIC_SEEKING_TIMER, 500, mmi_bt_music_progressbar_forward);

    StopTimer(BT_MUSIC_SYNC_POS_TIMER);
    StartTimer(BT_MUSIC_SYNC_POS_TIMER, 3000, mmi_bt_music_sync_current_pos);
}

static void mmi_bt_music_sync_current_pos(void)
{
    srv_avrcp_get_play_status_req();
    StartTimer(BT_MUSIC_SYNC_POS_TIMER, 3000, mmi_bt_music_sync_current_pos);
}

static void mmi_bt_music_progressbar_forward(void)
{
    if(elapsed_ms < duration)
    {
        elapsed_ms = elapsed_ms + 500;
        mmi_bt_music_redraw_progressbar();
        mmi_bt_music_redraw_time();
    }
    StartTimer(BT_MUSIC_SEEKING_TIMER, 500, mmi_bt_music_progressbar_forward);
}

static void mmi_bt_music_progressbar_forward_stop(void)
{
    StopTimer(BT_MUSIC_SEEKING_TIMER);
    StopTimer(BT_MUSIC_SYNC_POS_TIMER);
}

void mmi_bt_music_redraw_progressbar(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 dx ; //slider lengthe of played time.
    S32 x1 = bt_music_progressbar.x;
    S32 y1 = bt_music_progressbar.y;
    S32 x2 = bt_music_progressbar.x + bt_music_progressbar.w - 1;
    S32 y2 = bt_music_progressbar.y + bt_music_progressbar.h - 1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    if(g_dura_pos_valid)
    {
    dx = (U32)(bt_music_progressbar.w * ((float)elapsed_ms/(float)duration)) ;
    }
    else
    {
        dx = (U32)bt_music_progressbar.w;
    }
    dx = (U32)(bt_music_progressbar.w * ((float)elapsed_ms/(float)duration)) ;

#if defined(__MMI_SLIM_IMG_RES__) || defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)

    mmi_bt_music_gdi_layer_push_clip(x1+1,
                    y1+1,
                    x1+bt_music_progressbar.w-2,
                    y1+bt_music_progressbar.h-2);
#else
    mmi_bt_music_gdi_layer_push_clip(x1, y1, x2, y2);
#endif
    gdi_draw_solid_rect(x1, y1, x2, y2, bt_music_text_bg_color);
#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_push_and_set_alpha_blending_source_layer(skin_layer_bt);
#endif
    
    gdi_layer_set_clip(x1, y1, x1 + dx, y2);
    if (elapsed_ms != 0)
    {
#if defined(__MMI_SLIM_IMG_RES__) || defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)

        gdi_image_draw_resized(x1+1,
                y1+1, bt_music_progressbar.w-2,
                bt_music_progressbar.h-2,
                bt_music_progressbar.img);
    #else
        gdi_image_draw(x1, y1, bt_music_progressbar.img);
    #endif
    }

#ifdef __GDI_MEMORY_PROFILE_2__
    gdi_pop_and_restore_alpha_blending_source_layer();
#endif
    mmi_bt_music_gdi_layer_pop_clip_blt(x1, y1, x2, y2);
}
static void mmi_bt_entry_option()
{
#if !defined (__MMI_BT_MUSIC__)

    if(mmi_frm_group_is_present(GRP_ID_AUDPLY_OPTION_TO_LOCAL))
    {
        mmi_frm_group_close(GRP_ID_AUDPLY_OPTION_TO_LOCAL);
    }

    mmi_frm_group_create_ex(
        GRP_ID_BT_MUSIC_APP, 
        GRP_ID_AUDPLY_OPTION_TO_LOCAL, 
        mmi_bt_music_select_proc, 
        NULL, 
        MMI_FRM_NODE_SMART_CLOSE_FLAG);

    cui_menu_create_and_run(
        GRP_ID_AUDPLY_OPTION_TO_LOCAL, 
        CUI_MENU_SRC_TYPE_RESOURCE, 
        CUI_MENU_TYPE_APPSUB, 
        MENU_ID_AUDPLY_BT_OPTION_CUI, 
        MMI_FALSE, 
        NULL);
#endif//#if !defined (__MMI_BT_MUSIC__)
}
static mmi_ret mmi_bt_music_select_proc(mmi_event_struct *evt)
{
#if !defined (__MMI_BT_MUSIC__)

    cui_menu_event_struct* menu_evt = (cui_menu_event_struct*)evt;
    switch (evt->evt_id)
    {
        case EVT_ID_CUI_MENU_LIST_ENTRY:
        {
            cui_menu_enable_tap_to_highlight(menu_evt->sender_id);
            cui_menu_set_currlist_left_softkey(menu_evt->sender_id, (UI_string_type)GetString(STR_GLOBAL_OK));
            cui_menu_set_currlist_right_softkey(menu_evt->sender_id, (UI_string_type)GetString(STR_GLOBAL_BACK));
            break;
        }
        case EVT_ID_CUI_MENU_ITEM_CSK_SELECT:
        case EVT_ID_CUI_MENU_ITEM_TAP:
        case EVT_ID_CUI_MENU_ITEM_SELECT:
        {
            switch(menu_evt->highlighted_menu_id)
            {
                case MENU_ID_AUDPLY_OPTION_LOCAL_MUSIC :
                {
                    mmi_bt_music_entry_local_music();
                    break;
                }
                default:
                    break;
            }            
            break;
        }
        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
        {
            cui_menu_close(menu_evt->sender_id);
            break;
        }
        case EVT_ID_CUI_MENU_LIST_DEINIT:
        {
           g_is_launch_from_bt = MMI_FALSE; 
        }
        default:
            break;
    }
    return MMI_RET_OK;
#endif//#if !defined (__MMI_BT_MUSIC__)
}

static U8 mmi_bt_music_transfer_key(U8 key_code)
{
    U8 trans_key = key_code;

    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    trans_key = KEY_INVALID;
    switch (key_code)
    {
        case KEY_UP_ARROW:
        {
            trans_key = KEY_LEFT_ARROW;
            break;
        }
        case KEY_DOWN_ARROW:
        {
            trans_key = KEY_RIGHT_ARROW;
            break;
        }
        case KEY_RSK:
        case KEY_LSK:
        case KEY_VOL_UP:
        case KEY_VOL_DOWN:
        {
            trans_key = key_code;
            break;
        }
        default:
            break;
    }
    #endif

    return trans_key;
}
static void mmi_bt_music_entry_local_music()
{
    /*check memory card first (only in audioplayerBT mode)*/
    if (FS_GetDevStatus(SRV_FMGR_PUBLIC_DRV, FS_MOUNT_STATE_ENUM) < FS_NO_ERROR)
    {
        mmi_popup_display_ext(
                STR_GLOBAL_INSERT_MEMORY_CARD, 
                (mmi_event_notify_enum)srv_fmgr_fs_error_get_popup_type(FS_MEDIA_CHANGED), 
                NULL);
       return;
    }
    g_is_launch_from_bt = MMI_TRUE;
    mmi_audply_entry_main();
}
static void mmi_bt_music_press_up_key_longpress()
{
    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    /* change selected button & update state */
    g_mmi_bt_music_longpressed = MMI_TRUE;
    g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PREV;
    g_bt_music_main_selected_btn_down = MMI_FALSE;
    #endif
    
    mmi_bt_music_inc_vol();
    mmi_bt_music_redraw_volumebar();
    mmi_bt_music_redraw_main_volume_speaker();
}
static void mmi_bt_music_press_down_key_longpress()
{
    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    /* change selected button & update state */
    g_mmi_bt_music_longpressed = MMI_TRUE;
    g_bt_music_main_selected_btn = BT_MUSIC_MAIN_NEXT;
    g_bt_music_main_selected_btn_down = MMI_FALSE;
    #endif
    
    mmi_bt_music_dec_vol();
    mmi_bt_music_redraw_volumebar();
    mmi_bt_music_redraw_main_volume_speaker();
}
#if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
static void mmi_bt_music_press_prev_button_up()
{
    g_bt_music_main_selected_btn_down = MMI_FALSE;
    srv_avrcp_sink_send_cmd_frame(MMI_AVRCP_POP_BACKWARD);
    mmi_bt_music_redraw_main_btns_bt();
}
static void mmi_bt_music_press_next_button_up()
{
    g_bt_music_main_selected_btn_down = MMI_FALSE;
    srv_avrcp_sink_send_cmd_frame(MMI_AVRCP_POP_FORWARD);
    mmi_bt_music_redraw_main_btns_bt();
}
static void mmi_bt_music_up_key_pre_up()
{
    if(g_mmi_bt_music_longpressed)
    {
        g_mmi_bt_music_longpressed = MMI_FALSE;
        return;
    }

    if (!g_bt_music_main_selected_btn_down)
    {
       return;
    }
    mmi_bt_music_redraw_main_btns_bt();

    StartTimer(BT_MUSIC_DISPLAY_BUTTON_TIMER, 200, mmi_bt_music_press_prev_button_up);
}
static void mmi_bt_music_down_key_pre_up()
{
    if(g_mmi_bt_music_longpressed)
    {
        g_mmi_bt_music_longpressed = MMI_FALSE;
        return;
    }

    if (!g_bt_music_main_selected_btn_down)
    {
       return;
    }
    mmi_bt_music_redraw_main_btns_bt();

    StartTimer(BT_MUSIC_DISPLAY_BUTTON_TIMER, 200, mmi_bt_music_press_next_button_up);
}
static void mmi_bt_music_up_key_pre_down()
{
   /* change selected button & update state */
   g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PREV;
   g_bt_music_main_selected_btn_down = MMI_TRUE;
}
static void mmi_bt_music_down_key_pre_down()
{
    /* change selected button & update state */
    g_bt_music_main_selected_btn = BT_MUSIC_MAIN_NEXT;
    g_bt_music_main_selected_btn_down= MMI_TRUE;
}

#endif
static void mmi_bt_on_key_hdlr_down(U8 key_code)
{
    U8 key = mmi_bt_music_transfer_key(key_code);
    switch(key)
    {
        case KEY_CSK:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_CSK_KEY_DOWN, is_streaming);
            g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PLAY;
            g_bt_music_main_selected_btn_down = MMI_TRUE;
            mmi_bt_music_redraw_main_btns_bt();
            break;
        }
        #ifndef __MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
        case KEY_LEFT_ARROW:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_PREV_KEY_DOWN);
            g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PREV;
            g_bt_music_main_selected_btn_down = MMI_TRUE;
            mmi_bt_music_redraw_main_btns_bt();
            break;
        }
        case KEY_RIGHT_ARROW:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_NEXT_KEY_DOWN);
            g_bt_music_main_selected_btn = BT_MUSIC_MAIN_NEXT;
            g_bt_music_main_selected_btn_down = MMI_TRUE;
            mmi_bt_music_redraw_main_btns_bt();
            break;
        }
        #endif
        case KEY_RSK:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_RSK_KEY_DOWN);
            mmi_bt_music_redraw_RSK_down();
            break;
        }
        case KEY_LSK:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_LSK_KEY_DOWN);
            #if !defined(__MMI_BT_MUSIC__) || defined(__MMI_BT_MUSIC__) && defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            mmi_bt_music_redraw_LSK_down();
            #endif
            break;
        }
        default:
            break;
    }
}
static void mmi_bt_on_key_hdlr_up(U8 key_code)
{
    U8 key = mmi_bt_music_transfer_key(key_code);
  
    switch(key)
    {
        case KEY_CSK:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_CSK_KEY_UP, is_streaming);   
            if(is_streaming)
            {    
                is_streaming = MMI_FALSE;
                srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PAUSE);
            }
            else
            {    
                is_streaming = MMI_TRUE;
//03479145
                if(srv_a2dp_is_connected_by_req())
                {
                    srv_a2dp_sink_start_stream();
                }
                srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PLAY);
                mmi_btspeaker_set_volume_handler();
            }
            /*change state immdiately after send command*/
            g_bt_music_main_selected_btn = is_streaming ? BT_MUSIC_MAIN_PAUSE : BT_MUSIC_MAIN_PLAY;
            g_bt_music_main_selected_btn_down = MMI_FALSE;
            mmi_bt_music_redraw_main_btns_bt();  
            break;
        }
        #ifndef __MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__
        case KEY_LEFT_ARROW:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_PREV_KEY_UP); 
            g_bt_music_main_selected_btn_down = MMI_FALSE;
            srv_avrcp_sink_send_cmd_frame(MMI_AVRCP_POP_BACKWARD);
            mmi_bt_music_redraw_main_btns_bt();
            
            break;
        }
        case KEY_RIGHT_ARROW:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_NEXT_KEY_UP); 
            g_bt_music_main_selected_btn_down = MMI_FALSE;
            srv_avrcp_sink_send_cmd_frame(MMI_AVRCP_POP_FORWARD);
            mmi_bt_music_redraw_main_btns_bt();
            break;
        }
        #endif
        case KEY_VOL_UP:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_VOL_KEY_INC); 
            mmi_bt_music_inc_vol();
            mmi_bt_music_redraw_volumebar();
            mmi_bt_music_redraw_main_volume_speaker();
            break;
        }
        case KEY_VOL_DOWN:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_VOL_KEY_DEC); 
            mmi_bt_music_dec_vol();
            mmi_bt_music_redraw_volumebar();
            mmi_bt_music_redraw_main_volume_speaker();
            break;
        }
        case KEY_RSK:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_RSK_KEY_UP); 
            mmi_bt_music_redraw_RSK_up();
            mmi_frm_group_close(GRP_ID_BT_MUSIC_APP);
            break;
        }
        case KEY_LSK:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_LSK_KEY_UP); 
            #if defined(__MMI_BT_MUSIC__)
            #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            if(is_streaming)
            {    
                is_streaming = MMI_FALSE;
                srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PAUSE);
                bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PLAY);
            }
            else
            {    
                is_streaming = MMI_TRUE;
                
                if(srv_a2dp_is_connected_by_req())
                {
                    srv_a2dp_sink_start_stream();
                }
                srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PLAY);
                mmi_btspeaker_set_volume_handler();
                bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PAUSE);
            }
            mmi_bt_music_redraw_LSK_up();
            #endif//defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            #else
            mmi_bt_music_redraw_LSK_up();
            mmi_bt_music_exit_nowplaying_scrn();
            mmi_bt_entry_option();
            #endif//defined(__MMI_BT_MUSIC__)
            break;
        }
        default:
            break;
    }
}

void mmi_bt_music_A2DP_cb(kal_int32 result)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_a2dp_callback_event_enum event = result;
    MMI_ID scrn_id = mmi_frm_scrn_get_active_id(); 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(event)
    {
        case SRV_A2DP_CALLBACK_EVENT_STREAM_SUSPEND_IND:
        case SRV_A2DP_CALLBACK_EVENT_STREAM_CLOSE_IND:
        case SRV_A2DP_CALLBACK_EVENT_STREAM_ABORT_IND:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_A2DP_CB_SUSPEND_IND, is_streaming);
            if(is_streaming)
            {
                is_streaming = MMI_FALSE;
                if(scrn_id == SCR_ID_BT_MUSIC_APP)
                {
                    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
                    bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PLAY);
                    mmi_bt_music_redraw_LSK_up();
                    #else
                    g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PLAY;
                    mmi_bt_music_redraw_main_btns_bt();
                    #endif
                }
            }
            /*BT music will not resumed if paused*/
            stream_valid = MMI_FALSE;
            break;
        }
        case SRV_A2DP_CALLBACK_EVENT_UNEXPECTED_DISCONNECT_IND:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_A2DP_CB_DISCONNECT_IND);
            if(mmi_frm_scrn_is_present(GRP_ID_BT_MUSIC_APP,SCR_ID_BT_MUSIC_APP, MMI_FRM_NODE_ALL_FLAG))
            {
                mmi_bt_music_entry_bt_connect_page();
                mmi_frm_scrn_close(GRP_ID_BT_MUSIC_APP, SCR_ID_BT_MUSIC_APP);
            }
            break;
        }
        case SRV_A2DP_CALLBACK_EVENT_STREAM_START_IND:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_BT_MUSIC_A2DP_CB_START_IND,is_streaming);
            mmi_btspeaker_set_volume_handler();
            if(!is_streaming)
            {
                is_streaming = MMI_TRUE;
                if(scrn_id == SCR_ID_BT_MUSIC_APP)
                {
                    #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
                    bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PAUSE);
                    mmi_bt_music_redraw_LSK_up();
                    #else
                    g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PAUSE;
                    mmi_bt_music_redraw_main_btns_bt();
                    #endif
                }
            }
            /*03476044*/
            StopTimer(BT_MUSIC_STREAM_TIMER);
            StartTimer(BT_MUSIC_STREAM_TIMER, 300, mmi_bt_music_stream_start_timeout);
            break;
        }
        default:
            break;
    }
}

#ifdef __MMI_BT_AVRCP_V13__
/*****************************************************************************
 * FUNCTION
 *  bt_music_avrcp_cb
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/ 
void mmi_bt_music_avrcp_cb(srv_avrcp_event_enum event_id, srv_avrcp_result_union result)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID scrn_id = mmi_frm_scrn_get_active_id(); 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (event_id)
    {
        case SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_EVENT:
        {
            break;
        }
        
        case SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_VALUE_EVENT:
        {
            break;
        }
        
        case SRV_AVRCP_EVT_ID_CURR_ATTR_VAL_EVENT:
        {
            break;
        }

        case SRV_AVRCP_EVT_ID_SET_PLAYERAPP_VAL_EVENT:
        {
            break;
        }

        case SRV_AVRCP_EVT_ID_ATTR_TXT_EVENT:
        {
            break;
        }
        
        case SRV_AVRCP_EVT_ID_ATTR_TXT_VAL_EVENT:
        {
            break;
        }
        
        case SRV_AVRCP_EVT_ID_INFORM_DISPLAYABLE_CHARSET_EVENT:
        {
            break;
        }
        
        case SRV_AVRCP_EVT_ID_INFORM_BATT_STATUS_CT_EVENT:
        {
            break;
        }
        
        case SRV_AVRCP_EVT_ID_PLAY_STATUS_EVENT:
        {
            if (scrn_id != SCR_ID_BT_MUSIC_APP)
            {
                break;
            }
            if (SRV_AVRCP_RESULT_SUCCESS != result.play_status.result)
            {
                break;
            }

            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, 
                      MMI_TRC_AUDPLY_BT_EVT_STATUS, 
                      result.play_status.song_len,
                      result.play_status.song_pos,
                      result.play_status.play_status);

            duration = result.play_status.song_len;
            elapsed_ms = result.play_status.song_pos;
            g_dura_pos_valid = (0 == duration) ? MMI_FALSE : MMI_TRUE;
            g_curr_pos_valid = (-1 == elapsed_ms) ? MMI_FALSE : MMI_TRUE;
            mmi_bt_music_redraw_time();
            mmi_bt_music_redraw_progressbar();
            if (SRV_AVRCP_PLAY_STATUS_PLAYING == result.play_status.play_status)
            {
                mmi_bt_music_auto_seeking();
            }
            break;
        }
        case SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT:
        {
            if (scrn_id != SCR_ID_BT_MUSIC_APP)
            {
                break;
            }
            if (SRV_AVRCP_RESULT_SUCCESS != result.elem_attr.result)
            {
                break;
            }
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_EVT_UPDATE_TITLE);
            mmi_bt_music_update_songinfo(result.elem_attr);
            mmi_bt_music_redraw_main_BT_title();
            break;
        }
        
        case SRV_AVRCP_EVT_ID_REG_NOTIFICATION_EVENT:
        {
            if (SRV_AVRCP_RESULT_SUCCESS != result.reg_notification_event.result)
            {
                break;
            }

            mmi_bt_music_avrcp_notify_handler(result.reg_notification_event);
            break;
        }

        case SRV_AVRCP_EVT_ID_ABORT_REQ_EVENT:
        {
            break;
        }
    
        default:
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  bt_music_avrcp_notify_handler
 * DESCRIPTION
 *  srv_avrcp_metadata_trasnfer_events
 *  Whenever AVRCP(Bt music) is connected to SP, it will internally register 
 *  following notifications:
 *  SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED
 *  SRV_AVRCP_EVENT_TRACK_CHANGED
 *  SRV_AVRCP_EVENT_TRACK_REACHED_END
 *  SRV_AVRCP_EVENT_TRACK_REACHED_START
 *  SRV_AVRCP_EVENT_BATT_STATUS_CHANGED
 *  SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED
 * PARAMETERS
 *  notification_evt:  [IN]   notify event
 * RETURNS
 *  void
 *****************************************************************************/ 
void mmi_bt_music_avrcp_notify_handler(srv_avrcp_register_notification_result notification_evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID scrn_id = mmi_frm_scrn_get_active_id(); 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_MEDIA_TRC_G2_APP,MMI_TRC_AUDPLY_BT_EVT_ID, notification_evt.event_id);
    switch (notification_evt.event_id)
    {        
        case SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED:
        {
            MMI_TRACE(MMI_MEDIA_TRC_G2_APP,
                      MMI_TRC_AUDPLY_BT_STATUS_CHANGE, 
                      notification_evt.playback_status,
                      is_streaming);
            
            if (SRV_AVRCP_PLAY_STATUS_PLAYING == notification_evt.playback_status)
            {
                if(scrn_id == SCR_ID_BT_MUSIC_APP)
                {
                    mmi_bt_music_auto_seeking();
                }
                if (!is_streaming)
                {
                    is_streaming = MMI_TRUE;
                    if (scrn_id == SCR_ID_BT_MUSIC_APP)
                    {
                        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
                        bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PAUSE);
                        mmi_bt_music_redraw_LSK_up();
                        #else
                        g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PAUSE;
                        mmi_bt_music_redraw_main_btns_bt();
                        #endif
                    }
                }
            }
            else
            {
                if(scrn_id == SCR_ID_BT_MUSIC_APP)
                {
                    mmi_bt_music_progressbar_forward_stop();
                }
                if (is_streaming)
                {
                    is_streaming = MMI_FALSE;
                    if(scrn_id == SCR_ID_BT_MUSIC_APP)
                    {
                        #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
                        bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PLAY);
                        mmi_bt_music_redraw_LSK_up();
                        #else
                        g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PLAY;
                        mmi_bt_music_redraw_main_btns_bt();
                        #endif
                    }
                }
            }
            break;
        }
        
        case SRV_AVRCP_EVENT_TRACK_CHANGED:
        {
            if(scrn_id == SCR_ID_BT_MUSIC_APP)
            {
                srv_avrcp_get_elements_attr_request();
                srv_avrcp_get_play_status_req();
            }
            break;
        }
        
        case SRV_AVRCP_EVENT_TRACK_REACHED_END:
        {
            break;
        }
        
        case SRV_AVRCP_EVENT_TRACK_REACHED_START:
        {
            break;
        }
        
        case SRV_AVRCP_EVENT_PLAYBACK_POS_CHNAGED:
        {
            break;
        }
        
        case SRV_AVRCP_EVENT_BATT_STATUS_CHANGED:
        {
            break;
        }
        
        case SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED:
        {
            break;
        }
        
        case SRV_AVRCP_EVENT_PLAYER_APP_SETTING_CHNAGED:
        {
            break;
        }
        
        default:
            break;
    }
}

void mmi_bt_music_update_songinfo(srv_avrcp_elem_attr_result elem_attr)
{
    UI_character_type info[SRV_AVRCP_ELEM_DATA_SIZE+1];
    U32 size = 0;
    U8 i = 0;

    for (i=0; i< elem_attr.count; i++)
    {          
        /* convert data format from UTF8 to UCS2, the raw data foramt is UTF8. */
        size = mmi_chset_convert(CHSET_UTF8,
                                 CHSET_UCS2,
                                 (char*)elem_attr.elements[i].element_data, 
                                 (char*)info,
                                 SRV_AVRCP_ELEM_DATA_SIZE);

        info[EOS(size)] = 0; /* make it must be in boundary */

        switch (elem_attr.elements[i].elem_id)
        {
            case SRV_AVRCP_MEDIA_TITLE:
            {
                mmi_ucs2ncpy((CHAR*)bt_music_info.title, (CHAR*)info, SRV_AVRCP_ELEM_DATA_SIZE);
                break;
            }
            
            case SRV_AVRCP_MEDIA_ARTIST:
            {
                mmi_ucs2ncpy((CHAR*)bt_music_info.artist, (CHAR*)info, SRV_AVRCP_ELEM_DATA_SIZE);
                break;
            }
            
            case SRV_AVRCP_MEDIA_ALBUM:
            {
                mmi_ucs2ncpy((CHAR*)bt_music_info.album, (CHAR*)info, SRV_AVRCP_ELEM_DATA_SIZE);
                break;
            }
            
            case SRV_AVRCP_MEDIA_TRACK_NUMBER:
            {
                mmi_ucs2ncpy((CHAR*)bt_music_info.track_num, (CHAR*)info, SRV_AVRCP_ELEM_DATA_SIZE);
                break;
            }
            
            case SRV_AVRCP_MEDIA_TOTAL_TRACK_NUMBER:
            {
                mmi_ucs2ncpy((CHAR*)bt_music_info.total_track, (CHAR*)info, SRV_AVRCP_ELEM_DATA_SIZE);
                break;
            }
            
            case SRV_AVRCP_MEDIA_GENRE:
            {
                mmi_ucs2ncpy((CHAR*)bt_music_info.gene, (CHAR*)info, SRV_AVRCP_ELEM_DATA_SIZE);
                break;
            }
            
            case SRV_AVRCP_MEDIA_PLAYING_TIME:
            {
                break;
            }

            default:
                break;
        }
    }

    return;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_pen_down_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
#if defined(__MMI_TOUCH_SCREEN__)
void mmi_bt_music_pen_down_hdlr(mmi_pen_point_struct pos)
{    
     /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S16 i = BTSP_PEN_LSK;
    mmi_pen_point_struct point;
    mmi_pen_polygon_area_struct *area = NULL;
    point.x = 0;
    point.y = 0;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    bt_music_pen_event_on_object = BTSP_PEN_NONE;

    for (i=BTSP_PEN_NONE; i <= BTSP_PEN_PREV; i++)
    {
        switch (i)
        {
            case BTSP_PEN_LSK:
            {
                area = (mmi_pen_polygon_area_struct*) & LSK_area;
                point = pos;
            break;
            }
            case BTSP_PEN_RSK:
            {
                area = (mmi_pen_polygon_area_struct*) & RSK_area;
                point = pos;
                break;
            }
            #if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            case BTSP_PEN_PLAY:
            {
                area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->play_button_area;
                point.x = pos.x - mmi_bt_music_skin->play_button_x;
                point.y = pos.y - mmi_bt_music_skin->play_button_y;
                break;
            }
            #endif
            case BTSP_PEN_PREV:
            {
                area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->prev_button_area;
                point.x = pos.x - mmi_bt_music_skin->prev_button_x;
                point.y = pos.y - mmi_bt_music_skin->prev_button_y;      
                break;
            }
            case BTSP_PEN_NEXT:
            {
                area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->next_button_area;
                point.x = pos.x - mmi_bt_music_skin->next_button_x;
                point.y = pos.y - mmi_bt_music_skin->next_button_y;
                break;
            }
            default:
                break;
        }
        if ( area!= NULL && mmi_pen_check_inside_polygon(area, point))
        {
            bt_music_pen_event_on_object = i;
            break;
        }
    }
    switch (bt_music_pen_event_on_object)
    {
        case BTSP_PEN_LSK:
        {
            #if !defined(__MMI_BT_MUSIC__) || defined(__MMI_BT_MUSIC__) && defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            mmi_bt_music_redraw_LSK_down();  
            #endif
            break;
        }   
        case BTSP_PEN_RSK:
        {
            mmi_bt_music_redraw_RSK_down();
            break;
        }
        #if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        case BTSP_PEN_PLAY:
        {
            g_bt_music_main_selected_btn_down = MMI_TRUE;
            mmi_bt_music_redraw_main_btns_bt();
            break;
        }
        #endif
        case BTSP_PEN_PREV:
        {
            g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PREV;
            g_bt_music_main_selected_btn_down = MMI_TRUE;
            mmi_bt_music_redraw_main_btns_bt();
            break;
        }
        case BTSP_PEN_NEXT:
        {
            g_bt_music_main_selected_btn = BT_MUSIC_MAIN_NEXT;
            g_bt_music_main_selected_btn_down = MMI_TRUE;
            mmi_bt_music_redraw_main_btns_bt();
            break;
        }
        default:
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_music_pen_up_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_music_pen_up_hdlr(mmi_pen_point_struct pos)
{    
    mmi_pen_point_struct point;
    mmi_pen_polygon_area_struct *area = NULL;              
    switch (bt_music_pen_event_on_object)
    {
        case BTSP_PEN_LSK:
        {
            #if defined(__MMI_BT_MUSIC__)
            #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            if (mmi_pen_check_inside_polygon(&LSK_area, pos))
            {
                if(is_streaming)
                {    
                    is_streaming = MMI_FALSE;
                    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_SEND_PAUSE_CMD, __LINE__);
                    srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PAUSE);
                    bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PLAY);
                }
                else
                {    
                    is_streaming = MMI_TRUE;
                    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_SEND_PLAY_CMD, __LINE__);
                    if(srv_a2dp_is_connected_by_req())
                    {
                        srv_a2dp_sink_start_stream();
                    }
                    srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PLAY);
                    mmi_btspeaker_set_volume_handler();
                    bt_music_main_LSK_text = (UI_string_type)GetString(STR_GLOBAL_PAUSE);
                }
                mmi_bt_music_redraw_LSK_up();
            }
            #endif
            #else
            if (mmi_pen_check_inside_polygon(&LSK_area, pos))
            {
                mmi_bt_music_redraw_LSK_up();
                gdi_layer_clear_background(GDI_COLOR_TRANSPARENT);
                mmi_bt_music_exit_nowplaying_scrn();
                mmi_bt_entry_option();
            }        
            else
            {
                mmi_bt_music_redraw_LSK_up();
                g_bt_music_main_selected_btn_down = MMI_FALSE;
            }
            #endif
            break;
        }
        case BTSP_PEN_RSK:
        {
            if (mmi_pen_check_inside_polygon(&RSK_area, pos))
            {
            mmi_bt_music_redraw_RSK_up();
            gdi_layer_clear_background(GDI_COLOR_TRANSPARENT);
            mmi_frm_group_close(GRP_ID_BT_MUSIC_APP);    
            }
            else
            {
                mmi_bt_music_redraw_RSK_up();
                g_bt_music_main_selected_btn_down = MMI_FALSE;
            }        
            break;
        }
        #if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        case BTSP_PEN_PLAY:
        {
            area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->play_button_area;
            point.x = pos.x - mmi_bt_music_skin->play_button_x;
            point.y = pos.y - mmi_bt_music_skin->play_button_y;
            
            if (mmi_pen_check_inside_polygon(area, point))
            {
                if(is_streaming)
                {    
                    is_streaming = MMI_FALSE;
                    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_SEND_PAUSE_CMD, __LINE__);
                    srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PAUSE);
                }
                else
                {    
                    is_streaming = MMI_TRUE;
                    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_SEND_PLAY_CMD, __LINE__);
//03479145
                    if(srv_a2dp_is_connected_by_req())
                    {
                        srv_a2dp_sink_start_stream();
                    }
                    srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_PLAY);
                    mmi_btspeaker_set_volume_handler();
                }
                /*change state immdiately after send command*/
                g_bt_music_main_selected_btn = is_streaming ? BT_MUSIC_MAIN_PAUSE : BT_MUSIC_MAIN_PLAY;
                g_bt_music_main_selected_btn_down = MMI_FALSE;
                mmi_bt_music_redraw_main_btns_bt();  
            }
            break;
        }
        #endif
        case BTSP_PEN_NEXT:
        {
            area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->next_button_area;
            point.x = pos.x - mmi_bt_music_skin->next_button_x;
            point.y = pos.y - mmi_bt_music_skin->next_button_y;

            g_bt_music_main_selected_btn_down = MMI_FALSE;
                mmi_bt_music_redraw_main_btns_bt();
            
            if (mmi_pen_check_inside_polygon(area, point))
            {
                MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_SEND_BACKWARD_CMD, __LINE__);
                srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_FORWARD);
            }
            break;
        }
        case BTSP_PEN_PREV:
        {
            area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->prev_button_area;
            point.x = pos.x - mmi_bt_music_skin->prev_button_x;
            point.y = pos.y - mmi_bt_music_skin->prev_button_y;

            g_bt_music_main_selected_btn_down = MMI_FALSE;
                mmi_bt_music_redraw_main_btns_bt();
            
            if (mmi_pen_check_inside_polygon(area, point))
            {
                MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_TRC_AUDPLY_BT_SEND_FORWARD_CMD, __LINE__);
                srv_avrcp_sink_send_cmd_frame(SRV_AVRCP_POP_BACKWARD);
            }
            break;
        }
        default:
            break;
}
    bt_music_pen_event_on_object = BTSP_PEN_NONE;
}

void mmi_bt_music_pen_abort_hdlr(mmi_pen_point_struct pos)
{
    switch (bt_music_pen_event_on_object)
    {
        case BTSP_PEN_LSK:
        {
            #if defined(__MMI_BT_MUSIC__)
            #if defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            mmi_bt_music_redraw_LSK_up();
            #endif
            #else
            mmi_bt_music_redraw_LSK_up();
            #endif
            break;
        }
        case BTSP_PEN_RSK:
        {
            mmi_bt_music_redraw_RSK_up();
            break;
        }
        default:
            break;
    }
    g_bt_music_main_selected_btn_down = MMI_FALSE;
    bt_music_pen_event_on_object = BTSP_PEN_NONE;
}
void mmi_bt_music_pen_move_hdlr(mmi_pen_point_struct pos)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_pen_point_struct point;
    mmi_pen_polygon_area_struct *area = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (bt_music_pen_event_on_object)
    {
        case BTSP_PEN_NEXT:
        {
            area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->next_button_area;
            point.x = pos.x - mmi_bt_music_skin->next_button_x;
            point.y = pos.y - mmi_bt_music_skin->next_button_y;
            if (mmi_pen_check_inside_polygon(area, point))
            {
                g_bt_music_main_selected_btn_down = MMI_TRUE;
                g_bt_music_main_selected_btn = BT_MUSIC_MAIN_NEXT;
                mmi_bt_music_redraw_main_btns_bt();
            }
            else
            {
                g_bt_music_main_selected_btn_down = MMI_FALSE;
                mmi_bt_music_redraw_main_btns_bt();
            }
            break;
        }
        case BTSP_PEN_PREV:
        {
            area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->prev_button_area;
            point.x = pos.x - mmi_bt_music_skin->prev_button_x;
            point.y = pos.y - mmi_bt_music_skin->prev_button_y;
            if (mmi_pen_check_inside_polygon(area, point))
            {
                g_bt_music_main_selected_btn_down = MMI_TRUE;
                g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PREV;
                mmi_bt_music_redraw_main_btns_bt();
            }
            else
            {                
                g_bt_music_main_selected_btn_down = MMI_FALSE;
                mmi_bt_music_redraw_main_btns_bt();
            }
            break;
        }
        #if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
        case BTSP_PEN_PLAY:
        {
            area = (mmi_pen_polygon_area_struct*) & mmi_bt_music_skin->play_button_area;
            point.x = pos.x - mmi_bt_music_skin->play_button_x;
            point.y = pos.y - mmi_bt_music_skin->play_button_y;
            if (mmi_pen_check_inside_polygon(area, point))
            {
                g_bt_music_main_selected_btn_down = MMI_TRUE;
                g_bt_music_main_selected_btn = BT_MUSIC_MAIN_PLAY;
                mmi_bt_music_redraw_main_btns_bt();
            }
            else
            {
                g_bt_music_main_selected_btn_down = MMI_FALSE;
                mmi_bt_music_redraw_main_btns_bt();
            }
            break;
        }
        #endif
        case BTSP_PEN_LSK:
        {
            #if !defined(__MMI_BT_MUSIC__) || defined(__MMI_BT_MUSIC__) && defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
            if (mmi_pen_check_inside_polygon(&LSK_area, pos))
            {
                mmi_bt_music_redraw_LSK_down();
            }
            else
            {
                mmi_bt_music_redraw_LSK_up();
                g_bt_music_main_selected_btn_down = MMI_FALSE;
            }
            #endif
            break;
        }
        case BTSP_PEN_RSK:
        {
            if (mmi_pen_check_inside_polygon(&RSK_area, pos))
            {
                mmi_bt_music_redraw_RSK_down();
            }
            else
            {
                mmi_bt_music_redraw_RSK_up();
                g_bt_music_main_selected_btn_down = MMI_FALSE;
            }
            break;
        }
        default:
            break;
    }
}

#endif //__MMI_TOUCH_SCREEN__
#endif //__MMI_BT_MUSIC__||__MMI_AUDIO_PLAYER_BT__
