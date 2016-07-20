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

/*******************************************************************************
* Filename:
* ---------
*  FMRadioSrc.c
*
* Project:
* --------
*   MAUI
*
* Description:
* ------------
*   FM Radio main program
*
* Author:
* -------
 * -------
*
*==============================================================================
*           HISTORY
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
 *------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
*==============================================================================
*******************************************************************************/

#include "MMI_features.h"

#ifdef  __MMI_MEGAPHONE_SUPPORT__ 
#include "globalresdef.h"
#include "gui_typedef.h"
#include "mmi_frm_scenario_gprot.h"
#include "wgui_softkeys.h"

#include "MegaphoneGprot.h"
#include "Megaphone.h"
#include "mmi_rp_app_megaphone_def.h"
#include "wgui_categories_btbox.h"
#include "AudioPlayerBTNowPlaying.h"
#include "Mdi_audio.h"


#if defined(__MMI_A2DP_SUPPORT__) && defined(__BT_SPEAKER_SUPPORT__)
#include "mmi_rp_srv_a2dp_def.h"
#endif  //defined(__MMI_A2DP_SUPPORT__) && defined(__BT_SPEAKER_SUPPORT__)

static mmi_megaphone_cntx g_megaphone_cntx;


/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_is_active
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL mmi_megaphone_is_active(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (mmi_frm_group_get_active_id() == GRP_ID_MEGAPHONE && mmi_frm_scrn_get_active_id() == SCR_ID_MEGAPHONE_MAIN)
        return MMI_TRUE;

    return MMI_FALSE;    
}


/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_bt_music_disconnect_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_megaphone_bt_music_disconnect_callback(MMI_BOOL result)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (result)
    {
        mmi_megaphone_launch();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_meagphone_launch
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_megaphone_launch(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_MEGAPHONE_LAUNCH, 100);
	#if defined(__MMI_BT_MUSIC__) || defined(__MMI_AUDIO_PLAYER_BT__)
    if (mmi_bt_music_check_connection())
    {
        mmi_bt_music_disconnect(mmi_megaphone_bt_music_disconnect_callback);
        return;
    }
	#endif
    
    if (!mmi_megaphone_is_active())
    {
        g_megaphone_cntx.group_id = mmi_frm_group_create_ex(GRP_ID_ROOT, GRP_ID_MEGAPHONE, mmi_megaphone_proc, NULL, MMI_FRM_NODE_SMART_CLOSE_FLAG);
        MMI_ASSERT(g_megaphone_cntx.group_id != GRP_ID_INVALID);
        mmi_frm_scrn_create(g_megaphone_cntx.group_id, SCR_ID_MEGAPHONE_MAIN, mmi_megaphone_proc, NULL);
    }    
}

/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_volume_update
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_megaphone_volume_update(S32 vol)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint16 error=0;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if(vol == g_megaphone_cntx.volume)
		return;

	g_megaphone_cntx.volume = vol;
	if( g_megaphone_cntx.volume >= MDI_MEGAPHONE_VOL_EX_MIN && 
						g_megaphone_cntx.volume <=MDI_MEGAPHONE_VOL_EX_MAX )
	{
		WriteValue(NVRAM_MEGAPHONE_VOL,&g_megaphone_cntx.volume, DS_BYTE, &error);
		if(g_megaphone_cntx.is_on)
    	    mdi_audio_set_volume(VOL_TYPE_SPH,MDI_AUD_VOL_MUTE(g_megaphone_cntx.volume));
	}
}


/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_entry_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_megaphone_entry_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint16 error = 0;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ReadValue(NVRAM_MEGAPHONE_VOL, &g_megaphone_cntx.volume, DS_BYTE, &error);
	kal_prompt_trace(MOD_MMI,"** In mmi_megaphone_entry_screen vol:%d",g_megaphone_cntx.volume);
	if(g_megaphone_cntx.volume > MDI_MEGAPHONE_VOL_EX_MAX)
    {
        g_megaphone_cntx.volume = 6;
		WriteValue(NVRAM_MEGAPHONE_VOL, &g_megaphone_cntx.volume, DS_BYTE, &error);
    }
	mmi_frm_kbd_set_tone_state(MMI_KEY_TONE_DISABLED);
#if 0	
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
ShowCategory8001Screen(
	STR_ID_MEGAPHONE_TITLE,
	(g_megaphone_cntx.is_on? STR_ID_MEGAPHONE_POWER_OFF : STR_ID_MEGAPHONE_POWER_ON),
	STR_GLOBAL_BACK,
	IMG_ID_MEGAPHONE_PLAY_ANIMATION,KAL_FALSE);
#endif
    
    SetLeftSoftkeyFunction(mmi_megaphone_switch, KEY_EVENT_UP);
    SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
	if(g_megaphone_cntx.need_resume)
	    mmi_megaphone_switch();
	g_megaphone_cntx.need_resume = KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_entry_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_megaphone_exit_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if(g_megaphone_cntx.is_on)
	{
	    g_megaphone_cntx.is_on = KAL_FALSE;
		g_megaphone_cntx.need_resume = KAL_TRUE;
		mdi_audio_clear_interrupt_callback();
		mdi_audio_enable_megaphone(KAL_FALSE); 
		mdi_audio_resume_background_play();
	}
	mmi_frm_kbd_set_tone_state(MMI_KEY_TONE_ENABLED);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  event [IN] mmi_event_struct
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_megaphone_proc(mmi_event_struct *event)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_frm_key_evt_struct* p_key;
	S16 error;	
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_MEGAPHONE_PROC, event->evt_id);

	p_key = (mmi_frm_key_evt_struct*) event;
	
    switch (event->evt_id)
    {
        #if defined(__MMI_A2DP_SUPPORT__) && defined(__BT_SPEAKER_SUPPORT__)
        case EVT_ID_SRV_A2DP_CONNECT:
        {
            if (mmi_frm_group_get_state(GRP_ID_MEGAPHONE) != MMI_SCENARIO_STATE_NONE)
            {
                mmi_frm_close_to_idle_group();
            }
            break;
        }
        #endif  //defined(__MMI_A2DP_SUPPORT__) && defined(__BT_SPEAKER_SUPPORT__)
        case EVT_ID_SCRN_ACTIVE:
            mmi_megaphone_entry_screen();
            break;
        case EVT_ID_SCRN_INACTIVE:
            mmi_megaphone_exit_screen();
            break;
		case EVT_ID_GROUP_DEINIT:
            g_megaphone_cntx.need_resume = KAL_FALSE;
            break;
		case EVT_ID_ON_KEY: 
		if(p_key->key_type == KEY_EVENT_DOWN)
		{   
			switch(p_key->key_code)
			{
				case KEY_DOWN_ARROW:
					break;
				case KEY_LEFT_ARROW:
					break;
				case KEY_RIGHT_ARROW:
					break;
				case KEY_VOL_UP:
					if(g_megaphone_cntx.volume < MDI_MEGAPHONE_VOL_EX_MAX)
					{	
						ReadValue(NVRAM_MEGAPHONE_VOL,
							&g_megaphone_cntx.volume,
							DS_BYTE,
							&error);
						g_megaphone_cntx.volume++;
						if(g_megaphone_cntx.volume <= MDI_MEGAPHONE_VOL_EX_MAX)
						{
							WriteValue(NVRAM_MEGAPHONE_VOL,&g_megaphone_cntx.volume, DS_BYTE, &error);
							if(g_megaphone_cntx.is_on)
							    mdi_audio_set_volume(VOL_TYPE_SPH,MDI_AUD_VOL_MUTE(g_megaphone_cntx.volume));
						}
					}
					break;
				case KEY_VOL_DOWN:
					if( g_megaphone_cntx.volume > MDI_MEGAPHONE_VOL_EX_MIN && 
						g_megaphone_cntx.volume <=MDI_MEGAPHONE_VOL_EX_MAX )
					{	
						ReadValue(NVRAM_MEGAPHONE_VOL,
							&g_megaphone_cntx.volume,
							DS_BYTE,
							&error);
						g_megaphone_cntx.volume--;
						WriteValue(NVRAM_MEGAPHONE_VOL,&g_megaphone_cntx.volume,DS_BYTE, &error);
						if(g_megaphone_cntx.is_on)
						    mdi_audio_set_volume(VOL_TYPE_SPH, MDI_AUD_VOL_MUTE(g_megaphone_cntx.volume));
					}
					break;
				 case KEY_RSK:
					break;
			}
		}
		else if(p_key->key_type == KEY_EVENT_UP)
		{   
			switch(p_key->key_code)
			{
				case KEY_VOL_UP:
					break;
				case KEY_VOL_DOWN:
					break;
			}
		}
		#ifdef  __MMI_BTD_BOX_UI_STYLE__
		else if(p_key->key_type == KEY_EVENT_LONG_PRESS || p_key->key_type == KEY_EVENT_REPEAT)
		{   
			switch(p_key->key_code)
			{
				case KEY_DOWN_ARROW:
					if( g_megaphone_cntx.volume > MDI_MEGAPHONE_VOL_EX_MIN && 
						g_megaphone_cntx.volume <=MDI_MEGAPHONE_VOL_EX_MAX )
					{	
						ReadValue(NVRAM_MEGAPHONE_VOL,
							&g_megaphone_cntx.volume,
							DS_BYTE,
							&error);
						g_megaphone_cntx.volume--;
						WriteValue(NVRAM_MEGAPHONE_VOL,&g_megaphone_cntx.volume,DS_BYTE, &error);
						if(g_megaphone_cntx.is_on)
						    mdi_audio_set_volume(VOL_TYPE_SPH, MDI_AUD_VOL_MUTE(g_megaphone_cntx.volume));
					}
					break;
				case KEY_UP_ARROW:
					if(g_megaphone_cntx.volume < MDI_MEGAPHONE_VOL_EX_MAX)
					{	
						ReadValue(NVRAM_MEGAPHONE_VOL,
							&g_megaphone_cntx.volume,
							DS_BYTE,
							&error);
						g_megaphone_cntx.volume++;
						if(g_megaphone_cntx.volume <= MDI_MEGAPHONE_VOL_EX_MAX)
						{
							WriteValue(NVRAM_MEGAPHONE_VOL,&g_megaphone_cntx.volume, DS_BYTE, &error);
							if(g_megaphone_cntx.is_on)
							    mdi_audio_set_volume(VOL_TYPE_SPH,MDI_AUD_VOL_MUTE(g_megaphone_cntx.volume));
						}
					}
					break;
			}
		}
		#endif
		break;
    }
    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_interrupt_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  event [IN] mmi_event_struct
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
void mmi_megaphone_interrupt_callback(S32 result, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if(g_megaphone_cntx.is_on)
	{
		mdi_audio_clear_interrupt_callback();
		g_megaphone_cntx.is_on = KAL_FALSE;
		mdi_audio_enable_megaphone(g_megaphone_cntx.is_on);
		set_left_softkey_label((UI_string_type)GetString(g_megaphone_cntx.is_on ? STR_ID_MEGAPHONE_POWER_OFF : STR_ID_MEGAPHONE_POWER_ON));
		dm_redraw_category_screen();
	}
}


/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_switch
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_megaphone_switch(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S16 error;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_megaphone_cntx.is_on = !(g_megaphone_cntx.is_on);
	
	if(g_megaphone_cntx.is_on)
	{
        mdi_audio_suspend_background_play();

        ReadValue(NVRAM_MEGAPHONE_VOL, &g_megaphone_cntx.volume, DS_BYTE, &error);
		if(g_megaphone_cntx.volume > MDI_MEGAPHONE_VOL_EX_MAX)
	    {
	        g_megaphone_cntx.volume = 4;
			WriteValue(NVRAM_MEGAPHONE_VOL, &g_megaphone_cntx.volume, DS_BYTE, &error);
	    }
		
		mdi_audio_enable_megaphone(g_megaphone_cntx.is_on);
		mdi_audio_set_volume(VOL_TYPE_SPH, MDI_AUD_VOL_MUTE(g_megaphone_cntx.volume));
		mdi_audio_register_interrupt_callback(mmi_megaphone_interrupt_callback,NULL);
	}
	else
	{
	    mdi_audio_clear_interrupt_callback();
		mdi_audio_enable_megaphone(g_megaphone_cntx.is_on); 
		mdi_audio_resume_background_play();
	}
	#if 0
/* under construction !*/
	#endif
    set_left_softkey_label((UI_string_type)GetString(g_megaphone_cntx.is_on ? STR_ID_MEGAPHONE_POWER_OFF : STR_ID_MEGAPHONE_POWER_ON));
    dm_redraw_category_screen();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_megaphone_highlight_menu
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_megaphone_highlight_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, 0);
    ChangeRightSoftkey(STR_GLOBAL_BACK, 0);

    SetLeftSoftkeyFunction(mmi_megaphone_launch, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
	SetCenterSoftkeyFunction(mmi_megaphone_launch, KEY_EVENT_UP);
}

#endif  // __MMI_MEGAPHONE_SUPPORT__ 

