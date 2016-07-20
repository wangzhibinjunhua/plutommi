#ifndef _AUDIO_PLAYER_BT_NOWPLAYING_PROT_H
#define _AUDIO_PLAYER_BT_NOWPLAYING_PROT_H

#ifdef __MMI_FTE_SUPPORT__
#include "wgui_touch_screen.h"
#endif 
#include "MMI_features.h"
#include "MMIDataType.h"
#include "A2dpSrvGprot.h"
#ifdef __MMI_AVRCP_SUPPORT__
#include "AvrcpSrvGprot.h"
#endif //__MMI_AVRCP_SUPPORT__
#define EOS(nob)  ((nob)>1 ? ((nob)>>1)-1: 0)

/*MAUI_20131111 USED FOR OTHER MULTIMEDIA APP*/
typedef  void (*BT_MUSIC_CALLBACK)(MMI_BOOL result);

/***************************************************************************** 
* Structures
*****************************************************************************/
typedef enum
{
    BTSP_PEN_NONE,
    BTSP_PEN_LSK,
    BTSP_PEN_RSK,
    BTSP_PEN_PLAY,
    BTSP_PEN_NEXT,
    BTSP_PEN_PREV
} BTSPEAKER_PEN_STATE;

typedef enum
{
    PEN_EVENT_DOWN,
    PEN_EVENT_UP
}btsp_pen_events;

typedef struct
{
    S16 x, y;
    S16 w, h;
    PU8 off_img;
    PU8 disabled_img;
    PU8 down_img;
} bt_music_main_btn_struct;

typedef struct
{
    S16 x, y;
    S16 w, h;
} bt_music_title_struct;

typedef enum
{
    BT_MUSIC_MAIN_DISABLED = -1,
    BT_MUSIC_MAIN_PLAY = 0,
    BT_MUSIC_MAIN_PREV,
    BT_MUSIC_MAIN_NEXT,
    BT_MUSIC_MAIN_PAUSE,
    NO_OF_bt_music_main_btns
} bt_music_main_btns_enum;


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


#ifdef __MMI_BT_AVRCP_V13__
typedef struct
{
    UI_character_type title[SRV_AVRCP_ELEM_DATA_SIZE+1];
    UI_character_type artist[SRV_AVRCP_ELEM_DATA_SIZE+1];
    UI_character_type album[SRV_AVRCP_ELEM_DATA_SIZE+1];
    UI_character_type gene[SRV_AVRCP_ELEM_DATA_SIZE+1];
    UI_character_type track_num[SRV_AVRCP_ELEM_DATA_SIZE+1];
    UI_character_type total_track[SRV_AVRCP_ELEM_DATA_SIZE+1];

    U16  charset;  //default is UTF8
    U32  song_len;
    U32  song_pos; //time elapsed in milliseconds
}bt_music_info_struct;

static bt_music_info_struct bt_music_info;
#endif

typedef struct
{
    S16 x1, y1;
    S16 x2, y2;
    U16 num_id[10];
    U16 col_id;
} bt_music_time_struct;

typedef struct
{
    S16 x, y;
    S16 w, h;   
    PU8 img_bg;  
    PU8 img;
    PU8 img_fail ;
}bt_music_progressbar_struct;

typedef struct
{
    S16 x, y;
    S16 w, h;
}bt_music_rect_struct;

typedef struct
{
    PU8 bt_music_main_bg_img;
    S16 bt_music_main_bg_panel_x;
    S16 bt_music_main_bg_panel_y;
    PU8 bt_music_main_bg_panel_img;
    gdi_color bt_music_main_bg_color;
    
    PU8 bt_music_bg_title_img;
    bt_music_rect_struct bt_music_bg_title;
    PU8 bt_music_bg_progress_img;
    bt_music_rect_struct bt_music_bg_progress;
    PU8 bt_music_bg_volume_img;
    bt_music_rect_struct bt_music_bg_volume;

    gdi_color bt_music_main_bg_softkey_color;
    PU8 bt_music_main_bg_button_img;
    PU8 bt_music_main_button_img_hilite;
    PU8 bt_music_main_button_img_disable;
} bt_music_bg_struct;

typedef struct
{
    S16 x, y;
    S16 w, h;
    S16 ind_len;
    PU8 ind_img;
    U8  bar_direction; /* 0:horizonal, 1: vertical */
} bt_music_volumebar_struct;

typedef enum
{
    HORIZONTAL_VOL_BAR,
    VERTICAL_VOL_BAR
} bt_music_vol_bar_enum;


typedef struct
{
    S16 x;
    S16 y;
} bt_music_point_struct;

typedef struct
{
    const bt_music_point_struct *points;
    S16 num;
} bt_music_polygon_area_struc;

typedef struct
{
    S16 x, y;
    S16 w, h;
    PU8 up_img, dis_img;
} bt_music_main_push_button_struct;

typedef struct
{
    const bt_music_point_struct *points;
    S16 num;
} bt_music_polygon_area_struct;
#if defined(__MMI_AUDIO_PLAYER_FTE_20_SUPPORT__)
typedef struct
{
    U16 bg_image_id;
    S16 bg_panel_x, bg_panel_y;
    U16 bg_panel_id;
    
    U16 option_up_id, option_down_id, back_up_id, back_down_id;
    U8 bg_color_r, bg_color_g, bg_color_b;
    
    S16 lsk_pos_x, lsk_pos_y;
    U16 lsk_up_img_id, lsk_down_img_id;
    S16 rsk_pos_x, rsk_pos_y;
    U16 rsk_up_img_id, rsk_down_img_id;
    
    U16 fg_down_id;
    U16 fg_disable_id;
    
    U8 text_border_color_r, text_border_color_g, text_border_color_b;
    U8 text_fg_color_r, text_fg_color_g, text_fg_color_b;
    U8 text_bg_color_r, text_bg_color_g, text_bg_color_b;

    S16 title_x, title_y;
    S16 title_w, title_h;
    
    U16 bg_title_image_id;
    S16 speaker_x, speaker_y, speaker_w, speaker_h;
    U16 speaker_up_id;
    U16 speaker_down_id;
    U16 speaker_mute_up_id;
    U16 speaker_mute_down_id;
    
    S16 volumebar_x, volumebar_y;
    S16 volumebar_w, volumebar_h;
    S16 volumebar_ind_len;
    U8  volumebar_direction;
    U16 bg_volume_image_id;
    U16 volumebar_ind_image_id;
    
    S16 progressbar_x, progressbar_y;
    S16 progressbar_w, progressbar_h;
    U16 bg_progress_image_id, progressbar_image_id, progressbar_fail_image_id;
    
    S16 prev_button_x, prev_button_y;
    U16 bg_button_id;
    U16 prev_button_image_id, prev_button_dis_image_id;
    S16 next_button_x, next_button_y;
    U16 next_button_image_id, next_button_dis_image_id;
#if !defined(__MMI_BTMUSIC_BTBOX_KEYBOARD_STYLE__)
    S16 play_button_x, play_button_y;
    U16 play_button_image_id, play_button_dis_image_id;
    U16 pause_button_image_id;
#endif

#ifdef __MMI_TOUCH_SCREEN__
    bt_music_polygon_area_struct prev_button_area;
    bt_music_polygon_area_struct next_button_area;
    bt_music_polygon_area_struct play_button_area;
#endif /* __MMI_TOUCH_SCREEN__ */ 

    S16 time_left_x, time_left_y;
    S16 time_right_x, time_right_y;
    U16 ticks_image_id[11];
} mmi_bt_skin_struct;

#else

typedef struct
{
    
    U16 bg_img_id;
    U8 text_border_color_r, text_border_color_g, text_border_color_b;
    U8 text_fg_color_r, text_fg_color_g, text_fg_color_b;
    U8 text_bg_color_r, text_bg_color_g, text_bg_color_b;

    S16 title_x, title_y;
    S16 title_w, title_h;
    U16 bg_title_image_id;
    
    S16 time_left_x, time_left_y;
    S16 time_right_x, time_right_y;

    U16 ticks_image_id[11];
    
    S16 volumebar_x, volumebar_y;
    S16 volumebar_w, volumebar_h;
    S16 volumebar_ind_len;
    U8  volumebar_direction;
    U16 bg_volume_image_id;
    U16 volumebar_ind_image_id;
    
    S16 progressbar_x, progressbar_y;
    S16 progressbar_w, progressbar_h;
    U16 bg_progress_image_id;
    U16 progressbar_image_id;
    U16 progressbar_fail_image_id;

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
    #ifdef __MMI_TOUCH_SCREEN__
    bt_music_polygon_area_struct prev_button_area;
    bt_music_polygon_area_struct next_button_area;
    bt_music_polygon_area_struct play_button_area;
#endif /* __MMI_TOUCH_SCREEN__ */ 
} mmi_bt_skin_struct;
#endif
/***************************************************************************** 
* public function
*****************************************************************************/
void mmi_bt_music_launch_fn(MMI_ID parent_gid);
MMI_BOOL srv_avrcp_sink_vol_control_callback(U8 volume, MMI_BOOL is_mute);
MMI_RET mmi_bt_music_avrcp_sink_send_cmd_frame(mmi_event_struct *evt);
MMI_RET mmi_bt_music_conn_proc(mmi_event_struct *evt);
void mmi_bt_music_redraw_main_btns_bt(void);
void mmi_bt_music_redraw_main_all(void);
void mmi_bt_music_redraw_progressbar(void);
void mmi_bt_music_redraw_time(void);
void mmi_bt_music_redraw_volumebar();
void mmi_bt_music_init_main(void);
void mmi_bt_music_A2DP_cb(kal_int32 result);
void mmi_bt_music_pen_up_hdlr(mmi_pen_point_struct pos);
void mmi_bt_music_pen_down_hdlr(mmi_pen_point_struct pos);
void mmi_bt_music_pen_move_hdlr(mmi_pen_point_struct pos);
BOOL mmi_bt_music_is_playing(void);

#ifdef __MMI_BT_AVRCP_V13__
void mmi_bt_music_avrcp_cb(srv_avrcp_event_enum event_id, srv_avrcp_result_union result);
void mmi_bt_music_avrcp_notify_handler(srv_avrcp_register_notification_result notification_evt);
void mmi_bt_music_update_songinfo(srv_avrcp_elem_attr_result elem_attr);
#endif//#ifdef __MMI_BT_AVRCP_V13__

#endif//#ifndef _AUDIO_PLAYER_BT_NOWPLAYING_PROT_H