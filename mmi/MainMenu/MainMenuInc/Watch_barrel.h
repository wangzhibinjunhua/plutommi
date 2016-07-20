#include "AppMgrSrvGprot.h"
#include "gdi_linear_transform.h"

#define SMART_WATCH_MAINMENU_ITEM_NUM 20
#define SWATCH_MAINMENU_STATUS_ICON_HEIGHT 20
//#define SWATCH_MAINMENU_BUTTON_HEIGHT 20
#define SWATCH_MAINMENU_CELL_HEIGHT 100
#define SWATCH_MAINMENU_CELL_WIDTH 80
#define SWATCH_MAINMENU_CELL_GAP 20
#define SWATCH_MAINMENU_ICON_WIDTH 80
#define SWATCH_MAINMENU_CION_HEIGHT 80
#define SWATCH_MAINMENU_PAGE_WIDTH 220
//#define SWATCH_MAINMENU_PAGE_NUM 4

#define MMI_WATCH_CUBE_TRANSITION_CAMERA_DISTANCE                (500)   //520

#define MMI_WATCH_BARREL_CYLINDER_RADIUS (148)  //162
#define MMI_WATCH_BARREL_CYLINDER_NEAR   (220)  //340

#define mmi_mainmenu_swatch_abs(a)  ((a) < 0 ? -(a) : (a))

typedef struct
{
	S32 x;
	S32 y;
}swatch_pos_struct;

typedef struct{
	mmi_app_package_name_struct app_name;
	MMI_ID image_icon;
}swatch_icon_map_struct;


typedef enum
{
    MMI_WATCH_MATRIX_TYPE_MOVE,
    MMI_WATCH_MATRIX_TYPE_SCALE,
    MMI_WATCH_MATRIX_TYPE_ROTATE
}mmi_applist_watch_type_enum;

typedef struct
{
    S32 x;
    S32 y;
}mmi_watch_position;


typedef struct
{
    mmi_watch_position pos;
    U8 opacity;
    float resize;
    /* image icon */
    mmi_image_src_type_enum image_type; 
    U8 *image_ptr;
    U32 image_len;
    union
    {
        MMI_ID res_id;  
        WCHAR path[MMI_MAX_FILE_NAME_LEN+1]; 
    } image;    

    U32 app_id;
	WCHAR string[MMI_APP_NAME_MAX_LEN+1];
}mmi_watch_cell_struct;


typedef struct
{    
    gdi_lt_matrix_struct transform;   
    float pos_z;  
    U8 opacity;
}mmi_watch_draw_info_struct;


/* Get transform matrix */
typedef void (*watch_transform_func)( 
        S32 cell_index,                         
        gdi_lt_matrix_struct *transform,  
        U8 *opacity,
        float *pos_z);


typedef struct
{
    S32 x1;
	S32 y1;
	S32 x2;
	S32 y2;
}mmi_watch_rect_struct;


typedef enum
{
    MMI_SWATCH_SWAP_DIRECTION_NONE,
	MMI_SWATCH_SWAP_DIRECTION_H,
	MMI_SWATCH_SWAP_DIRECTION_V,
}mmi_swatch_swap_direction_enum;


typedef struct
{
	S32 pen_move_offset;
	S32 prevpen_move_offset;
	S32 highlight_index;
	gdi_handle panel_layer_handle;
	gdi_handle base_layer;
	gdi_handle status_icon_layer;
	PU8 layer_buffer;
	PU8 status_bar_buf_ptr;
	S16 pen_down_pos_y;
	S16 pen_down_pos_x;
	S32 total_icon_num;
	S32 start_anim_pos;
	S32 end_anim_pos;
	S16 speed;
	MMI_BOOL pen_click;
	MMI_BOOL show_down_highlight;
	S32 index_num;
	S32 temp_offset;
	mmi_watch_cell_struct panel_cell[SMART_WATCH_MAINMENU_ITEM_NUM];
	MMI_BOOL disable_array_image;
	const swatch_icon_map_struct *icon_table;
	U8 swatch_mm_style;
	MMI_BOOL is_cached;
	S32 page_index;
	#if defined(__DELETE_APP_IN_MAINMENU__)
	U32 install_app_array[SMART_WATCH_MAINMENU_ITEM_NUM];
	S32 install_app_num;
	MMI_BOOL is_uninstall_status;
	U8 uninstall_bg_width;
	U8 uninstall_bg_height;
	U8 uninstall_bg_offset_x;
	U8 uninstall_bg_offset_y;
	#endif //__DELETE_APP_IN_MAINMENU__
	#ifdef __MMI_WEARABLE_DEVICE_UI_ENHANCE__
	MMI_ID press_icon;
	#endif /*__MMI_WEARABLE_DEVICE_UI_ENHANCE__*/

	PU8 cache_ptr;
	U8 icon_width;
	U8 icon_height;
	U8 icon_title_height;
	U8 icon_distance_v;
	U8 icon_top_distance;
	U8 icon_string_offset;
	U8 pen_swap_dis;
	U8 mainmenu_anim_timer;
	U8 pen_click_threshold;
	U8 pen_up_threshold;
	U8 mainmenu_page_num;
	U8 left_gap;
	U8 cell_width;
	U8 cell_height;
	U8 top_gap;
	U8 image_offset;
	U16 page_size;
	U8 between_gap;
		
	#if defined(__MMI_FOUR_ICON_MAINMENU__)
	S32 first_display_icon;
	U8 icon_distance_h;
	U8 first_icon_offset_x;
	#endif
	swatch_pos_struct (*get_layout)(S32);
	MMI_BOOL (*check_area)(S16, S16);
	void (*change_index)(void);
	mmi_swatch_swap_direction_enum swap_direction;
}swatch_mm_struct;
//define mainmenu use memory 
#define SMART_WATCH_MAINMENU_MEM_SIZE \
	(88 * 68 * SMART_WATCH_MAINMENU_ITEM_NUM * 4) + (sizeof(mmi_watch_draw_info_struct) * SMART_WATCH_MAINMENU_ITEM_NUM)  + 240*240*2
