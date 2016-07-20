/*Needed header files of the compile option in XML files */
#include "mmi_features.h"

#ifdef __MMI_AUDPLY_WALK_PLAY__
#include "CustResDef.h"         /* for image/audio path */
#include "custom_mmi_default_value.h"
/* Need this line to tell parser that XML start, must after all #include. */
<?xml version="1.0" encoding="UTF-8"?>

<APP id="APP_AUDIOPLAYER">

    <INCLUDE file="GlobalResDef.h"/>
    
	<STRING id="STR_ID_AUDPLY_SETTINGS_PLAY_STYLE"/>
	<STRING id="STR_ID_AUDPLY_SETTINGS_PLAY_BY_FILE_ORDER"/>
	<STRING id="STR_ID_AUDPLY_SETTINGS_PLAY_BY_PLAYLIST"/>
	<STRING id="STR_ID_AUDPLY_ERR_NO_AUDIO_FILE"/>
	<STRING id="STR_ID_AUDPLY_FIRST_HINT"/>
	<STRING id="STR_ID_AUDPLY_LAST_HINT"/>
	<STRING id="STR_ID_AUDPLY_STACK_CORRECT"/>
	
    <CACHEDATA type="byte" id="NVRAM_AUDPLY_PLAY_STYLE" restore_flag="TRUE">
        <DEFAULT_VALUE> [0x00] </DEFAULT_VALUE>
        <DESCRIPTION> Audio player play style </DESCRIPTION>
    </CACHEDATA>

    <RECEIVER id="EVT_ID_SRV_STACK_STATUS_READY" proc="mmi_auddply_play_event_callback_hdlr"/> 
    <RECEIVER id="EVT_ID_PLC_WORK_FINISH" proc="mmi_auddply_cache_work_event_hdlr"/> 
</APP>
#endif  //__MMI_AUDPLY_WALK_PLAY__