
#ifdef __MMI_IME_V3__

#ifndef __VIRTUAL_KEYBOARD3_DEFINE_H__
#define __VIRTUAL_KEYBOARD3_DEFINE_H__


#include "mmi_rp_srv_vk3_def.h"
#include "Lcd_sw_inc.h"

 
extern const wgui_virtual_keyboard_layout_struct        keyBoardTable[];
extern const gui_virtual_keyboard_togglekey_struct    toggleStructTable[];
extern const gui_virtual_keyboard_key_struct     toggleKeyTable[];
extern const gui_virtual_keyboard_key_struct*  toggleKeyPtrTable[];





const gui_virtual_keyboard_key_struct  	keyTable[] = 
{

	{
		/* index 0 */
	 /* file_index: hwkb_fullscreen_bottom_en_0_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 1 */
	 /* file_index: hwkb_fullscreen_bottom_en_0_2 */ 
		GUI_VKBD_PEN_V3_HANDWRITING_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOHALFSCR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOHALFSCR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		64,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 2 */
	 /* file_index: hwkb_fullscreen_bottom_en_0_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		122,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		234,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 3 */
	 /* file_index: hwkb_fullscreen_bottom_en_0_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		356,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		58,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 4 */
	 /* file_index: hwkb_fullscreen_bottom_en_0_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		414,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 5 */
	 /* file_index: hwkb_fullscreen_land_revise_en_0_1 */ 
		0,			/* code */
		19,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		11,			/* pos_y */
		81,			/* height */
		38,			/* width */
		0,			/* popup_skb */
		toggleStructTable+4			/* toggle_index */
	},	

	{
		/* index 6 */
	 /* file_index: hwkb_fullscreen_land_revise_en_0_2 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		44,			/* pos_x */
		11,			/* pos_y */
		81,			/* height */
		38,			/* width */
		0,			/* popup_skb */
		toggleStructTable+5			/* toggle_index */
	},	

	{
		/* index 7 */
	 /* file_index: hwkb_fullscreen_land_revise_en_0_3 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		82,			/* pos_x */
		11,			/* pos_y */
		81,			/* height */
		38,			/* width */
		0,			/* popup_skb */
		toggleStructTable+6			/* toggle_index */
	},	

	{
		/* index 8 */
	 /* file_index: hwkb_fullscreen_land_revise_en_0_4 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		120,			/* pos_x */
		11,			/* pos_y */
		81,			/* height */
		38,			/* width */
		0,			/* popup_skb */
		toggleStructTable+7			/* toggle_index */
	},	

	{
		/* index 9 */
	 /* file_index: hwkb_fullscreen_land_revise_en_0_5 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		158,			/* pos_x */
		11,			/* pos_y */
		81,			/* height */
		38,			/* width */
		0,			/* popup_skb */
		toggleStructTable+8			/* toggle_index */
	},	

	{
		/* index 10 */
	 /* file_index: hwkb_fullscreen_land_revise_en_0_6 */ 
		0,			/* code */
		21,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		196,			/* pos_x */
		11,			/* pos_y */
		81,			/* height */
		38,			/* width */
		0,			/* popup_skb */
		toggleStructTable+9			/* toggle_index */
	},	

	{
		/* index 11 */
	 /* file_index: hwkb_fullscreen_top1_en_0_1 */ 
		0,			/* code */
		19,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		0,			/* pos_x */
		9,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+10			/* toggle_index */
	},	

	{
		/* index 12 */
	 /* file_index: hwkb_fullscreen_top1_en_0_2 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		9,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+11			/* toggle_index */
	},	

	{
		/* index 13 */
	 /* file_index: hwkb_fullscreen_top1_en_0_3 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		116,			/* pos_x */
		9,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+12			/* toggle_index */
	},	

	{
		/* index 14 */
	 /* file_index: hwkb_fullscreen_top1_en_0_4 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		174,			/* pos_x */
		9,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+13			/* toggle_index */
	},	

	{
		/* index 15 */
	 /* file_index: hwkb_fullscreen_top1_en_0_5 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		232,			/* pos_x */
		9,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+14			/* toggle_index */
	},	

	{
		/* index 16 */
	 /* file_index: hwkb_fullscreen_top1_en_0_6 */ 
		0,			/* code */
		20,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		290,			/* pos_x */
		9,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+15			/* toggle_index */
	},	

	{
		/* index 17 */
	 /* file_index: hwkb_fullscreen_top1_en_0_7 */ 
		0,			/* code */
		21,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		348,			/* pos_x */
		9,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+16			/* toggle_index */
	},	

	{
		/* index 18 */
	 /* file_index: hwkb_fullscreen_top2_en_0_1 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		0,			/* pos_x */
		7,			/* pos_y */
		72,			/* height */
		56,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 19 */
	 /* file_index: hwkb_halfscreen_bottom_en_0_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 20 */
	 /* file_index: hwkb_halfscreen_bottom_en_0_2 */ 
		GUI_VKBD_PEN_V3_HANDWRITING_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOFULLSCR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOFULLSCR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		64,			/* pos_x */
		0,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 21 */
	 /* file_index: hwkb_halfscreen_bottom_en_0_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		122,			/* pos_x */
		0,			/* pos_y */
		67,			/* height */
		234,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 22 */
	 /* file_index: hwkb_halfscreen_bottom_en_0_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		356,			/* pos_x */
		0,			/* pos_y */
		67,			/* height */
		58,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 23 */
	 /* file_index: hwkb_halfscreen_bottom_en_0_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		414,			/* pos_x */
		0,			/* pos_y */
		67,			/* height */
		58,			/* width */
		0,			/* popup_skb */
		toggleStructTable+17			/* toggle_index */
	},	

	{
		/* index 24 */
	 /* file_index: hwkb_halfscreen_top_en_0_1 */ 
		0,			/* code */
		13,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		0,			/* pos_x */
		6,			/* pos_y */
		65,			/* height */
		56,			/* width */
		0,			/* popup_skb */
		toggleStructTable+21			/* toggle_index */
	},	

	{
		/* index 25 */
	 /* file_index: hwkb_halfscreen_top_en_1_1 */ 
		0,			/* code */
		14,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		0,			/* pos_x */
		71,			/* pos_y */
		65,			/* height */
		56,			/* width */
		0,			/* popup_skb */
		toggleStructTable+22			/* toggle_index */
	},	

	{
		/* index 26 */
	 /* file_index: hwkb_halfscreen_top_en_2_1 */ 
		0,			/* code */
		15,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		0,			/* pos_x */
		136,			/* pos_y */
		65,			/* height */
		56,			/* width */
		0,			/* popup_skb */
		toggleStructTable+23			/* toggle_index */
	},	

	{
		/* index 27 */
	 /* file_index: hwkb_halfscreen_top_en_3_1 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		11,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		0,			/* pos_x */
		1,			/* pos_y */
		65,			/* height */
		56,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 28 */
	 /* file_index: skb_phn_en_0_1 */ 
		44,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_COMMA_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_COMMA_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+24			/* toggle_index */
	},	

	{
		/* index 29 */
	 /* file_index: skb_phn_en_0_2 */ 
		49,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		L"\?!\@",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 30 */
	 /* file_index: skb_phn_en_0_3 */ 
		50,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		L"abc",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 31 */
	 /* file_index: skb_phn_en_0_4 */ 
		51,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		L"def",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 32 */
	 /* file_index: skb_phn_en_0_5 */ 
		GUI_VKBD_PEN_V3_MOVE_LEFT,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_LEFT_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_LEFT_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 33 */
	 /* file_index: skb_phn_en_1_1 */ 
		46,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENFULLSTOP_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENFULLSTOP_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 34 */
	 /* file_index: skb_phn_en_1_2 */ 
		52,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		L"ghi",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 35 */
	 /* file_index: skb_phn_en_1_3 */ 
		53,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		L"jkl",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 36 */
	 /* file_index: skb_phn_en_1_4 */ 
		54,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		L"mno",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 37 */
	 /* file_index: skb_phn_en_1_5 */ 
		GUI_VKBD_PEN_V3_MOVE_RIGHT,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_RIGHT_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_RIGHT_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 38 */
	 /* file_index: skb_phn_en_2_1 */ 
		GUI_VKBD_PEN_V3_SHIFT ,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_SHIFT_LOWER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SHIFT_LOWER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+28			/* toggle_index */
	},	

	{
		/* index 39 */
	 /* file_index: skb_phn_en_2_2 */ 
		55,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		L"pqrs",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 40 */
	 /* file_index: skb_phn_en_2_3 */ 
		56,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		L"tuv",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 41 */
	 /* file_index: skb_phn_en_2_4 */ 
		57,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		L"wxyz",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 42 */
	 /* file_index: skb_phn_en_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 43 */
	 /* file_index: skb_phn_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 44 */
	 /* file_index: skb_phn_en_3_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOQWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOQWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 45 */
	 /* file_index: skb_phn_en_3_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		0,			/* icon */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux */
		0,			/* icon_hl */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		48,			/* code_longpress */
		L"0",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		toggleStructTable+32			/* toggle_index */
	},	

	{
		/* index 46 */
	 /* file_index: skb_phn_en_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 47 */
	 /* file_index: skb_phn_en_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+36			/* toggle_index */
	},	

	{
		/* index 48 */
	 /* file_index: skb_phn_symbol_1_en_0_1 */ 
		34,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\"",			/* label */
		L"'",			/* label_aux */
		L"\"",			/* label_balloon */
		0,			/* icon_balloon */
		39,			/* code_longpress */
		L"'",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 49 */
	 /* file_index: skb_phn_symbol_1_en_0_2 */ 
		49,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		L"\#",			/* label_aux */
		L"1",			/* label_balloon */
		0,			/* icon_balloon */
		35,			/* code_longpress */
		L"\#",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 50 */
	 /* file_index: skb_phn_symbol_1_en_0_3 */ 
		50,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		L"$",			/* label_aux */
		L"2",			/* label_balloon */
		0,			/* icon_balloon */
		36,			/* code_longpress */
		L"$",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 51 */
	 /* file_index: skb_phn_symbol_1_en_0_4 */ 
		51,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		L"%",			/* label_aux */
		L"3",			/* label_balloon */
		0,			/* icon_balloon */
		37,			/* code_longpress */
		L"%",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 52 */
	 /* file_index: skb_phn_symbol_1_en_0_5 */ 
		95,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"_",			/* label */
		L"-",			/* label_aux */
		L"_",			/* label_balloon */
		0,			/* icon_balloon */
		45,			/* code_longpress */
		L"-",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 53 */
	 /* file_index: skb_phn_symbol_1_en_1_1 */ 
		63,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		L"!",			/* label_aux */
		L"\?",			/* label_balloon */
		0,			/* icon_balloon */
		33,			/* code_longpress */
		L"!",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 54 */
	 /* file_index: skb_phn_symbol_1_en_1_2 */ 
		52,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		L"\@",			/* label_aux */
		L"4",			/* label_balloon */
		0,			/* icon_balloon */
		64,			/* code_longpress */
		L"\@",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 55 */
	 /* file_index: skb_phn_symbol_1_en_1_3 */ 
		53,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		L"&",			/* label_aux */
		L"5",			/* label_balloon */
		0,			/* icon_balloon */
		38,			/* code_longpress */
		L"&",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 56 */
	 /* file_index: skb_phn_symbol_1_en_1_4 */ 
		54,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		L"*",			/* label_aux */
		L"6",			/* label_balloon */
		0,			/* icon_balloon */
		42,			/* code_longpress */
		L"*",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 57 */
	 /* file_index: skb_phn_symbol_1_en_1_5 */ 
		58,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":",			/* label */
		L";",			/* label_aux */
		L":",			/* label_balloon */
		0,			/* icon_balloon */
		59,			/* code_longpress */
		L";",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 58 */
	 /* file_index: skb_phn_symbol_1_en_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE1,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE1,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 59 */
	 /* file_index: skb_phn_symbol_1_en_2_2 */ 
		55,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		L"/",			/* label_aux */
		L"7",			/* label_balloon */
		0,			/* icon_balloon */
		47,			/* code_longpress */
		L"/",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 60 */
	 /* file_index: skb_phn_symbol_1_en_2_3 */ 
		56,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		L"(",			/* label_aux */
		L"8",			/* label_balloon */
		0,			/* icon_balloon */
		40,			/* code_longpress */
		L"(",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 61 */
	 /* file_index: skb_phn_symbol_1_en_2_4 */ 
		57,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		L")",			/* label_aux */
		L"9",			/* label_balloon */
		0,			/* icon_balloon */
		41,			/* code_longpress */
		L")",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 62 */
	 /* file_index: skb_phn_symbol_1_en_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 63 */
	 /* file_index: skb_phn_symbol_1_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 64 */
	 /* file_index: skb_phn_symbol_1_en_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 65 */
	 /* file_index: skb_phn_symbol_1_en_3_3 */ 
		48,			/* code */
		6,			/* key_type */
		0,			/* icon */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux */
		0,			/* icon_hl */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		L"0",			/* label_balloon */
		0,			/* icon_balloon */
		32,			/* code_longpress */
		0,			/* label_balloon_longpress */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon_longpress */
		187,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 66 */
	 /* file_index: skb_phn_symbol_1_en_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 67 */
	 /* file_index: skb_phn_symbol_1_en_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+40			/* toggle_index */
	},	

	{
		/* index 68 */
	 /* file_index: skb_phn_symbol_2_en_0_1 */ 
		95,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"_",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 69 */
	 /* file_index: skb_phn_symbol_2_en_0_2 */ 
		60,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 70 */
	 /* file_index: skb_phn_symbol_2_en_0_3 */ 
		62,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L">",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 71 */
	 /* file_index: skb_phn_symbol_2_en_0_4 */ 
		123,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"{",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 72 */
	 /* file_index: skb_phn_symbol_2_en_0_5 */ 
		125,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"}",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 73 */
	 /* file_index: skb_phn_symbol_2_en_1_1 */ 
		43,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 74 */
	 /* file_index: skb_phn_symbol_2_en_1_2 */ 
		61,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 75 */
	 /* file_index: skb_phn_symbol_2_en_1_3 */ 
		94,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 76 */
	 /* file_index: skb_phn_symbol_2_en_1_4 */ 
		91,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"[",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 77 */
	 /* file_index: skb_phn_symbol_2_en_1_5 */ 
		93,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"]",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 78 */
	 /* file_index: skb_phn_symbol_2_en_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE2,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE2,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 79 */
	 /* file_index: skb_phn_symbol_2_en_2_2 */ 
		124,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"|",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 80 */
	 /* file_index: skb_phn_symbol_2_en_2_3 */ 
		92,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\\",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 81 */
	 /* file_index: skb_phn_symbol_2_en_2_4 */ 
		126,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 82 */
	 /* file_index: skb_phn_symbol_2_en_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 83 */
	 /* file_index: skb_phn_symbol_2_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 84 */
	 /* file_index: skb_phn_symbol_2_en_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 85 */
	 /* file_index: skb_phn_symbol_2_en_3_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		0,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 86 */
	 /* file_index: skb_phn_symbol_2_en_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 87 */
	 /* file_index: skb_phn_symbol_2_en_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+44			/* toggle_index */
	},	

	{
		/* index 88 */
	 /* file_index: skb_phn_symbol_3_en_0_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 89 */
	 /* file_index: skb_phn_symbol_3_en_0_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 90 */
	 /* file_index: skb_phn_symbol_3_en_0_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 91 */
	 /* file_index: skb_phn_symbol_3_en_0_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 92 */
	 /* file_index: skb_phn_symbol_3_en_0_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 93 */
	 /* file_index: skb_phn_symbol_3_en_1_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":$",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 94 */
	 /* file_index: skb_phn_symbol_3_en_1_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":S",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 95 */
	 /* file_index: skb_phn_symbol_3_en_1_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^_^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 96 */
	 /* file_index: skb_phn_symbol_3_en_1_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 97 */
	 /* file_index: skb_phn_symbol_3_en_1_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":>",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 98 */
	 /* file_index: skb_phn_symbol_3_en_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE3,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE3,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 99 */
	 /* file_index: skb_phn_symbol_3_en_2_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"><",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 100 */
	 /* file_index: skb_phn_symbol_3_en_2_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 101 */
	 /* file_index: skb_phn_symbol_3_en_2_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Orz",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 102 */
	 /* file_index: skb_phn_symbol_3_en_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 103 */
	 /* file_index: skb_phn_symbol_3_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 104 */
	 /* file_index: skb_phn_symbol_3_en_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 105 */
	 /* file_index: skb_phn_symbol_3_en_3_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		0,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 106 */
	 /* file_index: skb_phn_symbol_3_en_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 107 */
	 /* file_index: skb_phn_symbol_3_en_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+48			/* toggle_index */
	},	

	{
		/* index 108 */
	 /* file_index: skb_phone_en_0_1 */ 
		44,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_P,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_P,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 109 */
	 /* file_index: skb_phone_en_0_2 */ 
		49,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 110 */
	 /* file_index: skb_phone_en_0_3 */ 
		50,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 111 */
	 /* file_index: skb_phone_en_0_4 */ 
		51,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 112 */
	 /* file_index: skb_phone_en_0_5 */ 
		43,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PLUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PLUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 113 */
	 /* file_index: skb_phone_en_1_1 */ 
		59,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_W,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_W,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 114 */
	 /* file_index: skb_phone_en_1_2 */ 
		52,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 115 */
	 /* file_index: skb_phone_en_1_3 */ 
		53,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 116 */
	 /* file_index: skb_phone_en_1_4 */ 
		54,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 117 */
	 /* file_index: skb_phone_en_1_5 */ 
		45,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_MINUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_MINUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 118 */
	 /* file_index: skb_phone_en_2_1 */ 
		78,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_N,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_N,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 119 */
	 /* file_index: skb_phone_en_2_2 */ 
		55,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 120 */
	 /* file_index: skb_phone_en_2_3 */ 
		56,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 121 */
	 /* file_index: skb_phone_en_2_4 */ 
		57,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 122 */
	 /* file_index: skb_phone_en_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 123 */
	 /* file_index: skb_phone_en_3_1 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_COMMONKB,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_COMMONKB,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 124 */
	 /* file_index: skb_phone_en_3_2 */ 
		42,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"*",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 125 */
	 /* file_index: skb_phone_en_3_3 */ 
		48,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 126 */
	 /* file_index: skb_phone_en_3_4 */ 
		35,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"#",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 127 */
	 /* file_index: skb_phone_en_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+52			/* toggle_index */
	},	

	{
		/* index 128 */
	 /* file_index: skb_phone_sym_en_0_1 */ 
		44,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_P,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_P,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 129 */
	 /* file_index: skb_phone_sym_en_0_2 */ 
		49,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 130 */
	 /* file_index: skb_phone_sym_en_0_3 */ 
		50,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 131 */
	 /* file_index: skb_phone_sym_en_0_4 */ 
		50,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 132 */
	 /* file_index: skb_phone_sym_en_0_5 */ 
		43,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PLUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PLUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 133 */
	 /* file_index: skb_phone_sym_en_1_1 */ 
		59,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_W,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_W,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 134 */
	 /* file_index: skb_phone_sym_en_1_2 */ 
		44,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L",",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 135 */
	 /* file_index: skb_phone_sym_en_1_3 */ 
		46,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 136 */
	 /* file_index: skb_phone_sym_en_1_4 */ 
		54,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 137 */
	 /* file_index: skb_phone_sym_en_1_5 */ 
		45,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_MINUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_MINUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 138 */
	 /* file_index: skb_phone_sym_en_2_1 */ 
		78,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_N,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_N,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 139 */
	 /* file_index: skb_phone_sym_en_2_2 */ 
		40,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 140 */
	 /* file_index: skb_phone_sym_en_2_3 */ 
		47,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		187,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 141 */
	 /* file_index: skb_phone_sym_en_2_4 */ 
		41,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L")",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		293,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		106,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 142 */
	 /* file_index: skb_phone_sym_en_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 143 */
	 /* file_index: skb_phone_sym_en_3_1 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_COMMONKB,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_COMMONKB,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 144 */
	 /* file_index: skb_phone_sym_en_3_2 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		10,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		81,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		318,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 145 */
	 /* file_index: skb_phone_sym_en_3_3 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		399,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		75,			/* width */
		0,			/* popup_skb */
		toggleStructTable+56			/* toggle_index */
	},	

	{
		/* index 146 */
	 /* file_index: skb_popup_phn_key1_en_0_1 */ 
		49,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 147 */
	 /* file_index: skb_popup_phn_key1_en_0_2 */ 
		63,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 148 */
	 /* file_index: skb_popup_phn_key1_en_0_3 */ 
		33,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 149 */
	 /* file_index: skb_popup_phn_key1_en_0_4 */ 
		64,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 150 */
	 /* file_index: skb_popup_phn_key2_en_0_1 */ 
		99,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"c",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 151 */
	 /* file_index: skb_popup_phn_key2_en_0_2 */ 
		98,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 152 */
	 /* file_index: skb_popup_phn_key2_en_0_3 */ 
		97,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 153 */
	 /* file_index: skb_popup_phn_key2_en_0_4 */ 
		50,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 154 */
	 /* file_index: skb_popup_phn_key2_en_0_5 */ 
		65,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"A",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 155 */
	 /* file_index: skb_popup_phn_key2_en_0_6 */ 
		66,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"B",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		270,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 156 */
	 /* file_index: skb_popup_phn_key2_en_0_7 */ 
		67,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"C",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		323,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 157 */
	 /* file_index: skb_popup_phn_key3_en_0_1 */ 
		102,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"f",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 158 */
	 /* file_index: skb_popup_phn_key3_en_0_2 */ 
		101,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"e",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 159 */
	 /* file_index: skb_popup_phn_key3_en_0_3 */ 
		100,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"d",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 160 */
	 /* file_index: skb_popup_phn_key3_en_0_4 */ 
		51,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 161 */
	 /* file_index: skb_popup_phn_key3_en_0_5 */ 
		68,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 162 */
	 /* file_index: skb_popup_phn_key3_en_0_6 */ 
		69,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"E",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		270,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 163 */
	 /* file_index: skb_popup_phn_key3_en_0_7 */ 
		70,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"F",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		323,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 164 */
	 /* file_index: skb_popup_phn_key4_en_0_1 */ 
		105,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"i",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 165 */
	 /* file_index: skb_popup_phn_key4_en_0_2 */ 
		104,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"h",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 166 */
	 /* file_index: skb_popup_phn_key4_en_0_3 */ 
		103,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"g",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 167 */
	 /* file_index: skb_popup_phn_key4_en_0_4 */ 
		52,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 168 */
	 /* file_index: skb_popup_phn_key4_en_0_5 */ 
		71,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"G",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 169 */
	 /* file_index: skb_popup_phn_key4_en_0_6 */ 
		72,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"H",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		270,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 170 */
	 /* file_index: skb_popup_phn_key4_en_0_7 */ 
		73,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"I",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		323,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 171 */
	 /* file_index: skb_popup_phn_key5_en_0_1 */ 
		108,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"l",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 172 */
	 /* file_index: skb_popup_phn_key5_en_0_2 */ 
		107,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"k",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 173 */
	 /* file_index: skb_popup_phn_key5_en_0_3 */ 
		106,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"j",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 174 */
	 /* file_index: skb_popup_phn_key5_en_0_4 */ 
		53,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 175 */
	 /* file_index: skb_popup_phn_key5_en_0_5 */ 
		74,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"J",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 176 */
	 /* file_index: skb_popup_phn_key5_en_0_6 */ 
		75,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"K",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		270,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 177 */
	 /* file_index: skb_popup_phn_key5_en_0_7 */ 
		76,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"L",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		323,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 178 */
	 /* file_index: skb_popup_phn_key6_en_0_1 */ 
		111,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"o",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 179 */
	 /* file_index: skb_popup_phn_key6_en_0_2 */ 
		110,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"n",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 180 */
	 /* file_index: skb_popup_phn_key6_en_0_3 */ 
		109,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"m",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 181 */
	 /* file_index: skb_popup_phn_key6_en_0_4 */ 
		54,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 182 */
	 /* file_index: skb_popup_phn_key6_en_0_5 */ 
		77,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"M",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 183 */
	 /* file_index: skb_popup_phn_key6_en_0_6 */ 
		78,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"N",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		270,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 184 */
	 /* file_index: skb_popup_phn_key6_en_0_7 */ 
		79,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"O",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		323,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 185 */
	 /* file_index: skb_popup_phn_key7_en_0_1 */ 
		112,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"p",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 186 */
	 /* file_index: skb_popup_phn_key7_en_0_2 */ 
		113,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"q",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 187 */
	 /* file_index: skb_popup_phn_key7_en_0_3 */ 
		114,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"r",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 188 */
	 /* file_index: skb_popup_phn_key7_en_0_4 */ 
		115,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"s",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 189 */
	 /* file_index: skb_popup_phn_key7_en_1_1 */ 
		80,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 190 */
	 /* file_index: skb_popup_phn_key7_en_1_2 */ 
		81,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Q",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 191 */
	 /* file_index: skb_popup_phn_key7_en_1_3 */ 
		82,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"R",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 192 */
	 /* file_index: skb_popup_phn_key7_en_1_4 */ 
		83,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"S",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 193 */
	 /* file_index: skb_popup_phn_key7_en_1_5 */ 
		55,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 194 */
	 /* file_index: skb_popup_phn_key8_en_0_1 */ 
		118,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"v",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 195 */
	 /* file_index: skb_popup_phn_key8_en_0_2 */ 
		117,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"u",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 196 */
	 /* file_index: skb_popup_phn_key8_en_0_3 */ 
		116,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"t",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 197 */
	 /* file_index: skb_popup_phn_key8_en_0_4 */ 
		56,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 198 */
	 /* file_index: skb_popup_phn_key8_en_0_5 */ 
		84,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"T",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 199 */
	 /* file_index: skb_popup_phn_key8_en_0_6 */ 
		85,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"U",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		270,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 200 */
	 /* file_index: skb_popup_phn_key8_en_0_7 */ 
		86,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"V",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		323,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 201 */
	 /* file_index: skb_popup_phn_key9_en_0_1 */ 
		119,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"w",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		59,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 202 */
	 /* file_index: skb_popup_phn_key9_en_0_2 */ 
		120,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"x",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		112,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 203 */
	 /* file_index: skb_popup_phn_key9_en_0_3 */ 
		121,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"y",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		165,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 204 */
	 /* file_index: skb_popup_phn_key9_en_0_4 */ 
		122,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"z",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		218,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 205 */
	 /* file_index: skb_popup_phn_key9_en_1_1 */ 
		57,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 206 */
	 /* file_index: skb_popup_phn_key9_en_1_2 */ 
		87,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"W",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 207 */
	 /* file_index: skb_popup_phn_key9_en_1_3 */ 
		88,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"X",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 208 */
	 /* file_index: skb_popup_phn_key9_en_1_4 */ 
		89,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Y",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 209 */
	 /* file_index: skb_popup_phn_key9_en_1_5 */ 
		90,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Z",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 210 */
	 /* file_index: skb_popup_qwerty_com_en_0_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".net",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		69,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 211 */
	 /* file_index: skb_popup_qwerty_com_en_0_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".edu",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		75,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		69,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 212 */
	 /* file_index: skb_popup_qwerty_com_en_0_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".org",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		144,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		69,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 213 */
	 /* file_index: skb_popup_qwerty_com_en_0_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".com",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		213,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		69,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 214 */
	 /* file_index: skb_popup_qwerty_fullstop_en_0_1 */ 
		63,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 215 */
	 /* file_index: skb_popup_qwerty_fullstop_en_0_2 */ 
		33,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		60,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 216 */
	 /* file_index: skb_popup_qwerty_fullstop_en_0_3 */ 
		59,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		114,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 217 */
	 /* file_index: skb_popup_qwerty_fullstop_en_0_4 */ 
		58,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		168,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 218 */
	 /* file_index: skb_popup_qwerty_fullstop_en_0_5 */ 
		47,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		222,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 219 */
	 /* file_index: skb_popup_qwerty_fullstop_en_0_6 */ 
		46,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		276,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 220 */
	 /* file_index: skb_popup_symbol_en_0_1 */ 
		GUI_VKBD_PEN_V3_SYMBOL_PAGE1,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1/3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 221 */
	 /* file_index: skb_popup_symbol_en_0_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_PAGE2,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2/3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 222 */
	 /* file_index: skb_popup_symbol_en_0_3 */ 
		GUI_VKBD_PEN_V3_SYMBOL_PAGE3,			/* code */
		5,			/* key_type */
		IMG_ID_POPUPICON_PAGE3,			/* icon */
		0,			/* icon_aux */
		IMG_ID_POPUPICON_PAGE3,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 223 */
	 /* file_index: skb_qwerty_en_0_1 */ 
		113,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"q",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 224 */
	 /* file_index: skb_qwerty_en_0_2 */ 
		119,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"w",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		53,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 225 */
	 /* file_index: skb_qwerty_en_0_3 */ 
		101,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"e",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		99,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 226 */
	 /* file_index: skb_qwerty_en_0_4 */ 
		114,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"r",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		145,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 227 */
	 /* file_index: skb_qwerty_en_0_5 */ 
		116,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"t",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		191,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 228 */
	 /* file_index: skb_qwerty_en_0_6 */ 
		121,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"y",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		237,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 229 */
	 /* file_index: skb_qwerty_en_0_7 */ 
		117,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"u",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		283,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 230 */
	 /* file_index: skb_qwerty_en_0_8 */ 
		105,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"i",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		329,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 231 */
	 /* file_index: skb_qwerty_en_0_9 */ 
		111,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"o",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		375,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 232 */
	 /* file_index: skb_qwerty_en_0_10 */ 
		112,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"p",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		421,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 233 */
	 /* file_index: skb_qwerty_en_1_1 */ 
		97,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		24,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 234 */
	 /* file_index: skb_qwerty_en_1_2 */ 
		115,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"s",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 235 */
	 /* file_index: skb_qwerty_en_1_3 */ 
		100,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"d",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		116,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 236 */
	 /* file_index: skb_qwerty_en_1_4 */ 
		102,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"f",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		162,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 237 */
	 /* file_index: skb_qwerty_en_1_5 */ 
		103,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"g",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 238 */
	 /* file_index: skb_qwerty_en_1_6 */ 
		104,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"h",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		254,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 239 */
	 /* file_index: skb_qwerty_en_1_7 */ 
		106,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"j",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		300,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 240 */
	 /* file_index: skb_qwerty_en_1_8 */ 
		107,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"k",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		346,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 241 */
	 /* file_index: skb_qwerty_en_1_9 */ 
		108,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"l",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		392,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 242 */
	 /* file_index: skb_qwerty_en_2_1 */ 
		GUI_VKBD_PEN_V3_SHIFT ,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_SHIFT_LOWER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SHIFT_LOWER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		toggleStructTable+60			/* toggle_index */
	},	

	{
		/* index 243 */
	 /* file_index: skb_qwerty_en_2_2 */ 
		122,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"z",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 244 */
	 /* file_index: skb_qwerty_en_2_3 */ 
		120,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"x",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		117,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 245 */
	 /* file_index: skb_qwerty_en_2_4 */ 
		99,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"c",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		163,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 246 */
	 /* file_index: skb_qwerty_en_2_5 */ 
		118,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"v",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		209,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 247 */
	 /* file_index: skb_qwerty_en_2_6 */ 
		98,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		255,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 248 */
	 /* file_index: skb_qwerty_en_2_7 */ 
		110,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"n",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		301,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 249 */
	 /* file_index: skb_qwerty_en_2_8 */ 
		109,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"m",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		347,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 250 */
	 /* file_index: skb_qwerty_en_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		393,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 251 */
	 /* file_index: skb_qwerty_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 252 */
	 /* file_index: skb_qwerty_en_3_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOPHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOPHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 253 */
	 /* file_index: skb_qwerty_en_3_3 */ 
		44,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L",",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		135,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 254 */
	 /* file_index: skb_qwerty_en_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		183,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		111,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 255 */
	 /* file_index: skb_qwerty_en_3_5 */ 
		46,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		294,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 256 */
	 /* file_index: skb_qwerty_en_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 257 */
	 /* file_index: skb_qwerty_en_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		406,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		toggleStructTable+64			/* toggle_index */
	},	

	{
		/* index 258 */
	 /* file_index: skb_qwerty_en_4_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 259 */
	 /* file_index: skb_qwerty_en_4_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOPHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOPHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 260 */
	 /* file_index: skb_qwerty_en_4_3 */ 
		64,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		135,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		69,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 261 */
	 /* file_index: skb_qwerty_en_4_4 */ 
		46,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		204,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		69,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 262 */
	 /* file_index: skb_qwerty_en_4_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".com",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		273,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		69,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 263 */
	 /* file_index: skb_qwerty_en_4_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 264 */
	 /* file_index: skb_qwerty_en_4_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		406,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		toggleStructTable+68			/* toggle_index */
	},	

	{
		/* index 265 */
	 /* file_index: skb_qwerty_en_5_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 266 */
	 /* file_index: skb_qwerty_en_5_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOPHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOPHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 267 */
	 /* file_index: skb_qwerty_en_5_3 */ 
		47,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		135,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		69,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 268 */
	 /* file_index: skb_qwerty_en_5_4 */ 
		46,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		204,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		69,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 269 */
	 /* file_index: skb_qwerty_en_5_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".com",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		273,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		69,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 270 */
	 /* file_index: skb_qwerty_en_5_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 271 */
	 /* file_index: skb_qwerty_en_5_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		406,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		toggleStructTable+72			/* toggle_index */
	},	

	{
		/* index 272 */
	 /* file_index: skb_qwerty_symbol_1_en_0_1 */ 
		49,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 273 */
	 /* file_index: skb_qwerty_symbol_1_en_0_2 */ 
		50,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		53,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 274 */
	 /* file_index: skb_qwerty_symbol_1_en_0_3 */ 
		51,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		99,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 275 */
	 /* file_index: skb_qwerty_symbol_1_en_0_4 */ 
		52,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		145,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 276 */
	 /* file_index: skb_qwerty_symbol_1_en_0_5 */ 
		53,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		191,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 277 */
	 /* file_index: skb_qwerty_symbol_1_en_0_6 */ 
		54,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		237,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 278 */
	 /* file_index: skb_qwerty_symbol_1_en_0_7 */ 
		55,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		283,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 279 */
	 /* file_index: skb_qwerty_symbol_1_en_0_8 */ 
		56,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		329,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 280 */
	 /* file_index: skb_qwerty_symbol_1_en_0_9 */ 
		57,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		375,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 281 */
	 /* file_index: skb_qwerty_symbol_1_en_0_10 */ 
		48,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		421,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 282 */
	 /* file_index: skb_qwerty_symbol_1_en_1_1 */ 
		64,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 283 */
	 /* file_index: skb_qwerty_symbol_1_en_1_2 */ 
		35,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\#",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		53,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 284 */
	 /* file_index: skb_qwerty_symbol_1_en_1_3 */ 
		36,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"$",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		99,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 285 */
	 /* file_index: skb_qwerty_symbol_1_en_1_4 */ 
		37,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"%",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		145,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 286 */
	 /* file_index: skb_qwerty_symbol_1_en_1_5 */ 
		38,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"&",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		191,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 287 */
	 /* file_index: skb_qwerty_symbol_1_en_1_6 */ 
		42,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"*",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		237,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 288 */
	 /* file_index: skb_qwerty_symbol_1_en_1_7 */ 
		45,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		283,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 289 */
	 /* file_index: skb_qwerty_symbol_1_en_1_8 */ 
		95,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"_",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		329,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 290 */
	 /* file_index: skb_qwerty_symbol_1_en_1_9 */ 
		40,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		375,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 291 */
	 /* file_index: skb_qwerty_symbol_1_en_1_10 */ 
		41,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L")",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		421,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 292 */
	 /* file_index: skb_qwerty_symbol_1_en_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE1,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE1,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 293 */
	 /* file_index: skb_qwerty_symbol_1_en_2_2 */ 
		33,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 294 */
	 /* file_index: skb_qwerty_symbol_1_en_2_3 */ 
		34,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\"",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		117,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 295 */
	 /* file_index: skb_qwerty_symbol_1_en_2_4 */ 
		39,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"'",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		163,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 296 */
	 /* file_index: skb_qwerty_symbol_1_en_2_5 */ 
		58,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		209,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 297 */
	 /* file_index: skb_qwerty_symbol_1_en_2_6 */ 
		59,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		255,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 298 */
	 /* file_index: skb_qwerty_symbol_1_en_2_7 */ 
		47,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		301,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 299 */
	 /* file_index: skb_qwerty_symbol_1_en_2_8 */ 
		63,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		347,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 300 */
	 /* file_index: skb_qwerty_symbol_1_en_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		393,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 301 */
	 /* file_index: skb_qwerty_symbol_1_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 302 */
	 /* file_index: skb_qwerty_symbol_1_en_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 303 */
	 /* file_index: skb_qwerty_symbol_1_en_3_3 */ 
		44,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L",",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		135,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 304 */
	 /* file_index: skb_qwerty_symbol_1_en_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		183,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		111,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 305 */
	 /* file_index: skb_qwerty_symbol_1_en_3_5 */ 
		46,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		294,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 306 */
	 /* file_index: skb_qwerty_symbol_1_en_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 307 */
	 /* file_index: skb_qwerty_symbol_1_en_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		406,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		toggleStructTable+76			/* toggle_index */
	},	

	{
		/* index 308 */
	 /* file_index: skb_qwerty_symbol_2_en_0_1 */ 
		126,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 309 */
	 /* file_index: skb_qwerty_symbol_2_en_0_2 */ 
		177,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xb1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		53,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 310 */
	 /* file_index: skb_qwerty_symbol_2_en_0_3 */ 
		215,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xd7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		99,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 311 */
	 /* file_index: skb_qwerty_symbol_2_en_0_4 */ 
		247,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		145,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 312 */
	 /* file_index: skb_qwerty_symbol_2_en_0_5 */ 
		183,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xb7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		191,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 313 */
	 /* file_index: skb_qwerty_symbol_2_en_0_6 */ 
		176,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xb0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		237,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 314 */
	 /* file_index: skb_qwerty_symbol_2_en_0_7 */ 
		60,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		283,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 315 */
	 /* file_index: skb_qwerty_symbol_2_en_0_8 */ 
		62,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L">",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		329,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 316 */
	 /* file_index: skb_qwerty_symbol_2_en_0_9 */ 
		123,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"{",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		375,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 317 */
	 /* file_index: skb_qwerty_symbol_2_en_0_10 */ 
		125,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"}",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		421,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 318 */
	 /* file_index: skb_qwerty_symbol_2_en_1_1 */ 
		169,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xa9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 319 */
	 /* file_index: skb_qwerty_symbol_2_en_1_2 */ 
		65505,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xffe1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		53,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 320 */
	 /* file_index: skb_qwerty_symbol_2_en_1_3 */ 
		8364,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x20ac",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		99,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 321 */
	 /* file_index: skb_qwerty_symbol_2_en_1_4 */ 
		94,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		145,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 322 */
	 /* file_index: skb_qwerty_symbol_2_en_1_5 */ 
		174,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xae",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		191,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 323 */
	 /* file_index: skb_qwerty_symbol_2_en_1_6 */ 
		8457,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2109",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		237,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 324 */
	 /* file_index: skb_qwerty_symbol_2_en_1_7 */ 
		43,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		283,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 325 */
	 /* file_index: skb_qwerty_symbol_2_en_1_8 */ 
		61,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		329,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 326 */
	 /* file_index: skb_qwerty_symbol_2_en_1_9 */ 
		91,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"[",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		375,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 327 */
	 /* file_index: skb_qwerty_symbol_2_en_1_10 */ 
		93,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"]",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		421,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 328 */
	 /* file_index: skb_qwerty_symbol_2_en_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE2,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE2,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 329 */
	 /* file_index: skb_qwerty_symbol_2_en_2_2 */ 
		8482,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2122",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 330 */
	 /* file_index: skb_qwerty_symbol_2_en_2_3 */ 
		171,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xab",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		117,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 331 */
	 /* file_index: skb_qwerty_symbol_2_en_2_4 */ 
		187,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xbb",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		163,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 332 */
	 /* file_index: skb_qwerty_symbol_2_en_2_5 */ 
		65504,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xffe0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		209,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 333 */
	 /* file_index: skb_qwerty_symbol_2_en_2_6 */ 
		124,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"|",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		255,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 334 */
	 /* file_index: skb_qwerty_symbol_2_en_2_7 */ 
		92,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\\",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		301,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 335 */
	 /* file_index: skb_qwerty_symbol_2_en_2_8 */ 
		8730,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x221a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		347,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 336 */
	 /* file_index: skb_qwerty_symbol_2_en_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		393,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 337 */
	 /* file_index: skb_qwerty_symbol_2_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 338 */
	 /* file_index: skb_qwerty_symbol_2_en_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 339 */
	 /* file_index: skb_qwerty_symbol_2_en_3_3 */ 
		167,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xa7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		135,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 340 */
	 /* file_index: skb_qwerty_symbol_2_en_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		183,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		111,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 341 */
	 /* file_index: skb_qwerty_symbol_2_en_3_5 */ 
		8230,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2026",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		294,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 342 */
	 /* file_index: skb_qwerty_symbol_2_en_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 343 */
	 /* file_index: skb_qwerty_symbol_2_en_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		406,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		toggleStructTable+80			/* toggle_index */
	},	

	{
		/* index 344 */
	 /* file_index: skb_qwerty_symbol_3_en_0_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 345 */
	 /* file_index: skb_qwerty_symbol_3_en_0_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		53,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 346 */
	 /* file_index: skb_qwerty_symbol_3_en_0_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		99,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 347 */
	 /* file_index: skb_qwerty_symbol_3_en_0_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		145,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 348 */
	 /* file_index: skb_qwerty_symbol_3_en_0_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		191,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 349 */
	 /* file_index: skb_qwerty_symbol_3_en_0_6 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		237,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 350 */
	 /* file_index: skb_qwerty_symbol_3_en_0_7 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		283,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 351 */
	 /* file_index: skb_qwerty_symbol_3_en_0_8 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";-)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		329,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 352 */
	 /* file_index: skb_qwerty_symbol_3_en_0_9 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		375,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 353 */
	 /* file_index: skb_qwerty_symbol_3_en_0_10 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		421,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 354 */
	 /* file_index: skb_qwerty_symbol_3_en_1_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":$",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 355 */
	 /* file_index: skb_qwerty_symbol_3_en_1_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":S",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		53,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 356 */
	 /* file_index: skb_qwerty_symbol_3_en_1_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^-^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		99,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 357 */
	 /* file_index: skb_qwerty_symbol_3_en_1_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-.-!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		145,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 358 */
	 /* file_index: skb_qwerty_symbol_3_en_1_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=_0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		191,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 359 */
	 /* file_index: skb_qwerty_symbol_3_en_1_6 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-_-#",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		237,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 360 */
	 /* file_index: skb_qwerty_symbol_3_en_1_7 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"T.T",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		283,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 361 */
	 /* file_index: skb_qwerty_symbol_3_en_1_8 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@.\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		329,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 362 */
	 /* file_index: skb_qwerty_symbol_3_en_1_9 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		375,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 363 */
	 /* file_index: skb_qwerty_symbol_3_en_1_10 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":>",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		421,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 364 */
	 /* file_index: skb_qwerty_symbol_3_en_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE3,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE3,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 365 */
	 /* file_index: skb_qwerty_symbol_3_en_2_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"><",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 366 */
	 /* file_index: skb_qwerty_symbol_3_en_2_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2299\x2299",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		117,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 367 */
	 /* file_index: skb_qwerty_symbol_3_en_2_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2229_\x2229",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		163,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 368 */
	 /* file_index: skb_qwerty_symbol_3_en_2_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^o^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		209,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 369 */
	 /* file_index: skb_qwerty_symbol_3_en_2_6 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+_+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		255,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 370 */
	 /* file_index: skb_qwerty_symbol_3_en_2_7 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=_=",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		301,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 371 */
	 /* file_index: skb_qwerty_symbol_3_en_2_8 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^3^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		347,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		46,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 372 */
	 /* file_index: skb_qwerty_symbol_3_en_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		393,			/* pos_x */
		170,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 373 */
	 /* file_index: skb_qwerty_symbol_3_en_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		7,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 374 */
	 /* file_index: skb_qwerty_symbol_3_en_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		71,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 375 */
	 /* file_index: skb_qwerty_symbol_3_en_3_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		135,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 376 */
	 /* file_index: skb_qwerty_symbol_3_en_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		183,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		111,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 377 */
	 /* file_index: skb_qwerty_symbol_3_en_3_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Orz",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		294,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		48,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 378 */
	 /* file_index: skb_qwerty_symbol_3_en_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 379 */
	 /* file_index: skb_qwerty_symbol_3_en_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		406,			/* pos_x */
		253,			/* pos_y */
		83,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		toggleStructTable+84			/* toggle_index */
	},	

	{
		/* index 380 */
	 /* file_index: skb_special_alpha_a_en_0_1 */ 
		97,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		59,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 381 */
	 /* file_index: skb_special_alpha_a_en_0_2 */ 
		224,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		112,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 382 */
	 /* file_index: skb_special_alpha_a_en_0_3 */ 
		225,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		165,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 383 */
	 /* file_index: skb_special_alpha_a_en_0_4 */ 
		226,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		218,			/* pos_x */
		4,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 384 */
	 /* file_index: skb_special_alpha_a_en_1_1 */ 
		228,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 385 */
	 /* file_index: skb_special_alpha_a_en_1_2 */ 
		230,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 386 */
	 /* file_index: skb_special_alpha_a_en_1_3 */ 
		227,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 387 */
	 /* file_index: skb_special_alpha_a_en_1_4 */ 
		229,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 388 */
	 /* file_index: skb_special_alpha_a_en_1_5 */ 
		257,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0101",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		87,			/* pos_y */
		83,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 389 */
	 /* file_index: skb_special_alpha_c_en_0_1 */ 
		231,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		4,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 390 */
	 /* file_index: skb_special_alpha_c_en_0_2 */ 
		99,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"c",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 391 */
	 /* file_index: skb_special_alpha_e_en_0_1 */ 
		101,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"e",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		12,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		57,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 392 */
	 /* file_index: skb_special_alpha_e_en_0_2 */ 
		232,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		69,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		57,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 393 */
	 /* file_index: skb_special_alpha_e_en_0_3 */ 
		233,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		126,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		57,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 394 */
	 /* file_index: skb_special_alpha_e_en_0_4 */ 
		234,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xea",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		183,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		57,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 395 */
	 /* file_index: skb_special_alpha_e_en_0_5 */ 
		235,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xeb",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		240,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		57,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 396 */
	 /* file_index: skb_special_alpha_e_en_0_6 */ 
		275,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0113",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		297,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		57,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 397 */
	 /* file_index: skb_special_alpha_i_en_0_1 */ 
		299,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x012b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 398 */
	 /* file_index: skb_special_alpha_i_en_0_2 */ 
		237,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xed",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 399 */
	 /* file_index: skb_special_alpha_i_en_0_3 */ 
		239,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xef",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		111,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 400 */
	 /* file_index: skb_special_alpha_i_en_0_4 */ 
		238,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xee",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 401 */
	 /* file_index: skb_special_alpha_i_en_0_5 */ 
		105,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"i",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		217,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 402 */
	 /* file_index: skb_special_alpha_n_en_0_1 */ 
		328,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0148",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		4,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 403 */
	 /* file_index: skb_special_alpha_n_en_0_2 */ 
		110,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"n",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		58,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		54,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 404 */
	 /* file_index: skb_special_alpha_o_en_0_1 */ 
		333,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x014d",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 405 */
	 /* file_index: skb_special_alpha_o_en_0_2 */ 
		248,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		61,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 406 */
	 /* file_index: skb_special_alpha_o_en_0_3 */ 
		339,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0153",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		114,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 407 */
	 /* file_index: skb_special_alpha_o_en_0_4 */ 
		243,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		167,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 408 */
	 /* file_index: skb_special_alpha_o_en_0_5 */ 
		242,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		220,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 409 */
	 /* file_index: skb_special_alpha_o_en_0_6 */ 
		246,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		273,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 410 */
	 /* file_index: skb_special_alpha_o_en_0_7 */ 
		244,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 411 */
	 /* file_index: skb_special_alpha_o_en_0_8 */ 
		111,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"o",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		379,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		53,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 412 */
	 /* file_index: skb_special_alpha_u_en_0_1 */ 
		363,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x016b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		12,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		50,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 413 */
	 /* file_index: skb_special_alpha_u_en_0_2 */ 
		250,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xfa",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		62,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		50,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 414 */
	 /* file_index: skb_special_alpha_u_en_0_3 */ 
		249,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		112,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		50,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 415 */
	 /* file_index: skb_special_alpha_u_en_0_4 */ 
		252,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xfc",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		162,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		50,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 416 */
	 /* file_index: skb_special_alpha_u_en_0_5 */ 
		251,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xfb",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		212,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		50,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 417 */
	 /* file_index: skb_special_alpha_u_en_0_6 */ 
		117,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"u",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		88,			/* height */
		50,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 418 */
	 /* file_index: skb_phn_en_rotate_0_1 */ 
		44,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_COMMA_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_COMMA_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+88			/* toggle_index */
	},	

	{
		/* index 419 */
	 /* file_index: skb_phn_en_rotate_0_2 */ 
		49,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		L"\?!\@",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 420 */
	 /* file_index: skb_phn_en_rotate_0_3 */ 
		50,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		L"abc",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 421 */
	 /* file_index: skb_phn_en_rotate_0_4 */ 
		51,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		L"def",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 422 */
	 /* file_index: skb_phn_en_rotate_0_5 */ 
		GUI_VKBD_PEN_V3_MOVE_LEFT,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_LEFT_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_LEFT_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 423 */
	 /* file_index: skb_phn_en_rotate_1_1 */ 
		46,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENFULLSTOP_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENFULLSTOP_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 424 */
	 /* file_index: skb_phn_en_rotate_1_2 */ 
		52,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		L"ghi",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 425 */
	 /* file_index: skb_phn_en_rotate_1_3 */ 
		53,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		L"jkl",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 426 */
	 /* file_index: skb_phn_en_rotate_1_4 */ 
		54,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		L"mno",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 427 */
	 /* file_index: skb_phn_en_rotate_1_5 */ 
		GUI_VKBD_PEN_V3_MOVE_RIGHT,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_RIGHT_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_RIGHT_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 428 */
	 /* file_index: skb_phn_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SHIFT ,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_SHIFT_LOWER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SHIFT_LOWER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+92			/* toggle_index */
	},	

	{
		/* index 429 */
	 /* file_index: skb_phn_en_rotate_2_2 */ 
		55,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		L"pqrs",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 430 */
	 /* file_index: skb_phn_en_rotate_2_3 */ 
		56,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		L"tuv",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 431 */
	 /* file_index: skb_phn_en_rotate_2_4 */ 
		57,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		L"wxyz",			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 432 */
	 /* file_index: skb_phn_en_rotate_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 433 */
	 /* file_index: skb_phn_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 434 */
	 /* file_index: skb_phn_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOQWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOQWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 435 */
	 /* file_index: skb_phn_en_rotate_3_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		0,			/* icon */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux */
		0,			/* icon_hl */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		48,			/* code_longpress */
		L"0",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		toggleStructTable+96			/* toggle_index */
	},	

	{
		/* index 436 */
	 /* file_index: skb_phn_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 437 */
	 /* file_index: skb_phn_en_rotate_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+100			/* toggle_index */
	},	

	{
		/* index 438 */
	 /* file_index: skb_phn_symbol_1_en_rotate_0_1 */ 
		34,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\"",			/* label */
		L"'",			/* label_aux */
		L"\"",			/* label_balloon */
		0,			/* icon_balloon */
		39,			/* code_longpress */
		L"'",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 439 */
	 /* file_index: skb_phn_symbol_1_en_rotate_0_2 */ 
		49,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		L"\#",			/* label_aux */
		L"1",			/* label_balloon */
		0,			/* icon_balloon */
		35,			/* code_longpress */
		L"\#",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 440 */
	 /* file_index: skb_phn_symbol_1_en_rotate_0_3 */ 
		50,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		L"$",			/* label_aux */
		L"2",			/* label_balloon */
		0,			/* icon_balloon */
		36,			/* code_longpress */
		L"$",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 441 */
	 /* file_index: skb_phn_symbol_1_en_rotate_0_4 */ 
		51,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		L"%",			/* label_aux */
		L"3",			/* label_balloon */
		0,			/* icon_balloon */
		37,			/* code_longpress */
		L"%",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 442 */
	 /* file_index: skb_phn_symbol_1_en_rotate_0_5 */ 
		95,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"_",			/* label */
		L"-",			/* label_aux */
		L"_",			/* label_balloon */
		0,			/* icon_balloon */
		45,			/* code_longpress */
		L"-",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 443 */
	 /* file_index: skb_phn_symbol_1_en_rotate_1_1 */ 
		63,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		L"!",			/* label_aux */
		L"\?",			/* label_balloon */
		0,			/* icon_balloon */
		33,			/* code_longpress */
		L"!",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 444 */
	 /* file_index: skb_phn_symbol_1_en_rotate_1_2 */ 
		52,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		L"\@",			/* label_aux */
		L"4",			/* label_balloon */
		0,			/* icon_balloon */
		64,			/* code_longpress */
		L"\@",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 445 */
	 /* file_index: skb_phn_symbol_1_en_rotate_1_3 */ 
		53,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		L"&",			/* label_aux */
		L"5",			/* label_balloon */
		0,			/* icon_balloon */
		38,			/* code_longpress */
		L"&",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 446 */
	 /* file_index: skb_phn_symbol_1_en_rotate_1_4 */ 
		54,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		L"*",			/* label_aux */
		L"6",			/* label_balloon */
		0,			/* icon_balloon */
		42,			/* code_longpress */
		L"*",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 447 */
	 /* file_index: skb_phn_symbol_1_en_rotate_1_5 */ 
		58,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":",			/* label */
		L";",			/* label_aux */
		L":",			/* label_balloon */
		0,			/* icon_balloon */
		59,			/* code_longpress */
		L";",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 448 */
	 /* file_index: skb_phn_symbol_1_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE1,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE1,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 449 */
	 /* file_index: skb_phn_symbol_1_en_rotate_2_2 */ 
		55,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		L"/",			/* label_aux */
		L"7",			/* label_balloon */
		0,			/* icon_balloon */
		47,			/* code_longpress */
		L"/",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 450 */
	 /* file_index: skb_phn_symbol_1_en_rotate_2_3 */ 
		56,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		L"(",			/* label_aux */
		L"8",			/* label_balloon */
		0,			/* icon_balloon */
		40,			/* code_longpress */
		L"(",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 451 */
	 /* file_index: skb_phn_symbol_1_en_rotate_2_4 */ 
		57,			/* code */
		6,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		L")",			/* label_aux */
		L"9",			/* label_balloon */
		0,			/* icon_balloon */
		41,			/* code_longpress */
		L")",			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 452 */
	 /* file_index: skb_phn_symbol_1_en_rotate_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 453 */
	 /* file_index: skb_phn_symbol_1_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 454 */
	 /* file_index: skb_phn_symbol_1_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 455 */
	 /* file_index: skb_phn_symbol_1_en_rotate_3_3 */ 
		48,			/* code */
		6,			/* key_type */
		0,			/* icon */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux */
		0,			/* icon_hl */
		IMG_ID_KEYICON_SPACE_AUX,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_KEYICON_SPACE,			/* icon_balloon */
		32,			/* code_longpress */
		0,			/* label_balloon_longpress */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon_longpress */
		318,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 456 */
	 /* file_index: skb_phn_symbol_1_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 457 */
	 /* file_index: skb_phn_symbol_1_en_rotate_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+104			/* toggle_index */
	},	

	{
		/* index 458 */
	 /* file_index: skb_phn_symbol_2_en_rotate_0_1 */ 
		95,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"_",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 459 */
	 /* file_index: skb_phn_symbol_2_en_rotate_0_2 */ 
		60,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 460 */
	 /* file_index: skb_phn_symbol_2_en_rotate_0_3 */ 
		62,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L">",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 461 */
	 /* file_index: skb_phn_symbol_2_en_rotate_0_4 */ 
		123,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"{",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 462 */
	 /* file_index: skb_phn_symbol_2_en_rotate_0_5 */ 
		125,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"}",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 463 */
	 /* file_index: skb_phn_symbol_2_en_rotate_1_1 */ 
		43,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 464 */
	 /* file_index: skb_phn_symbol_2_en_rotate_1_2 */ 
		61,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 465 */
	 /* file_index: skb_phn_symbol_2_en_rotate_1_3 */ 
		94,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 466 */
	 /* file_index: skb_phn_symbol_2_en_rotate_1_4 */ 
		91,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"[",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 467 */
	 /* file_index: skb_phn_symbol_2_en_rotate_1_5 */ 
		93,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"]",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 468 */
	 /* file_index: skb_phn_symbol_2_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE2,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE2,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 469 */
	 /* file_index: skb_phn_symbol_2_en_rotate_2_2 */ 
		124,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"|",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 470 */
	 /* file_index: skb_phn_symbol_2_en_rotate_2_3 */ 
		92,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\\",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 471 */
	 /* file_index: skb_phn_symbol_2_en_rotate_2_4 */ 
		126,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 472 */
	 /* file_index: skb_phn_symbol_2_en_rotate_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 473 */
	 /* file_index: skb_phn_symbol_2_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 474 */
	 /* file_index: skb_phn_symbol_2_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 475 */
	 /* file_index: skb_phn_symbol_2_en_rotate_3_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		0,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 476 */
	 /* file_index: skb_phn_symbol_2_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 477 */
	 /* file_index: skb_phn_symbol_2_en_rotate_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+108			/* toggle_index */
	},	

	{
		/* index 478 */
	 /* file_index: skb_phn_symbol_3_en_rotate_0_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 479 */
	 /* file_index: skb_phn_symbol_3_en_rotate_0_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 480 */
	 /* file_index: skb_phn_symbol_3_en_rotate_0_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 481 */
	 /* file_index: skb_phn_symbol_3_en_rotate_0_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 482 */
	 /* file_index: skb_phn_symbol_3_en_rotate_0_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 483 */
	 /* file_index: skb_phn_symbol_3_en_rotate_1_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":$",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 484 */
	 /* file_index: skb_phn_symbol_3_en_rotate_1_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":S",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 485 */
	 /* file_index: skb_phn_symbol_3_en_rotate_1_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^_^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 486 */
	 /* file_index: skb_phn_symbol_3_en_rotate_1_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 487 */
	 /* file_index: skb_phn_symbol_3_en_rotate_1_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":>",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 488 */
	 /* file_index: skb_phn_symbol_3_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE3,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE3,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 489 */
	 /* file_index: skb_phn_symbol_3_en_rotate_2_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"><",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 490 */
	 /* file_index: skb_phn_symbol_3_en_rotate_2_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 491 */
	 /* file_index: skb_phn_symbol_3_en_rotate_2_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		9,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Orz",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 492 */
	 /* file_index: skb_phn_symbol_3_en_rotate_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 493 */
	 /* file_index: skb_phn_symbol_3_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 494 */
	 /* file_index: skb_phn_symbol_3_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 495 */
	 /* file_index: skb_phn_symbol_3_en_rotate_3_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		0,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 496 */
	 /* file_index: skb_phn_symbol_3_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 497 */
	 /* file_index: skb_phn_symbol_3_en_rotate_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+112			/* toggle_index */
	},	

	{
		/* index 498 */
	 /* file_index: skb_phone_en_rotate_0_1 */ 
		44,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_P,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_P,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 499 */
	 /* file_index: skb_phone_en_rotate_0_2 */ 
		49,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 500 */
	 /* file_index: skb_phone_en_rotate_0_3 */ 
		50,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 501 */
	 /* file_index: skb_phone_en_rotate_0_4 */ 
		51,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 502 */
	 /* file_index: skb_phone_en_rotate_0_5 */ 
		43,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PLUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PLUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 503 */
	 /* file_index: skb_phone_en_rotate_1_1 */ 
		59,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_W,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_W,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 504 */
	 /* file_index: skb_phone_en_rotate_1_2 */ 
		52,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 505 */
	 /* file_index: skb_phone_en_rotate_1_3 */ 
		53,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 506 */
	 /* file_index: skb_phone_en_rotate_1_4 */ 
		54,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 507 */
	 /* file_index: skb_phone_en_rotate_1_5 */ 
		45,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_MINUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_MINUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 508 */
	 /* file_index: skb_phone_en_rotate_2_1 */ 
		78,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_N,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_N,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 509 */
	 /* file_index: skb_phone_en_rotate_2_2 */ 
		55,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 510 */
	 /* file_index: skb_phone_en_rotate_2_3 */ 
		56,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 511 */
	 /* file_index: skb_phone_en_rotate_2_4 */ 
		57,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 512 */
	 /* file_index: skb_phone_en_rotate_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 513 */
	 /* file_index: skb_phone_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_COMMONKB,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_COMMONKB,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 514 */
	 /* file_index: skb_phone_en_rotate_3_2 */ 
		42,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"*",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 515 */
	 /* file_index: skb_phone_en_rotate_3_3 */ 
		48,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 516 */
	 /* file_index: skb_phone_en_rotate_3_4 */ 
		35,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"#",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 517 */
	 /* file_index: skb_phone_en_rotate_3_5 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+116			/* toggle_index */
	},	

	{
		/* index 518 */
	 /* file_index: skb_phone_sym_en_rotate_0_1 */ 
		44,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_P,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_P,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 519 */
	 /* file_index: skb_phone_sym_en_rotate_0_2 */ 
		49,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 520 */
	 /* file_index: skb_phone_sym_en_rotate_0_3 */ 
		50,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 521 */
	 /* file_index: skb_phone_sym_en_rotate_0_4 */ 
		50,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 522 */
	 /* file_index: skb_phone_sym_en_rotate_0_5 */ 
		43,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PLUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PLUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 523 */
	 /* file_index: skb_phone_sym_en_rotate_1_1 */ 
		59,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_W,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_W,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 524 */
	 /* file_index: skb_phone_sym_en_rotate_1_2 */ 
		44,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L",",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 525 */
	 /* file_index: skb_phone_sym_en_rotate_1_3 */ 
		46,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 526 */
	 /* file_index: skb_phone_sym_en_rotate_1_4 */ 
		54,			/* code */
		11,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 527 */
	 /* file_index: skb_phone_sym_en_rotate_1_5 */ 
		45,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_MINUS,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_MINUS,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 528 */
	 /* file_index: skb_phone_sym_en_rotate_2_1 */ 
		78,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_N,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_N,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 529 */
	 /* file_index: skb_phone_sym_en_rotate_2_2 */ 
		40,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 530 */
	 /* file_index: skb_phone_sym_en_rotate_2_3 */ 
		47,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		318,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 531 */
	 /* file_index: skb_phone_sym_en_rotate_2_4 */ 
		41,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L")",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		483,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		165,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 532 */
	 /* file_index: skb_phone_sym_en_rotate_2_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 533 */
	 /* file_index: skb_phone_sym_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_COMMONKB,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_COMMONKB,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 534 */
	 /* file_index: skb_phone_sym_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		10,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		153,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		495,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 535 */
	 /* file_index: skb_phone_sym_en_rotate_3_3 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		648,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		145,			/* width */
		0,			/* popup_skb */
		toggleStructTable+120			/* toggle_index */
	},	

	{
		/* index 536 */
	 /* file_index: skb_popup_phn_key1_en_rotate_0_1 */ 
		49,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 537 */
	 /* file_index: skb_popup_phn_key1_en_rotate_0_2 */ 
		63,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 538 */
	 /* file_index: skb_popup_phn_key1_en_rotate_0_3 */ 
		33,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 539 */
	 /* file_index: skb_popup_phn_key1_en_rotate_0_4 */ 
		64,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 540 */
	 /* file_index: skb_popup_phn_key2_en_rotate_0_1 */ 
		99,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"c",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 541 */
	 /* file_index: skb_popup_phn_key2_en_rotate_0_2 */ 
		98,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 542 */
	 /* file_index: skb_popup_phn_key2_en_rotate_0_3 */ 
		97,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 543 */
	 /* file_index: skb_popup_phn_key2_en_rotate_0_4 */ 
		50,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 544 */
	 /* file_index: skb_popup_phn_key2_en_rotate_0_5 */ 
		65,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"A",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 545 */
	 /* file_index: skb_popup_phn_key2_en_rotate_0_6 */ 
		66,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"B",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 546 */
	 /* file_index: skb_popup_phn_key2_en_rotate_0_7 */ 
		67,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"C",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 547 */
	 /* file_index: skb_popup_phn_key3_en_rotate_0_1 */ 
		102,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"f",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 548 */
	 /* file_index: skb_popup_phn_key3_en_rotate_0_2 */ 
		101,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"e",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 549 */
	 /* file_index: skb_popup_phn_key3_en_rotate_0_3 */ 
		100,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"d",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 550 */
	 /* file_index: skb_popup_phn_key3_en_rotate_0_4 */ 
		51,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 551 */
	 /* file_index: skb_popup_phn_key3_en_rotate_0_5 */ 
		68,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 552 */
	 /* file_index: skb_popup_phn_key3_en_rotate_0_6 */ 
		69,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"E",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 553 */
	 /* file_index: skb_popup_phn_key3_en_rotate_0_7 */ 
		70,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"F",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 554 */
	 /* file_index: skb_popup_phn_key4_en_rotate_0_1 */ 
		105,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"i",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 555 */
	 /* file_index: skb_popup_phn_key4_en_rotate_0_2 */ 
		104,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"h",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 556 */
	 /* file_index: skb_popup_phn_key4_en_rotate_0_3 */ 
		103,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"g",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 557 */
	 /* file_index: skb_popup_phn_key4_en_rotate_0_4 */ 
		52,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 558 */
	 /* file_index: skb_popup_phn_key4_en_rotate_0_5 */ 
		71,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"G",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 559 */
	 /* file_index: skb_popup_phn_key4_en_rotate_0_6 */ 
		72,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"H",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 560 */
	 /* file_index: skb_popup_phn_key4_en_rotate_0_7 */ 
		73,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"I",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 561 */
	 /* file_index: skb_popup_phn_key5_en_rotate_0_1 */ 
		108,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"l",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 562 */
	 /* file_index: skb_popup_phn_key5_en_rotate_0_2 */ 
		107,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"k",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 563 */
	 /* file_index: skb_popup_phn_key5_en_rotate_0_3 */ 
		106,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"j",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 564 */
	 /* file_index: skb_popup_phn_key5_en_rotate_0_4 */ 
		53,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 565 */
	 /* file_index: skb_popup_phn_key5_en_rotate_0_5 */ 
		74,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"J",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 566 */
	 /* file_index: skb_popup_phn_key5_en_rotate_0_6 */ 
		75,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"K",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 567 */
	 /* file_index: skb_popup_phn_key5_en_rotate_0_7 */ 
		76,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"L",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 568 */
	 /* file_index: skb_popup_phn_key6_en_rotate_0_1 */ 
		111,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"o",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 569 */
	 /* file_index: skb_popup_phn_key6_en_rotate_0_2 */ 
		110,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"n",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 570 */
	 /* file_index: skb_popup_phn_key6_en_rotate_0_3 */ 
		109,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"m",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 571 */
	 /* file_index: skb_popup_phn_key6_en_rotate_0_4 */ 
		54,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 572 */
	 /* file_index: skb_popup_phn_key6_en_rotate_0_5 */ 
		77,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"M",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 573 */
	 /* file_index: skb_popup_phn_key6_en_rotate_0_6 */ 
		78,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"N",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 574 */
	 /* file_index: skb_popup_phn_key6_en_rotate_0_7 */ 
		79,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"O",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 575 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_1 */ 
		115,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"s",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 576 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_2 */ 
		114,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"r",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 577 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_3 */ 
		113,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"q",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 578 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_4 */ 
		112,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"p",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 579 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_5 */ 
		56,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 580 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_6 */ 
		83,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"S",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 581 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_7 */ 
		82,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"R",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 582 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_8 */ 
		81,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Q",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		454,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 583 */
	 /* file_index: skb_popup_phn_key7_en_rotate_0_9 */ 
		80,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		518,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 584 */
	 /* file_index: skb_popup_phn_key8_en_rotate_0_1 */ 
		118,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"v",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 585 */
	 /* file_index: skb_popup_phn_key8_en_rotate_0_2 */ 
		117,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"u",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 586 */
	 /* file_index: skb_popup_phn_key8_en_rotate_0_3 */ 
		116,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"t",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 587 */
	 /* file_index: skb_popup_phn_key8_en_rotate_0_4 */ 
		56,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 588 */
	 /* file_index: skb_popup_phn_key8_en_rotate_0_5 */ 
		84,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"T",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 589 */
	 /* file_index: skb_popup_phn_key8_en_rotate_0_6 */ 
		85,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"U",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 590 */
	 /* file_index: skb_popup_phn_key8_en_rotate_0_7 */ 
		86,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"V",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 591 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_1 */ 
		122,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"z",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 592 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_2 */ 
		121,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"y",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 593 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_3 */ 
		120,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"x",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 594 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_4 */ 
		119,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"w",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 595 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_5 */ 
		57,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 596 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_6 */ 
		87,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"W",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 597 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_7 */ 
		88,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"X",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 598 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_8 */ 
		89,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Y",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		454,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 599 */
	 /* file_index: skb_popup_phn_key9_en_rotate_0_9 */ 
		90,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Z",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		518,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 600 */
	 /* file_index: skb_popup_qwerty_com_en_rotate_0_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".net",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		84,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 601 */
	 /* file_index: skb_popup_qwerty_com_en_rotate_0_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".edu",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		90,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		84,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 602 */
	 /* file_index: skb_popup_qwerty_com_en_rotate_0_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".org",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		174,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		84,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 603 */
	 /* file_index: skb_popup_qwerty_com_en_rotate_0_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".com",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		258,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		84,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 604 */
	 /* file_index: skb_popup_qwerty_fullstop_en_rotate_0_1 */ 
		63,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 605 */
	 /* file_index: skb_popup_qwerty_fullstop_en_rotate_0_2 */ 
		33,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 606 */
	 /* file_index: skb_popup_qwerty_fullstop_en_rotate_0_3 */ 
		59,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 607 */
	 /* file_index: skb_popup_qwerty_fullstop_en_rotate_0_4 */ 
		58,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 608 */
	 /* file_index: skb_popup_qwerty_fullstop_en_rotate_0_5 */ 
		47,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 609 */
	 /* file_index: skb_popup_qwerty_fullstop_en_rotate_0_6 */ 
		46,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 610 */
	 /* file_index: skb_popup_symbol_en_rotate_0_1 */ 
		GUI_VKBD_PEN_V3_SYMBOL_PAGE1,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1/3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 611 */
	 /* file_index: skb_popup_symbol_en_rotate_0_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_PAGE2,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2/3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 612 */
	 /* file_index: skb_popup_symbol_en_rotate_0_3 */ 
		GUI_VKBD_PEN_V3_SYMBOL_PAGE3,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_PAGE3_POPUP,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_PAGE3_POPUP_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 613 */
	 /* file_index: skb_qwerty_en_rotate_0_1 */ 
		113,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"q",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 614 */
	 /* file_index: skb_qwerty_en_rotate_0_2 */ 
		119,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"w",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		86,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 615 */
	 /* file_index: skb_qwerty_en_rotate_0_3 */ 
		101,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"e",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 616 */
	 /* file_index: skb_qwerty_en_rotate_0_4 */ 
		114,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"r",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		242,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 617 */
	 /* file_index: skb_qwerty_en_rotate_0_5 */ 
		116,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"t",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		320,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 618 */
	 /* file_index: skb_qwerty_en_rotate_0_6 */ 
		121,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"y",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		398,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 619 */
	 /* file_index: skb_qwerty_en_rotate_0_7 */ 
		117,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"u",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		476,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 620 */
	 /* file_index: skb_qwerty_en_rotate_0_8 */ 
		105,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"i",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		554,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 621 */
	 /* file_index: skb_qwerty_en_rotate_0_9 */ 
		111,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"o",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		632,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 622 */
	 /* file_index: skb_qwerty_en_rotate_0_10 */ 
		112,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"p",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		710,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 623 */
	 /* file_index: skb_qwerty_en_rotate_1_1 */ 
		97,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		25,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 624 */
	 /* file_index: skb_qwerty_en_rotate_1_2 */ 
		115,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"s",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		103,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 625 */
	 /* file_index: skb_qwerty_en_rotate_1_3 */ 
		100,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"d",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		181,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 626 */
	 /* file_index: skb_qwerty_en_rotate_1_4 */ 
		102,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"f",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		259,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 627 */
	 /* file_index: skb_qwerty_en_rotate_1_5 */ 
		103,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"g",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		337,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 628 */
	 /* file_index: skb_qwerty_en_rotate_1_6 */ 
		104,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"h",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		415,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 629 */
	 /* file_index: skb_qwerty_en_rotate_1_7 */ 
		106,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"j",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		493,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 630 */
	 /* file_index: skb_qwerty_en_rotate_1_8 */ 
		107,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"k",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		571,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 631 */
	 /* file_index: skb_qwerty_en_rotate_1_9 */ 
		108,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"l",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		649,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 632 */
	 /* file_index: skb_qwerty_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SHIFT ,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_SHIFT_LOWER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SHIFT_LOWER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+124			/* toggle_index */
	},	

	{
		/* index 633 */
	 /* file_index: skb_qwerty_en_rotate_2_2 */ 
		122,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"z",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 634 */
	 /* file_index: skb_qwerty_en_rotate_2_3 */ 
		120,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"x",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		186,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 635 */
	 /* file_index: skb_qwerty_en_rotate_2_4 */ 
		99,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"c",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		264,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 636 */
	 /* file_index: skb_qwerty_en_rotate_2_5 */ 
		118,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"v",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 637 */
	 /* file_index: skb_qwerty_en_rotate_2_6 */ 
		98,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		420,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 638 */
	 /* file_index: skb_qwerty_en_rotate_2_7 */ 
		110,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"n",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		498,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 639 */
	 /* file_index: skb_qwerty_en_rotate_2_8 */ 
		109,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"m",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		576,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 640 */
	 /* file_index: skb_qwerty_en_rotate_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		654,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 641 */
	 /* file_index: skb_qwerty_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 642 */
	 /* file_index: skb_qwerty_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOPHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOPHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 643 */
	 /* file_index: skb_qwerty_en_rotate_3_3 */ 
		44,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L",",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 644 */
	 /* file_index: skb_qwerty_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		291,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		216,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 645 */
	 /* file_index: skb_qwerty_en_rotate_3_5 */ 
		46,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		507,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 646 */
	 /* file_index: skb_qwerty_en_rotate_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		590,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 647 */
	 /* file_index: skb_qwerty_en_rotate_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		690,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+128			/* toggle_index */
	},	

	{
		/* index 648 */
	 /* file_index: skb_qwerty_en_rotate_4_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 649 */
	 /* file_index: skb_qwerty_en_rotate_4_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOPHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOPHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 650 */
	 /* file_index: skb_qwerty_en_rotate_4_3 */ 
		64,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		127,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 651 */
	 /* file_index: skb_qwerty_en_rotate_4_4 */ 
		46,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		335,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		127,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 652 */
	 /* file_index: skb_qwerty_en_rotate_4_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".com",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		462,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		127,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 653 */
	 /* file_index: skb_qwerty_en_rotate_4_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		589,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 654 */
	 /* file_index: skb_qwerty_en_rotate_4_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		689,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+132			/* toggle_index */
	},	

	{
		/* index 655 */
	 /* file_index: skb_qwerty_en_rotate_5_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 656 */
	 /* file_index: skb_qwerty_en_rotate_5_2 */ 
		GUI_VKBD_PEN_V3_HIDE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_TOPHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOPHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 657 */
	 /* file_index: skb_qwerty_en_rotate_5_3 */ 
		47,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		127,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 658 */
	 /* file_index: skb_qwerty_en_rotate_5_4 */ 
		46,			/* code */
		1,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		335,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		127,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 659 */
	 /* file_index: skb_qwerty_en_rotate_5_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		8,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".com",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		462,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		127,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 660 */
	 /* file_index: skb_qwerty_en_rotate_5_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		589,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 661 */
	 /* file_index: skb_qwerty_en_rotate_5_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		689,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+136			/* toggle_index */
	},	

	{
		/* index 662 */
	 /* file_index: skb_qwerty_land_doublehw_en_rotate_0_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		10,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 663 */
	 /* file_index: skb_qwerty_land_doublehw_en_rotate_0_2 */ 
		GUI_VKBD_PEN_V3_HANDWRITING_SWITCH,			/* code */
		9,			/* key_type */
		IMG_ID_KEYICON_TOFULLSCR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TOFULLSCR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 664 */
	 /* file_index: skb_qwerty_land_doublehw_en_rotate_0_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		283,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 665 */
	 /* file_index: skb_qwerty_land_doublehw_en_rotate_0_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		10,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		491,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 666 */
	 /* file_index: skb_qwerty_land_doublehw_en_rotate_0_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		9,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		591,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 667 */
	 /* file_index: skb_qwerty_land_doublehw_en_rotate_0_6 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		9,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		691,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+140			/* toggle_index */
	},	

	{
		/* index 668 */
	 /* file_index: skb_qwerty_land_fullhw_en_rotate_0_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		10,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 669 */
	 /* file_index: skb_qwerty_land_fullhw_en_rotate_0_2 */ 
		GUI_VKBD_PEN_V3_HANDWRITING_SWITCH,			/* code */
		9,			/* key_type */
		IMG_ID_KEYICON_TODOUBLESCR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_TODOUBLESCR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 670 */
	 /* file_index: skb_qwerty_land_fullhw_en_rotate_0_3 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		283,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 671 */
	 /* file_index: skb_qwerty_land_fullhw_en_rotate_0_4 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		10,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_PHN,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_PHN,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		491,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		keyBoardTable+0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 672 */
	 /* file_index: skb_qwerty_land_fullhw_en_rotate_0_5 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		9,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		591,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 673 */
	 /* file_index: skb_qwerty_land_fullhw_en_rotate_0_6 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		9,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		691,			/* pos_x */
		0,			/* pos_y */
		72,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+144			/* toggle_index */
	},	

	{
		/* index 674 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_1 */ 
		49,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 675 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_2 */ 
		50,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		86,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 676 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_3 */ 
		51,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 677 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_4 */ 
		52,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		242,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 678 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_5 */ 
		53,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		320,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 679 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_6 */ 
		54,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		398,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 680 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_7 */ 
		55,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		476,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 681 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_8 */ 
		56,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		554,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 682 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_9 */ 
		57,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		632,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 683 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_0_10 */ 
		48,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		710,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 684 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_1 */ 
		64,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 685 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_2 */ 
		35,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\#",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		86,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 686 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_3 */ 
		36,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"$",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 687 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_4 */ 
		37,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"%",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		242,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 688 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_5 */ 
		38,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"&",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		320,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 689 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_6 */ 
		42,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"*",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		398,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 690 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_7 */ 
		45,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		476,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 691 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_8 */ 
		95,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"_",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		554,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 692 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_9 */ 
		40,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		632,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 693 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_1_10 */ 
		41,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L")",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		710,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 694 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE1,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE1,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 695 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_2 */ 
		33,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 696 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_3 */ 
		34,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\"",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		186,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 697 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_4 */ 
		44,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"'",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		264,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 698 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_5 */ 
		58,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 699 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_6 */ 
		59,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		420,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 700 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_7 */ 
		47,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"/",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		498,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 701 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_8 */ 
		63,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\?",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		576,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 702 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		654,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 703 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 704 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 705 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_3_3 */ 
		44,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L",",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 706 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		291,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		216,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 707 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_3_5 */ 
		46,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L".",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		507,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 708 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		590,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 709 */
	 /* file_index: skb_qwerty_symbol_1_en_rotate_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		690,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+148			/* toggle_index */
	},	

	{
		/* index 710 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_1 */ 
		126,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 711 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_2 */ 
		177,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xb1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		86,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 712 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_3 */ 
		215,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xd7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 713 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_4 */ 
		247,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		242,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 714 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_5 */ 
		183,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xb7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		320,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 715 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_6 */ 
		176,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xb0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		398,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 716 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_7 */ 
		60,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		476,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 717 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_8 */ 
		62,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L">",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		554,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 718 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_9 */ 
		123,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"{",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		632,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 719 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_0_10 */ 
		125,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"}",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		710,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 720 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_1 */ 
		169,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xa9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 721 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_2 */ 
		65505,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xffe1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		86,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 722 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_3 */ 
		8364,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x20ac",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 723 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_4 */ 
		94,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		242,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 724 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_5 */ 
		174,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xae",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		320,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 725 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_6 */ 
		8457,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2109",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		398,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 726 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_7 */ 
		43,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		476,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 727 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_8 */ 
		61,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		554,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 728 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_9 */ 
		91,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"[",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		632,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 729 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_1_10 */ 
		93,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"]",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		710,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 730 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE2,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE2,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 731 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_2 */ 
		8482,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2122",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 732 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_3 */ 
		171,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xab",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		186,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 733 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_4 */ 
		187,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xbb",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		264,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 734 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_5 */ 
		65504,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xffe0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 735 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_6 */ 
		124,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"|",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		420,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 736 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_7 */ 
		92,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\\",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		498,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 737 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_8 */ 
		8730,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x221a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		576,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 738 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		654,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 739 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 740 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 741 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_3_3 */ 
		167,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xa7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 742 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_KEYICON_SPACE_HL,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		291,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		216,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 743 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_3_5 */ 
		8230,			/* code */
		0,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2026",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		507,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 744 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		590,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 745 */
	 /* file_index: skb_qwerty_symbol_2_en_rotate_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		690,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+152			/* toggle_index */
	},	

	{
		/* index 746 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 747 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		86,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 748 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 749 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		242,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 750 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		320,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 751 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_6 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		398,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 752 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_7 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-(",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		476,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 753 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_8 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L";-)",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		554,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 754 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_9 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-D",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		632,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 755 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_0_10 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":-P",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		710,			/* pos_x */
		2,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 756 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_1 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":$",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 757 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":S",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		86,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 758 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^-^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		164,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 759 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-.-!",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		242,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 760 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=_0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		320,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 761 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_6 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"-_-#",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		398,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 762 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_7 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"T.T",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		476,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 763 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_8 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\@.\@",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		554,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 764 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_9 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":<",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		632,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 765 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_1_10 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L":>",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		710,			/* pos_x */
		67,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 766 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_1 */ 
		GUI_VKBD_PEN_V3_SYMBOLE_SWITCH,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_PAGE3,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_PAGE3,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 767 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_2 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"><",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 768 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2299\x2299",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		186,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 769 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_4 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x2229_\x2229",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		264,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 770 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^o^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		342,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 771 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_6 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"+_+",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		420,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 772 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_7 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"=_=",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		498,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 773 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_8 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"^3^",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		576,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		78,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 774 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_2_9 */ 
		GUI_VKBD_PEN_V3_DELETE,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_DELETE,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_DELETE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		654,			/* pos_x */
		132,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 775 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_3_1 */ 
		GUI_VKBD_PEN_V3_CHANGE_MODE,			/* code */
		3,			/* key_type */
		IMG_ID_KEYICON_INDICATOR,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_INDICATOR,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		8,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 776 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_3_2 */ 
		GUI_VKBD_PEN_V3_SYMBOL_FULL_HALF,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_HALFPUNCTUATION,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_HALFPUNCTUATION,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		108,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 777 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_3_3 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"~~",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		208,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 778 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_3_4 */ 
		GUI_VKBD_PEN_V3_SPACE ,			/* code */
		5,			/* key_type */
		IMG_ID_KEYICON_SPACE,			/* icon */
		0,			/* icon_aux */
		IMG_ID_POPUPICON_SPACE,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SPACE,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		291,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		216,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 779 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_3_5 */ 
		GUI_VKBD_PEN_V3_CHAR_I_STRING,			/* code */
		7,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"Orz",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		507,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		83,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 780 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_3_6 */ 
		GUI_VKBD_PEN_V3_SYMBPICKER,			/* code */
		4,			/* key_type */
		IMG_ID_KEYICON_SYMBOL_QWERTY,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_SYMBOL_QWERTY,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		590,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 781 */
	 /* file_index: skb_qwerty_symbol_3_en_rotate_3_7 */ 
		GUI_VKBD_PEN_V3_ENTER,			/* code */
		2,			/* key_type */
		IMG_ID_KEYICON_ENTER,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		0,			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		IMG_ID_POPUPICON_ENTER,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		690,			/* pos_x */
		197,			/* pos_y */
		65,			/* height */
		100,			/* width */
		0,			/* popup_skb */
		toggleStructTable+156			/* toggle_index */
	},	

	{
		/* index 782 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_1 */ 
		97,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"a",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		6,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 783 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_2 */ 
		224,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe0",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		70,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 784 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_3 */ 
		225,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe1",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		134,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 785 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_4 */ 
		226,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		198,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 786 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_5 */ 
		228,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		262,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 787 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_6 */ 
		230,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		326,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 788 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_7 */ 
		227,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		390,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 789 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_8 */ 
		229,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe5",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		454,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 790 */
	 /* file_index: skb_special_alpha_a_en_rotate_0_9 */ 
		257,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0101",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		518,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 791 */
	 /* file_index: skb_special_alpha_c_en_rotate_0_1 */ 
		231,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe7",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 792 */
	 /* file_index: skb_special_alpha_c_en_rotate_0_2 */ 
		99,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"c",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		69,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 793 */
	 /* file_index: skb_special_alpha_e_en_rotate_0_1 */ 
		101,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"e",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		4,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		62,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 794 */
	 /* file_index: skb_special_alpha_e_en_rotate_0_2 */ 
		232,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		66,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		62,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 795 */
	 /* file_index: skb_special_alpha_e_en_rotate_0_3 */ 
		233,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xe9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		128,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		62,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 796 */
	 /* file_index: skb_special_alpha_e_en_rotate_0_4 */ 
		234,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xea",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		190,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		62,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 797 */
	 /* file_index: skb_special_alpha_e_en_rotate_0_5 */ 
		235,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xeb",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		252,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		62,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 798 */
	 /* file_index: skb_special_alpha_e_en_rotate_0_6 */ 
		275,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0113",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		314,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		62,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 799 */
	 /* file_index: skb_special_alpha_i_en_rotate_0_1 */ 
		299,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x012b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		11,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		61,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 800 */
	 /* file_index: skb_special_alpha_i_en_rotate_0_2 */ 
		237,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xed",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		72,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		61,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 801 */
	 /* file_index: skb_special_alpha_i_en_rotate_0_3 */ 
		239,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xef",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		133,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		61,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 802 */
	 /* file_index: skb_special_alpha_i_en_rotate_0_4 */ 
		238,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xee",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		194,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		61,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 803 */
	 /* file_index: skb_special_alpha_i_en_rotate_0_5 */ 
		105,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"i",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		255,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		61,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 804 */
	 /* file_index: skb_special_alpha_n_en_rotate_0_1 */ 
		328,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0148",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		5,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 805 */
	 /* file_index: skb_special_alpha_n_en_rotate_0_2 */ 
		110,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"n",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		69,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 806 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_1 */ 
		333,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x014d",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		12,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 807 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_2 */ 
		248,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf8",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		76,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 808 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_3 */ 
		339,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x0153",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		140,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 809 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_4 */ 
		243,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf3",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		204,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 810 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_5 */ 
		242,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf2",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		268,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 811 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_6 */ 
		246,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf6",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		332,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 812 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_7 */ 
		244,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf4",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		396,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 813 */
	 /* file_index: skb_special_alpha_o_en_rotate_0_8 */ 
		111,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"o",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		460,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		64,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 814 */
	 /* file_index: skb_special_alpha_u_en_rotate_0_1 */ 
		363,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\x016b",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		13,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		63,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 815 */
	 /* file_index: skb_special_alpha_u_en_rotate_0_2 */ 
		250,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xfa",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		76,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		63,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 816 */
	 /* file_index: skb_special_alpha_u_en_rotate_0_3 */ 
		249,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xf9",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		139,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		63,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 817 */
	 /* file_index: skb_special_alpha_u_en_rotate_0_4 */ 
		252,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xfc",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		202,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		63,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 818 */
	 /* file_index: skb_special_alpha_u_en_rotate_0_5 */ 
		251,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"\xfb",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		265,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		63,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	

	{
		/* index 819 */
	 /* file_index: skb_special_alpha_u_en_rotate_0_6 */ 
		117,			/* code */
		5,			/* key_type */
		0,			/* icon */
		0,			/* icon_aux */
		0,			/* icon_hl */
		0,			/* icon_aux_hl */
		L"u",			/* label */
		0,			/* label_aux */
		0,			/* label_balloon */
		0,			/* icon_balloon */
		0,			/* code_longpress */
		0,			/* label_balloon_longpress */
		0,			/* icon_balloon_longpress */
		328,			/* pos_x */
		0,			/* pos_y */
		81,			/* height */
		63,			/* width */
		0,			/* popup_skb */
		0			/* toggle_index */
	},	
};

const gui_virtual_keyboard_keytype_struct	keyTypeTable[] = 
{
	{
		/* index 0 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 1 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 2 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 3 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 4 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 5 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0xff494949,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0xffFFFFFF,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0xffFFFFFF,			/*bltext_color2*/
		-30,			/*main_regx*/
		0,			/*main_regy*/
		15,			/*aux_regx*/
		5,			/*aux_regy*/
		23*LCM_DPI/160,			/*text_size1*/
		16*LCM_DPI/160,			/*text_size2*/
		23*LCM_DPI/160,			/*hltext_size1*/
		16*LCM_DPI/160,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		24*LCM_DPI/160			/*bltext_size2*/
	},

	{
		/* index 6 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0xff494949,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0xffFFFFFF,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0xffFFFFFF,			/*bltext_color2*/
		-20,			/*main_regx*/
		0,			/*main_regy*/
		20,			/*aux_regx*/
		5,			/*aux_regy*/
		23*LCM_DPI/160,			/*text_size1*/
		18*LCM_DPI/160,			/*text_size2*/
		23*LCM_DPI/160,			/*hltext_size1*/
		18*LCM_DPI/160,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		35*LCM_DPI/160			/*bltext_size2*/
	},

	{
		/* index 7 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0xff494949,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0xffFFFFFF,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0xffFFFFFF,			/*bltext_color2*/
		-32,			/*main_regx*/
		0,			/*main_regy*/
		12,			/*aux_regx*/
		8,			/*aux_regy*/
		23*LCM_DPI/160,			/*text_size1*/
		11*LCM_DPI/160,			/*text_size2*/
		23*LCM_DPI/160,			/*hltext_size1*/
		11*LCM_DPI/160,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		18*LCM_DPI/160			/*bltext_size2*/
	},

	{
		/* index 8 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff494949,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		16*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		16*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		28*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 9 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 10 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 11 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff767676,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 12 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		22*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		22*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 13 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		22*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		22*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 14 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 15 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 16 */
		IMG_ID_HIGHLIGHT_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 17 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		18*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 18 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		16.5*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		16.5*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		16.5*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 19 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		15*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		15*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 20 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		15*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		15*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 21 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		11*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		11*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 22 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 23 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 24 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 25 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xff696969,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 26 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xff696969,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 27 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xff696969,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 28 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 29 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 30 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.8f,			/*balloon_ratio_height*/
		1.5f,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 31 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xff696969,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 32 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xff696969,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 33 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xff696969,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 34 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 35 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 36 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.8f,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 37 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_HIGHLIGHT_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 38 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_HIGHLIGHT_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 39 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_HIGHLIGHT_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 40 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_FUNCTION_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 41 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_FUNCTION_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 42 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0xff494949,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0xffFFFFFF,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0xffFFFFFF,			/*bltext_color2*/
		-25,			/*main_regx*/
		0,			/*main_regy*/
		12,			/*aux_regx*/
		6,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		17*LCM_DPI/160,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		17*LCM_DPI/160,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		25*LCM_DPI/160			/*bltext_size2*/
	},

	{
		/* index 43 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0xff494949,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0xffFFFFFF,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0xffFFFFFF,			/*bltext_color2*/
		-25,			/*main_regx*/
		0,			/*main_regy*/
		12,			/*aux_regx*/
		5,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		18*LCM_DPI/160,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		18*LCM_DPI/160,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		35*LCM_DPI/160			/*bltext_size2*/
	},

	{
		/* index 44 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0xff494949,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0xffFFFFFF,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0xffFFFFFF,			/*bltext_color2*/
		-30,			/*main_regx*/
		0,			/*main_regy*/
		10,			/*aux_regx*/
		8,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		14*LCM_DPI/160,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		14*LCM_DPI/160,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		20*LCM_DPI/160			/*bltext_size2*/
	},

	{
		/* index 45 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff494949,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 46 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 47 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 48 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff767676,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		25*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		25*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		35*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 49 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		23*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		23*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 50 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		23*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		23*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 51 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_FUNCTION_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 52 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_FUNCTION_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 53 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_FUNCTION_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 54 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		18*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 55 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		16.5*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		16.5*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		16.5*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 56 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		18*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		18*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		30*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 57 */
		IMG_ID_CHARACTER_BKG_9SLICE,			/*bg*/
		IMG_ID_CHARACTER_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		0,			/*balloon_ratio_height*/
		0,			/*balloon_ratio_width*/
		0xff000000,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		23*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		23*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 58 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_FUNCTION_BKG_9SLICE,			/*hlbg*/
		0,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.2f,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

	{
		/* index 59 */
		IMG_ID_FUNCTION_BKG_9SLICE,			/*bg*/
		IMG_ID_FUNCTION_BKG_9SLICE,			/*hlbg*/
		IMG_ID_BALLOON_BKG2_9SLICE,			/*balloon_bg*/
		1.5f,			/*balloon_ratio_height*/
		1.2f,			/*balloon_ratio_width*/
		0xffFFFFFF,			/*text_color1*/
		0,			/*text_color2*/
		0xffFFFFFF,			/*hltext_color1*/
		0,			/*hltext_color2*/
		0xffFFFFFF,			/*bltext_color1*/
		0,			/*bltext_color2*/
		0,			/*main_regx*/
		0,			/*main_regy*/
		0,			/*aux_regx*/
		0,			/*aux_regy*/
		20*LCM_DPI/160,			/*text_size1*/
		0,			/*text_size2*/
		20*LCM_DPI/160,			/*hltext_size1*/
		0,			/*hltext_size2*/
		40*LCM_DPI/160,			/*bltext_size1*/
		0			/*bltext_size2*/
	},

};

const gui_virtual_keyboard_row_struct		rowTable[] = 
{
		/* index 0 */
	{	-1,	5,	keyTable+0	},		/* hwkb_fullscreen_bottom_en_0 */
		/* index 1 */
	{	-1,	6,	keyTable+5	},		/* hwkb_fullscreen_land_revise_en_0 */
		/* index 2 */
	{	-1,	7,	keyTable+11	},		/* hwkb_fullscreen_top1_en_0 */
		/* index 3 */
	{	-1,	1,	keyTable+18	},		/* hwkb_fullscreen_top2_en_0 */
		/* index 4 */
	{	-1,	5,	keyTable+19	},		/* hwkb_halfscreen_bottom_en_0 */
		/* index 5 */
	{	-1,	1,	keyTable+24	},		/* hwkb_halfscreen_top_en_0 */
		/* index 6 */
	{	-1,	1,	keyTable+25	},		/* hwkb_halfscreen_top_en_1 */
		/* index 7 */
	{	-1,	1,	keyTable+26	},		/* hwkb_halfscreen_top_en_2 */
		/* index 8 */
	{	-1,	1,	keyTable+27	},		/* hwkb_halfscreen_top_en_3 */
		/* index 9 */
	{	-1,	5,	keyTable+28	},		/* skb_phn_en_0 */
		/* index 10 */
	{	-1,	5,	keyTable+33	},		/* skb_phn_en_1 */
		/* index 11 */
	{	-1,	5,	keyTable+38	},		/* skb_phn_en_2 */
		/* index 12 */
	{	-1,	5,	keyTable+43	},		/* skb_phn_en_3 */
		/* index 13 */
	{	-1,	5,	keyTable+48	},		/* skb_phn_symbol_1_en_0 */
		/* index 14 */
	{	-1,	5,	keyTable+53	},		/* skb_phn_symbol_1_en_1 */
		/* index 15 */
	{	-1,	5,	keyTable+58	},		/* skb_phn_symbol_1_en_2 */
		/* index 16 */
	{	-1,	5,	keyTable+63	},		/* skb_phn_symbol_1_en_3 */
		/* index 17 */
	{	-1,	5,	keyTable+68	},		/* skb_phn_symbol_2_en_0 */
		/* index 18 */
	{	-1,	5,	keyTable+73	},		/* skb_phn_symbol_2_en_1 */
		/* index 19 */
	{	-1,	5,	keyTable+78	},		/* skb_phn_symbol_2_en_2 */
		/* index 20 */
	{	-1,	5,	keyTable+83	},		/* skb_phn_symbol_2_en_3 */
		/* index 21 */
	{	-1,	5,	keyTable+88	},		/* skb_phn_symbol_3_en_0 */
		/* index 22 */
	{	-1,	5,	keyTable+93	},		/* skb_phn_symbol_3_en_1 */
		/* index 23 */
	{	-1,	5,	keyTable+98	},		/* skb_phn_symbol_3_en_2 */
		/* index 24 */
	{	-1,	5,	keyTable+103	},		/* skb_phn_symbol_3_en_3 */
		/* index 25 */
	{	-1,	5,	keyTable+108	},		/* skb_phone_en_0 */
		/* index 26 */
	{	-1,	5,	keyTable+113	},		/* skb_phone_en_1 */
		/* index 27 */
	{	-1,	5,	keyTable+118	},		/* skb_phone_en_2 */
		/* index 28 */
	{	-1,	5,	keyTable+123	},		/* skb_phone_en_3 */
		/* index 29 */
	{	-1,	5,	keyTable+128	},		/* skb_phone_sym_en_0 */
		/* index 30 */
	{	-1,	5,	keyTable+133	},		/* skb_phone_sym_en_1 */
		/* index 31 */
	{	-1,	5,	keyTable+138	},		/* skb_phone_sym_en_2 */
		/* index 32 */
	{	-1,	3,	keyTable+143	},		/* skb_phone_sym_en_3 */
		/* index 33 */
	{	-1,	4,	keyTable+146	},		/* skb_popup_phn_key1_en_0 */
		/* index 34 */
	{	-1,	7,	keyTable+150	},		/* skb_popup_phn_key2_en_0 */
		/* index 35 */
	{	-1,	7,	keyTable+157	},		/* skb_popup_phn_key3_en_0 */
		/* index 36 */
	{	-1,	7,	keyTable+164	},		/* skb_popup_phn_key4_en_0 */
		/* index 37 */
	{	-1,	7,	keyTable+171	},		/* skb_popup_phn_key5_en_0 */
		/* index 38 */
	{	-1,	7,	keyTable+178	},		/* skb_popup_phn_key6_en_0 */
		/* index 39 */
	{	-1,	4,	keyTable+185	},		/* skb_popup_phn_key7_en_0 */
		/* index 40 */
	{	-1,	5,	keyTable+189	},		/* skb_popup_phn_key7_en_1 */
		/* index 41 */
	{	-1,	7,	keyTable+194	},		/* skb_popup_phn_key8_en_0 */
		/* index 42 */
	{	-1,	4,	keyTable+201	},		/* skb_popup_phn_key9_en_0 */
		/* index 43 */
	{	-1,	5,	keyTable+205	},		/* skb_popup_phn_key9_en_1 */
		/* index 44 */
	{	-1,	4,	keyTable+210	},		/* skb_popup_qwerty_com_en_0 */
		/* index 45 */
	{	-1,	6,	keyTable+214	},		/* skb_popup_qwerty_fullstop_en_0 */
		/* index 46 */
	{	-1,	3,	keyTable+220	},		/* skb_popup_symbol_en_0 */
		/* index 47 */
	{	-1,	10,	keyTable+223	},		/* skb_qwerty_en_0 */
		/* index 48 */
	{	-1,	9,	keyTable+233	},		/* skb_qwerty_en_1 */
		/* index 49 */
	{	-1,	9,	keyTable+242	},		/* skb_qwerty_en_2 */
		/* index 50 */
	{	1,	7,	keyTable+251	},		/* skb_qwerty_en_3 */
		/* index 51 */
	{	2,	7,	keyTable+258	},		/* skb_qwerty_en_4 */
		/* index 52 */
	{	3,	7,	keyTable+265	},		/* skb_qwerty_en_5 */
		/* index 53 */
	{	-1,	10,	keyTable+272	},		/* skb_qwerty_symbol_1_en_0 */
		/* index 54 */
	{	-1,	10,	keyTable+282	},		/* skb_qwerty_symbol_1_en_1 */
		/* index 55 */
	{	-1,	9,	keyTable+292	},		/* skb_qwerty_symbol_1_en_2 */
		/* index 56 */
	{	-1,	7,	keyTable+301	},		/* skb_qwerty_symbol_1_en_3 */
		/* index 57 */
	{	-1,	10,	keyTable+308	},		/* skb_qwerty_symbol_2_en_0 */
		/* index 58 */
	{	-1,	10,	keyTable+318	},		/* skb_qwerty_symbol_2_en_1 */
		/* index 59 */
	{	-1,	9,	keyTable+328	},		/* skb_qwerty_symbol_2_en_2 */
		/* index 60 */
	{	-1,	7,	keyTable+337	},		/* skb_qwerty_symbol_2_en_3 */
		/* index 61 */
	{	-1,	10,	keyTable+344	},		/* skb_qwerty_symbol_3_en_0 */
		/* index 62 */
	{	-1,	10,	keyTable+354	},		/* skb_qwerty_symbol_3_en_1 */
		/* index 63 */
	{	-1,	9,	keyTable+364	},		/* skb_qwerty_symbol_3_en_2 */
		/* index 64 */
	{	-1,	7,	keyTable+373	},		/* skb_qwerty_symbol_3_en_3 */
		/* index 65 */
	{	-1,	4,	keyTable+380	},		/* skb_special_alpha_a_en_0 */
		/* index 66 */
	{	-1,	5,	keyTable+384	},		/* skb_special_alpha_a_en_1 */
		/* index 67 */
	{	-1,	2,	keyTable+389	},		/* skb_special_alpha_c_en_0 */
		/* index 68 */
	{	-1,	6,	keyTable+391	},		/* skb_special_alpha_e_en_0 */
		/* index 69 */
	{	-1,	5,	keyTable+397	},		/* skb_special_alpha_i_en_0 */
		/* index 70 */
	{	-1,	2,	keyTable+402	},		/* skb_special_alpha_n_en_0 */
		/* index 71 */
	{	-1,	8,	keyTable+404	},		/* skb_special_alpha_o_en_0 */
		/* index 72 */
	{	-1,	6,	keyTable+412	},		/* skb_special_alpha_u_en_0 */
		/* index 73 */
	{	-1,	5,	keyTable+418	},		/* skb_phn_en_rotate_0 */
		/* index 74 */
	{	-1,	5,	keyTable+423	},		/* skb_phn_en_rotate_1 */
		/* index 75 */
	{	-1,	5,	keyTable+428	},		/* skb_phn_en_rotate_2 */
		/* index 76 */
	{	-1,	5,	keyTable+433	},		/* skb_phn_en_rotate_3 */
		/* index 77 */
	{	-1,	5,	keyTable+438	},		/* skb_phn_symbol_1_en_rotate_0 */
		/* index 78 */
	{	-1,	5,	keyTable+443	},		/* skb_phn_symbol_1_en_rotate_1 */
		/* index 79 */
	{	-1,	5,	keyTable+448	},		/* skb_phn_symbol_1_en_rotate_2 */
		/* index 80 */
	{	-1,	5,	keyTable+453	},		/* skb_phn_symbol_1_en_rotate_3 */
		/* index 81 */
	{	-1,	5,	keyTable+458	},		/* skb_phn_symbol_2_en_rotate_0 */
		/* index 82 */
	{	-1,	5,	keyTable+463	},		/* skb_phn_symbol_2_en_rotate_1 */
		/* index 83 */
	{	-1,	5,	keyTable+468	},		/* skb_phn_symbol_2_en_rotate_2 */
		/* index 84 */
	{	-1,	5,	keyTable+473	},		/* skb_phn_symbol_2_en_rotate_3 */
		/* index 85 */
	{	-1,	5,	keyTable+478	},		/* skb_phn_symbol_3_en_rotate_0 */
		/* index 86 */
	{	-1,	5,	keyTable+483	},		/* skb_phn_symbol_3_en_rotate_1 */
		/* index 87 */
	{	-1,	5,	keyTable+488	},		/* skb_phn_symbol_3_en_rotate_2 */
		/* index 88 */
	{	-1,	5,	keyTable+493	},		/* skb_phn_symbol_3_en_rotate_3 */
		/* index 89 */
	{	-1,	5,	keyTable+498	},		/* skb_phone_en_rotate_0 */
		/* index 90 */
	{	-1,	5,	keyTable+503	},		/* skb_phone_en_rotate_1 */
		/* index 91 */
	{	-1,	5,	keyTable+508	},		/* skb_phone_en_rotate_2 */
		/* index 92 */
	{	-1,	5,	keyTable+513	},		/* skb_phone_en_rotate_3 */
		/* index 93 */
	{	-1,	5,	keyTable+518	},		/* skb_phone_sym_en_rotate_0 */
		/* index 94 */
	{	-1,	5,	keyTable+523	},		/* skb_phone_sym_en_rotate_1 */
		/* index 95 */
	{	-1,	5,	keyTable+528	},		/* skb_phone_sym_en_rotate_2 */
		/* index 96 */
	{	-1,	3,	keyTable+533	},		/* skb_phone_sym_en_rotate_3 */
		/* index 97 */
	{	-1,	4,	keyTable+536	},		/* skb_popup_phn_key1_en_rotate_0 */
		/* index 98 */
	{	-1,	7,	keyTable+540	},		/* skb_popup_phn_key2_en_rotate_0 */
		/* index 99 */
	{	-1,	7,	keyTable+547	},		/* skb_popup_phn_key3_en_rotate_0 */
		/* index 100 */
	{	-1,	7,	keyTable+554	},		/* skb_popup_phn_key4_en_rotate_0 */
		/* index 101 */
	{	-1,	7,	keyTable+561	},		/* skb_popup_phn_key5_en_rotate_0 */
		/* index 102 */
	{	-1,	7,	keyTable+568	},		/* skb_popup_phn_key6_en_rotate_0 */
		/* index 103 */
	{	-1,	9,	keyTable+575	},		/* skb_popup_phn_key7_en_rotate_0 */
		/* index 104 */
	{	-1,	7,	keyTable+584	},		/* skb_popup_phn_key8_en_rotate_0 */
		/* index 105 */
	{	-1,	9,	keyTable+591	},		/* skb_popup_phn_key9_en_rotate_0 */
		/* index 106 */
	{	-1,	4,	keyTable+600	},		/* skb_popup_qwerty_com_en_rotate_0 */
		/* index 107 */
	{	-1,	6,	keyTable+604	},		/* skb_popup_qwerty_fullstop_en_rotate_0 */
		/* index 108 */
	{	-1,	3,	keyTable+610	},		/* skb_popup_symbol_en_rotate_0 */
		/* index 109 */
	{	-1,	10,	keyTable+613	},		/* skb_qwerty_en_rotate_0 */
		/* index 110 */
	{	-1,	9,	keyTable+623	},		/* skb_qwerty_en_rotate_1 */
		/* index 111 */
	{	-1,	9,	keyTable+632	},		/* skb_qwerty_en_rotate_2 */
		/* index 112 */
	{	1,	7,	keyTable+641	},		/* skb_qwerty_en_rotate_3 */
		/* index 113 */
	{	2,	7,	keyTable+648	},		/* skb_qwerty_en_rotate_4 */
		/* index 114 */
	{	3,	7,	keyTable+655	},		/* skb_qwerty_en_rotate_5 */
		/* index 115 */
	{	-1,	6,	keyTable+662	},		/* skb_qwerty_land_doublehw_en_rotate_0 */
		/* index 116 */
	{	-1,	6,	keyTable+668	},		/* skb_qwerty_land_fullhw_en_rotate_0 */
		/* index 117 */
	{	-1,	10,	keyTable+674	},		/* skb_qwerty_symbol_1_en_rotate_0 */
		/* index 118 */
	{	-1,	10,	keyTable+684	},		/* skb_qwerty_symbol_1_en_rotate_1 */
		/* index 119 */
	{	-1,	9,	keyTable+694	},		/* skb_qwerty_symbol_1_en_rotate_2 */
		/* index 120 */
	{	-1,	7,	keyTable+703	},		/* skb_qwerty_symbol_1_en_rotate_3 */
		/* index 121 */
	{	-1,	10,	keyTable+710	},		/* skb_qwerty_symbol_2_en_rotate_0 */
		/* index 122 */
	{	-1,	10,	keyTable+720	},		/* skb_qwerty_symbol_2_en_rotate_1 */
		/* index 123 */
	{	-1,	9,	keyTable+730	},		/* skb_qwerty_symbol_2_en_rotate_2 */
		/* index 124 */
	{	-1,	7,	keyTable+739	},		/* skb_qwerty_symbol_2_en_rotate_3 */
		/* index 125 */
	{	-1,	10,	keyTable+746	},		/* skb_qwerty_symbol_3_en_rotate_0 */
		/* index 126 */
	{	-1,	10,	keyTable+756	},		/* skb_qwerty_symbol_3_en_rotate_1 */
		/* index 127 */
	{	-1,	9,	keyTable+766	},		/* skb_qwerty_symbol_3_en_rotate_2 */
		/* index 128 */
	{	-1,	7,	keyTable+775	},		/* skb_qwerty_symbol_3_en_rotate_3 */
		/* index 129 */
	{	-1,	9,	keyTable+782	},		/* skb_special_alpha_a_en_rotate_0 */
		/* index 130 */
	{	-1,	2,	keyTable+791	},		/* skb_special_alpha_c_en_rotate_0 */
		/* index 131 */
	{	-1,	6,	keyTable+793	},		/* skb_special_alpha_e_en_rotate_0 */
		/* index 132 */
	{	-1,	5,	keyTable+799	},		/* skb_special_alpha_i_en_rotate_0 */
		/* index 133 */
	{	-1,	2,	keyTable+804	},		/* skb_special_alpha_n_en_rotate_0 */
		/* index 134 */
	{	-1,	8,	keyTable+806	},		/* skb_special_alpha_o_en_rotate_0 */
		/* index 135 */
	{	-1,	6,	keyTable+814	},		/* skb_special_alpha_u_en_rotate_0 */
};

const wgui_virtual_keyboard_layout_struct		keyBoardTable[] = 
{
		/* index 0 : hwkb_fullscreen_bottom_en */
	{
		80,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		1,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+0,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		11,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 1 : hwkb_fullscreen_land_revise_en */
	{
		96,			/*keyboard height*/
		240,			/*keyboard width*/
		IMG_ID_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		0,			/*key_xmargin*/
		0,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+1,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		11,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 2 : hwkb_fullscreen_top1_en */
	{
		80,			/*keyboard height*/
		408,			/*keyboard width*/
		0,			/*skb_bg*/
		0,			/*key_xmargin*/
		0,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+2,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		11,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 3 : hwkb_fullscreen_top2_en */
	{
		80,			/*keyboard height*/
		62,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		1,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+3,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		11,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 4 : hwkb_halfscreen_bottom_en */
	{
		72,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		1,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+4,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		8,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 5 : hwkb_halfscreen_top_en */
	{
		272,			/*keyboard height*/
		62,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		0,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+5,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		8,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 6 : skb_phn_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+9,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+0			/*skb_template_phn_port0*/
	},
		/* index 7 : skb_phn_symbol_1_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+13,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_1,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+0			/*skb_template_phn_port0*/
	},
		/* index 8 : skb_phn_symbol_2_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+17,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_2,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+0			/*skb_template_phn_port0*/
	},
		/* index 9 : skb_phn_symbol_3_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+21,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_3,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+0			/*skb_template_phn_port0*/
	},
		/* index 10 : skb_phone_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+25,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_PHONE,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+0			/*skb_template_phn_port0*/
	},
		/* index 11 : skb_phone_sym_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+29,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_PHONE,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+0			/*skb_template_phn_port0*/
	},
		/* index 12 : skb_popup_phn_key1_en */
	{
		88,			/*keyboard height*/
		225,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+33,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 13 : skb_popup_phn_key2_en */
	{
		88,			/*keyboard height*/
		388,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+34,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 14 : skb_popup_phn_key3_en */
	{
		88,			/*keyboard height*/
		388,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+35,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 15 : skb_popup_phn_key4_en */
	{
		88,			/*keyboard height*/
		388,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+36,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 16 : skb_popup_phn_key5_en */
	{
		88,			/*keyboard height*/
		388,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+37,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 17 : skb_popup_phn_key6_en */
	{
		88,			/*keyboard height*/
		388,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+38,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 18 : skb_popup_phn_key7_en */
	{
		176,			/*keyboard height*/
		278,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		4,			/*key_ymargin*/
		2,			/*row_num*/
		rowTable+39,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 19 : skb_popup_phn_key8_en */
	{
		88,			/*keyboard height*/
		388,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+41,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 20 : skb_popup_phn_key9_en */
	{
		176,			/*keyboard height*/
		278,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		4,			/*key_ymargin*/
		2,			/*row_num*/
		rowTable+42,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 21 : skb_popup_qwerty_com_en */
	{
		88,			/*keyboard height*/
		288,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+44,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 22 : skb_popup_qwerty_fullstop_en */
	{
		88,			/*keyboard height*/
		336,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+45,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 23 : skb_popup_symbol_en */
	{
		88,			/*keyboard height*/
		172,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+46,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 24 : skb_qwerty_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		6,			/*row_num*/
		rowTable+47,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 25 : skb_qwerty_symbol_1_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+53,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_1,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 26 : skb_qwerty_symbol_2_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+57,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_2,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 27 : skb_qwerty_symbol_3_en */
	{
		344,			/*keyboard height*/
		480,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+61,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_3,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 28 : skb_special_alpha_a_en */
	{
		176,			/*keyboard height*/
		278,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		4,			/*key_ymargin*/
		2,			/*row_num*/
		rowTable+65,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 29 : skb_special_alpha_c_en */
	{
		88,			/*keyboard height*/
		120,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+67,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 30 : skb_special_alpha_e_en */
	{
		88,			/*keyboard height*/
		369,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+68,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 31 : skb_special_alpha_i_en */
	{
		88,			/*keyboard height*/
		278,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+69,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 32 : skb_special_alpha_n_en */
	{
		88,			/*keyboard height*/
		120,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+70,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 33 : skb_special_alpha_o_en */
	{
		88,			/*keyboard height*/
		441,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+71,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 34 : skb_special_alpha_u_en */
	{
		88,			/*keyboard height*/
		331,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		9,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+72,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		0,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 35 : skb_phn_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+73,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+37			/*skb_template_phn_land0*/
	},
		/* index 36 : skb_phn_symbol_1_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+77,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_1,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+37			/*skb_template_phn_land0*/
	},
		/* index 37 : skb_phn_symbol_2_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+81,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_2,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+37			/*skb_template_phn_land0*/
	},
		/* index 38 : skb_phn_symbol_3_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+85,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_3,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+37			/*skb_template_phn_land0*/
	},
		/* index 39 : skb_phone_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+89,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_PHONE,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+37			/*skb_template_phn_land0*/
	},
		/* index 40 : skb_phone_sym_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		3,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+93,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_PHONE,			/*gui_virtual_keyboard_language_enum*/
		2,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+37			/*skb_template_phn_land0*/
	},
		/* index 41 : skb_popup_phn_key1_en_rotate */
	{
		81,			/*keyboard height*/
		272,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+97,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 42 : skb_popup_phn_key2_en_rotate */
	{
		81,			/*keyboard height*/
		464,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+98,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 43 : skb_popup_phn_key3_en_rotate */
	{
		81,			/*keyboard height*/
		464,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+99,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 44 : skb_popup_phn_key4_en_rotate */
	{
		81,			/*keyboard height*/
		464,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+100,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 45 : skb_popup_phn_key5_en_rotate */
	{
		81,			/*keyboard height*/
		464,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+101,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 46 : skb_popup_phn_key6_en_rotate */
	{
		81,			/*keyboard height*/
		464,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+102,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 47 : skb_popup_phn_key7_en_rotate */
	{
		81,			/*keyboard height*/
		592,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+103,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 48 : skb_popup_phn_key8_en_rotate */
	{
		81,			/*keyboard height*/
		464,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+104,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 49 : skb_popup_phn_key9_en_rotate */
	{
		81,			/*keyboard height*/
		592,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+105,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 50 : skb_popup_qwerty_com_en_rotate */
	{
		81,			/*keyboard height*/
		352,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+106,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 51 : skb_popup_qwerty_fullstop_en_rotate */
	{
		81,			/*keyboard height*/
		400,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+107,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 52 : skb_popup_symbol_en_rotate */
	{
		81,			/*keyboard height*/
		208,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+108,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_MAX_LANG,			/*gui_virtual_keyboard_language_enum*/
		0,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 53 : skb_qwerty_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		6,			/*row_num*/
		rowTable+109,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 54 : skb_qwerty_land_doublehw_en_rotate */
	{
		72,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+115,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 55 : skb_qwerty_land_fullhw_en_rotate */
	{
		72,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+116,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 56 : skb_qwerty_symbol_1_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+117,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_1,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 57 : skb_qwerty_symbol_2_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+121,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_2,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 58 : skb_qwerty_symbol_3_en_rotate */
	{
		268,			/*keyboard height*/
		800,			/*keyboard width*/
		0,			/*skb_bg*/
		1,			/*key_xmargin*/
		4,			/*key_ymargin*/
		4,			/*row_num*/
		rowTable+125,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN_SYMBOL_3,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 59 : skb_special_alpha_a_en_rotate */
	{
		81,			/*keyboard height*/
		592,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+129,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+49			/*skb_template_qwerty_land0*/
	},
		/* index 60 : skb_special_alpha_c_en_rotate */
	{
		81,			/*keyboard height*/
		144,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+130,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 61 : skb_special_alpha_e_en_rotate */
	{
		81,			/*keyboard height*/
		392,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+131,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 62 : skb_special_alpha_i_en_rotate */
	{
		81,			/*keyboard height*/
		336,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		1,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+132,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 63 : skb_special_alpha_n_en_rotate */
	{
		81,			/*keyboard height*/
		144,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		3,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+133,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 64 : skb_special_alpha_o_en_rotate */
	{
		81,			/*keyboard height*/
		536,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+134,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},
		/* index 65 : skb_special_alpha_u_en_rotate */
	{
		81,			/*keyboard height*/
		408,			/*keyboard width*/
		IMG_ID_POPUP_KEYBOARD_BACKGROUND_9SLICE,			/*skb_bg*/
		2,			/*key_xmargin*/
		8,			/*key_ymargin*/
		1,			/*row_num*/
		rowTable+135,			/*rowlist_pointer*/
		GUI_VIRTUAL_KEYBOARD_EN,			/*gui_virtual_keyboard_language_enum*/
		1,			/*vk_attribute*/
		1,			/*is_rotate*/
		0,			/*is_shift_spport*/
		0,			/*is_cache*/
		keyTypeTable+12			/*skb_template_qwerty_port0*/
	},

  {
    0,  //height
    0,  //width
    0,  //background image id
    0,  //margin_x x
    0,  //margin_y y
    0,  //row num
    NULL,    //row_list
    GUI_VIRTUAL_KEYBOARD_EMPTY_TRAY,    //keyboard type
    MMI_FALSE,  //is rotate
    MMI_FALSE,  //is shift support
    MMI_FALSE,  //is chache
    NULL    //key type list
  },
};

const U8	stateListTable[] = 
{
	2,		/*index 0*/
	5,		/*index 1*/
	20,		/*index 2*/
	20,		/*index 3*/
	20,		/*index 4*/
	20,		/*index 5*/
	20,		/*index 6*/
	20,		/*index 7*/
	20,		/*index 8*/
	20,		/*index 9*/
	20,		/*index 10*/
	20,		/*index 11*/
	20,		/*index 12*/
	20,		/*index 13*/
	20,		/*index 14*/
	2,		/*index 15*/
	5,		/*index 16*/
	20,		/*index 17*/
	20,		/*index 18*/
	20,		/*index 19*/
	20,		/*index 20*/
	21,		/*index 21*/
	10,		/*index 22*/
	11,		/*index 23*/
	20,		/*index 24*/
	21,		/*index 25*/
	2,		/*index 26*/
	5,		/*index 27*/
	2,		/*index 28*/
	5,		/*index 29*/
	2,		/*index 30*/
	5,		/*index 31*/
	2,		/*index 32*/
	5,		/*index 33*/
	2,		/*index 34*/
	5,		/*index 35*/
	2,		/*index 36*/
	5,		/*index 37*/
	10,		/*index 38*/
	11,		/*index 39*/
	2,		/*index 40*/
	5,		/*index 41*/
	2,		/*index 42*/
	5,		/*index 43*/
	2,		/*index 44*/
	5,		/*index 45*/
	2,		/*index 46*/
	5,		/*index 47*/
	2,		/*index 48*/
	5,		/*index 49*/
	2,		/*index 50*/
	5,		/*index 51*/
	20,		/*index 52*/
	21,		/*index 53*/
	10,		/*index 54*/
	11,		/*index 55*/
	20,		/*index 56*/
	21,		/*index 57*/
	2,		/*index 58*/
	5,		/*index 59*/
	2,		/*index 60*/
	5,		/*index 61*/
	2,		/*index 62*/
	5,		/*index 63*/
	2,		/*index 64*/
	5,		/*index 65*/
	2,		/*index 66*/
	5,		/*index 67*/
	2,		/*index 68*/
	5,		/*index 69*/
	10,		/*index 70*/
	11,		/*index 71*/
	2,		/*index 72*/
	5,		/*index 73*/
	2,		/*index 74*/
	5,		/*index 75*/
	2,		/*index 76*/
	5,		/*index 77*/
	2,		/*index 78*/
	5,		/*index 79*/
	2,		/*index 80*/
	5,		/*index 81*/
	2,		/*index 82*/
	5,		/*index 83*/
	2,		/*index 84*/
	5,		/*index 85*/
	2,		/*index 86*/
	5,		/*index 87*/
};

const gui_virtual_keyboard_key_struct	 toggleKeyTable[] = 
{
	{
		/* index 0, state id 2 */ 
		13,		 /*code*/ 
		0,			  /*key_type*/
		IMG_ID_KEYICON_GO,		 /*icon*/ 
		0,			  /*icon_aux*/
		0,			  /*icon_hl*/
		0,			  /*icon_aux_hl*/
		0,			  /*label*/
		0,			  /*label_aux*/
		0,			  /*label_balloon*/
		IMG_ID_POPUPICON_GO,		 /*icon_balloon*/ 
		0,			  /*code_longpress*/
		0,			  /*label_balloon_longpress*/
		0,			  /*icon_balloon_longpress*/
		0,			  /*pos_x*/
		0,			  /*pos_y*/
		0,			  /*height*/
		0,			  /*width*/
		0,			  /*popup_skb*/
		0 			  /*toggle_index*/
	},

	{
		/* index 1, state id 5 */ 
		13,		 /*code*/ 
		0,			  /*key_type*/
		IMG_ID_KEYICON_NEXTEDITOR,		 /*icon*/ 
		0,			  /*icon_aux*/
		0,			  /*icon_hl*/
		0,			  /*icon_aux_hl*/
		0,			  /*label*/
		0,			  /*label_aux*/
		0,			  /*label_balloon*/
		IMG_ID_POPUPICON_NEXTEDITOR,		 /*icon_balloon*/ 
		0,			  /*code_longpress*/
		0,			  /*label_balloon_longpress*/
		0,			  /*icon_balloon_longpress*/
		0,			  /*pos_x*/
		0,			  /*pos_y*/
		0,			  /*height*/
		0,			  /*width*/
		0,			  /*popup_skb*/
		0 			  /*toggle_index*/
	},

	{
		/* index 2, state id 10 */ 
		-2,		 /*code*/ 
		2,		 /*key_type*/ 
		IMG_ID_KEYICON_SHIFT_UPPER,		 /*icon*/ 
		0,			  /*icon_aux*/
		0,			  /*icon_hl*/
		0,			  /*icon_aux_hl*/
		0,			  /*label*/
		0,			  /*label_aux*/
		0,			  /*label_balloon*/
		IMG_ID_POPUPICON_SHIFT_UPPER,		 /*icon_balloon*/ 
		0,			  /*code_longpress*/
		0,			  /*label_balloon_longpress*/
		0,			  /*icon_balloon_longpress*/
		0,			  /*pos_x*/
		0,			  /*pos_y*/
		0,			  /*height*/
		15,		 /*width*/ 
		0,			  /*popup_skb*/
		0 			  /*toggle_index*/
	},

	{
		/* index 3, state id 11 */ 
		-2,		 /*code*/ 
		4,		 /*key_type*/ 
		IMG_ID_KEYICON_SHIFT_UPPER,		 /*icon*/ 
		0,			  /*icon_aux*/
		0,			  /*icon_hl*/
		0,			  /*icon_aux_hl*/
		0,			  /*label*/
		0,			  /*label_aux*/
		0,			  /*label_balloon*/
		IMG_ID_POPUPICON_SHIFT_UPPER,		 /*icon_balloon*/ 
		0,			  /*code_longpress*/
		0,			  /*label_balloon_longpress*/
		0,			  /*icon_balloon_longpress*/
		0,			  /*pos_x*/
		0,			  /*pos_y*/
		0,			  /*height*/
		15,		 /*width*/ 
		0,			  /*popup_skb*/
		0 			  /*toggle_index*/
	},

	{
		/* index 4, state id 20 */ 
		0,			  /*code*/
		22,		 /*key_type*/ 
		0,			  /*icon*/
		0,			  /*icon_aux*/
		0,			  /*icon_hl*/
		0,			  /*icon_aux_hl*/
		0,			  /*label*/
		0,			  /*label_aux*/
		0,			  /*label_balloon*/
		0,			  /*icon_balloon*/
		0,			  /*code_longpress*/
		0,			  /*label_balloon_longpress*/
		0,			  /*icon_balloon_longpress*/
		0,			  /*pos_x*/
		0,			  /*pos_y*/
		0,			  /*height*/
		0,			  /*width*/
		0,			  /*popup_skb*/
		0 			  /*toggle_index*/
	},

	{
		/* index 5, state id 21 */ 
		0,		 /*code*/ 
		0,			  /*key_type*/
		IMG_ID_KEYICON_COM,		 /*icon*/ 
		0,			  /*icon_aux*/
		0,			  /*icon_hl*/
		0,			  /*icon_aux_hl*/
		L".com",		 /*label*/ 
		0,			  /*label_aux*/
		0,			  /*label_balloon*/
		IMG_ID_POPUPICON_COM,		 /*icon_balloon*/ 
		0,			  /*code_longpress*/
		0,			  /*label_balloon_longpress*/
		0,			  /*icon_balloon_longpress*/
		0,			  /*pos_x*/
		0,			  /*pos_y*/
		0,			  /*height*/
		15,		 /*width*/ 
		0,			  /*popup_skb*/
		0 			  /*toggle_index*/
	},

};

const gui_virtual_keyboard_key_struct*	toggleKeyPtrTable[] = 
{	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+4,
	toggleKeyTable+5,
	toggleKeyTable+2,
	toggleKeyTable+3,
	toggleKeyTable+4,
	toggleKeyTable+5,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+2,
	toggleKeyTable+3,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+4,
	toggleKeyTable+5,
	toggleKeyTable+2,
	toggleKeyTable+3,
	toggleKeyTable+4,
	toggleKeyTable+5,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+2,
	toggleKeyTable+3,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
	toggleKeyTable+0,
	toggleKeyTable+1,
};

 const gui_virtual_keyboard_togglekey_struct	toggleStructTable[] = 
{
	{
		2,			/* state_num */
		stateListTable+0,			/* toggle_stateid pointer */
		toggleKeyPtrTable+0			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+2,			/* toggle_stateid pointer */
		toggleKeyPtrTable+2			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+3,			/* toggle_stateid pointer */
		toggleKeyPtrTable+3			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+4,			/* toggle_stateid pointer */
		toggleKeyPtrTable+4			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+5,			/* toggle_stateid pointer */
		toggleKeyPtrTable+5			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+6,			/* toggle_stateid pointer */
		toggleKeyPtrTable+6			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+7,			/* toggle_stateid pointer */
		toggleKeyPtrTable+7			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+8,			/* toggle_stateid pointer */
		toggleKeyPtrTable+8			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+9,			/* toggle_stateid pointer */
		toggleKeyPtrTable+9			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+10,			/* toggle_stateid pointer */
		toggleKeyPtrTable+10			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+11,			/* toggle_stateid pointer */
		toggleKeyPtrTable+11			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+12,			/* toggle_stateid pointer */
		toggleKeyPtrTable+12			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+13,			/* toggle_stateid pointer */
		toggleKeyPtrTable+13			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+14,			/* toggle_stateid pointer */
		toggleKeyPtrTable+14			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+15,			/* toggle_stateid pointer */
		toggleKeyPtrTable+15			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+17,			/* toggle_stateid pointer */
		toggleKeyPtrTable+17			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+18,			/* toggle_stateid pointer */
		toggleKeyPtrTable+18			/* toggle_key pointer */
	},

	{
		1,			/* state_num */
		stateListTable+19,			/* toggle_stateid pointer */
		toggleKeyPtrTable+19			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+20,			/* toggle_stateid pointer */
		toggleKeyPtrTable+20			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+22,			/* toggle_stateid pointer */
		toggleKeyPtrTable+22			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+24,			/* toggle_stateid pointer */
		toggleKeyPtrTable+24			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+26,			/* toggle_stateid pointer */
		toggleKeyPtrTable+26			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+28,			/* toggle_stateid pointer */
		toggleKeyPtrTable+28			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+30,			/* toggle_stateid pointer */
		toggleKeyPtrTable+30			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+32,			/* toggle_stateid pointer */
		toggleKeyPtrTable+32			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+34,			/* toggle_stateid pointer */
		toggleKeyPtrTable+34			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+36,			/* toggle_stateid pointer */
		toggleKeyPtrTable+36			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+38,			/* toggle_stateid pointer */
		toggleKeyPtrTable+38			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+40,			/* toggle_stateid pointer */
		toggleKeyPtrTable+40			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+42,			/* toggle_stateid pointer */
		toggleKeyPtrTable+42			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+44,			/* toggle_stateid pointer */
		toggleKeyPtrTable+44			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+46,			/* toggle_stateid pointer */
		toggleKeyPtrTable+46			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+48,			/* toggle_stateid pointer */
		toggleKeyPtrTable+48			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+50,			/* toggle_stateid pointer */
		toggleKeyPtrTable+50			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+52,			/* toggle_stateid pointer */
		toggleKeyPtrTable+52			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+54,			/* toggle_stateid pointer */
		toggleKeyPtrTable+54			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+56,			/* toggle_stateid pointer */
		toggleKeyPtrTable+56			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+58,			/* toggle_stateid pointer */
		toggleKeyPtrTable+58			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+60,			/* toggle_stateid pointer */
		toggleKeyPtrTable+60			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+62,			/* toggle_stateid pointer */
		toggleKeyPtrTable+62			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+64,			/* toggle_stateid pointer */
		toggleKeyPtrTable+64			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+66,			/* toggle_stateid pointer */
		toggleKeyPtrTable+66			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+68,			/* toggle_stateid pointer */
		toggleKeyPtrTable+68			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+70,			/* toggle_stateid pointer */
		toggleKeyPtrTable+70			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+72,			/* toggle_stateid pointer */
		toggleKeyPtrTable+72			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+74,			/* toggle_stateid pointer */
		toggleKeyPtrTable+74			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+76,			/* toggle_stateid pointer */
		toggleKeyPtrTable+76			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+78,			/* toggle_stateid pointer */
		toggleKeyPtrTable+78			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+80,			/* toggle_stateid pointer */
		toggleKeyPtrTable+80			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+82,			/* toggle_stateid pointer */
		toggleKeyPtrTable+82			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+84,			/* toggle_stateid pointer */
		toggleKeyPtrTable+84			/* toggle_key pointer */
	},

	{
		2,			/* state_num */
		stateListTable+86,			/* toggle_stateid pointer */
		toggleKeyPtrTable+86			/* toggle_key pointer */
	},

};



#endif    
#endif //__MMI_IME_V3__   