/*Needed header files of the compile option in XML files */
#include "mmi_features.h"

#ifdef __MMI_LINE_IN__

#include "CustResDef.h"
#include "custom_mmi_default_value.h"

<?xml version = "1.0" encoding = "UTF-8"?>

<APP id="APP_LINEIN"
    #if defined(__MMI_APP_MANAGER_SUPPORT__)
    package_name = "native.mtk.linein"
    name = "STR_ID_LINEIN_TITLE"
    launch = "mmi_linein_launch"
    #endif /*__MMI_APP_MANAGER_SUPPORT__*/
>
	<INCLUDE file="GlobalResDef.h"/>
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--String Resource Area-->
	<STRING id="STR_ID_LINEIN_TITLE"/>
	<STRING id="STR_ID_LINEIN_MUTE_ON"/>
	<STRING id="STR_ID_LINEIN_MUTE_OFF"/>
    <!--End String Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->


    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Image Resource Area-->   
    <IMAGE id="IMG_ID_LINEIN_PLAY_ANIMATION">CUST_IMG_PATH"\\\\MainLCD\\\\Linein\\\\Linein.png"</IMAGE> 
    <!--End Image Resource Area-->
    <!--------------------------------------------------------------------------------------------------------------------->

	
    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Menu Item Area-->
    <!--End Menu Item Area-->
    <!--------------------------------------------------------------------------------------------------------------------->
    

    <!--------------------------------------------------------------------------------------------------------------------->
	<!--Menu Tree Area-->
	<MENU id="MENU_ID_LINEIN_MAIN" type="APP_MAIN" str="STR_ID_LINEIN_TITLE"
        highlight="mmi_linein_highlight_menu" shortcut="ON" 
        launch="mmi_linein_launch"/>
	<!--End Menu Tree Area-->
    <!--------------------------------------------------------------------------------------------------------------------->


    <!--------------------------------------------------------------------------------------------------------------------->
    <!--Screen ID Area-->
	<SCREEN id="GRP_ID_LINEIN"/>	
	<SCREEN id="SCR_ID_LINEIN_MAIN"/>
    <!--End Screen ID Area-->
	<!--------------------------------------------------------------------------------------------------------------------->

    
	<!--------------------------------------------------------------------------------------------------------------------->
	<!--Receiving Evt ID -->
    /* Linein */
    <RECEIVER id="EVT_ID_GPIO_LINEIN_PLUG_IN" proc="mmi_linein_proc" />
    <RECEIVER id="EVT_ID_GPIO_LINEIN_PLUG_OUT" proc="mmi_linein_proc" />
    /* Earphone */
    <RECEIVER id="EVT_ID_GPIO_EARPHONE_PLUG_IN" proc="mmi_linein_proc" />
    <RECEIVER id="EVT_ID_GPIO_EARPHONE_PLUG_OUT" proc="mmi_linein_proc" />
	<!--End Receiving Evt ID -->
	<!--------------------------------------------------------------------------------------------------------------------->

    
	<!--------------------------------------------------------------------------------------------------------------------->
	<!--Sending Evt ID -->
	<!--End Sending Evt ID -->
	<!--------------------------------------------------------------------------------------------------------------------->
	
	
	<!--------------------------------------------------------------------------------------------------------------------->
	<!--NVRAM LID -->
	<!--End NVRAM LID -->
	<!--------------------------------------------------------------------------------------------------------------------->
</APP>

#endif  //__MMI_LINE_IN__
