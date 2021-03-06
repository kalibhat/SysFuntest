/*
 * cl_dlsis_controller.h
 *
 * Created: 12/27/2013 12:26:35 PM
 *  Author: user
 */ 


#ifndef CL_DLSIS_CONTROLLER_H_
#define CL_DLSIS_CONTROLLER_H_

#include "cl_alarmdetector.h"
typedef enum
{
	EVENT_NULL_EVENT,
	EVENT_DLSIS_CLR_ALARM,
	EVENT_DLSIS_GET_DATA,
	EVENT_DLSIS_SET_DATA,
	EVENT_DLSIS_START_RINSE,
	EVENT_DLSIS_START_DIALYSIS,
	EVENT_DLSIS_STOP_DIALYSIS,
	EVENT_DLSIS_PAUSE_DIALYSIS,
	EVENT_DLSIS_BYPASS_ON,
	EVENT_DLSIS_BYPASS_OFF,
	EVENT_DLSIS_TIMEOUT,
	EVENT_DLSIS_OPENFILL_TIMEOUT,
	EVENT_DLSIS_V2OPEN_TIMEOUT,
	EVENT_DLSIS_BO1_V4_TIMEOUT,
	EVENT_DLSIS_BO2_V4_TIMEOUT,
	EVENT_DLSIS_BO1_V13V14_TIMEOUT,
	EVENT_DLSIS_BO2_V13V14_TIMEOUT,
	EVENT_DLSIS_TICK_50MS,
	EVENT_DLSIS_TICK_500MS,
	EVENT_DLSIS_TICK_SECOND,
	EVENT_DLSIS_TICK_MINUTE,
	EVENT_DLSIS_TICK_HOUR,
	EVENT_DLSIS_ALARM,
	EVENT_DLSIS_ALERT,
	EVENT_DLSIS__PATIENT_READY,
	EVENT_DLSIS__START_RETURN,
	EVENT_DLSIS__STOP_RETURN,
	EVENT_DLSIS__MINUF_ON,
	EVENT_DLSIS__MINUF_OFF,
	EVENT_DLSIS_COMMAND_SET_BLDPUMPRATE,
	EVENT_DLSIS_COMMAND_SET_BLDPMP_ON,
	EVENT_DLSIS_COMMAND_SET_BLDPMP_OFF,
	EVENT_DLSIS_HEP_RATE,
	EVENT_DLSIS_HEP_ON,
	EVENT_DLSIS_HEP_OFF,
	EVENT_DLSIS_HEAPARIN_BOLUS,
	EVENT_DLSIS_ISOUF_START,
	
	EVENT_DLSIS_MAXEVENT
	}Cl_Dlsis_Eevents;
	
typedef enum
{
	CL_DLSIS_STATE_IDLE,
	CL_DLSIS_STATE_INIT,
	CL_DLSIS_STATE_WAIT_FOR_TEMP_COND_STABILITY,
	CL_DLSIS_STATE_WAIT_FOR_BLOOD_DETECT,
	CL_DLSIS_STATE_DIALYSIS,
	CL_DLSIS_STATE_UF_ACTIVATION,
	CL_DLSIS_STATE_POST_DIALYSIS_STANDBY,
	CL_DLSIS_STATE_PAUSED,
	CL_DLSIS_STATE_BYPASS,
	CL_DLSIS_STATE_STOPPED,
	CL_DLSIS_STATE_CRITICAL_ALARM,
	CL_DLSIS_STATE_MAXSTATE
} Cl_Dlsis_States;




	
typedef struct  
{
	Cl_Uint8Type Cl_dlsissecondscounter  ;
	Cl_Uint8Type Cl_dlsisMinutescounter;
	Cl_Uint8Type Cl_dlsishourscounter;
	Cl_Uint8Type Cl_dlsisTotalMinutescounter;
	Cl_Uint8Type Cl_dlsisTotalhourscounter;
}DlsisTimeType;
	
	
typedef struct 
{
	
	Cl_NewAlarmIdType Cl_DlsisAlarmId;
	Cl_AlarmType Cl_DlsisAlarmType;
	Cl_BoolType IsActive;
	Cl_BoolType IsRaised;
	Cl_BoolType userclear;
	Cl_BoolType critical;
	Cl_BoolType Mute;
	
}DlsisAlarmsType;


typedef union{
	
	Cl_Uint8Type bytearray[8] ;
	Cl_Uint16Type Twobyte  ;
	Cl_Uint32Type word ;
	
}cl_DlsisDatatype;


typedef enum {
	CL_DLSIS_ALARM_HOLDER1STATUS_CLOSE,
	CL_DLSIS_ALARM_HOLDER2STATUS_CLOSE,
	CL_DLSIS_ALARM_ACID_IN,
	CL_DLSIS_ALARM_BICAR_IN,
	CL_DLSIS_ALARM_FLOW_NO_FLOW,
	CL_DLSIS_ALARM_FLOW_LOW_FLOWRATE,
	CL_DLSIS_ALARM_COND_STATUS_LOW,
	CL_DLSIS_ALARM_COND_STATUS_HIGH,
	CL_DLSIS_ALARM_BLOODDOOR_STATUS_OPEN,
	CL_Dlsis_ALARM_PS1_HIGH_THRESHOLD,
	CL_Dlsis_ALARM_PS1_LOW_THRESHOLD,
	CL_Dlsis_ALARM_PS2_HIGH_THRESHOLD,
	CL_Dlsis_ALARM_PS2_LOW_THRESHOLD,
	CL_Dlsis_ALARM_PS3_HIGH_THRESHOLD,
	CL_Dlsis_ALARM_PS3_LOW_THRESHOLD,
	CL_DLSIS_BDSTATUS,
	CL_DLSIS_ABDSTATUS,
	CL_DLSIS_BLDSTATUS,
	CL_DLSIS_APTSTATUS_HIGH,
	CL_DLSIS_APTSTATUS_LOW,
	CL_DLSIS_VPTSTATUS_HIGH,
	CL_DLSIS_VPTSTATUS_LOW,
	CL_DLSIS_COND_STATUS_LOW,
	CL_DLSIS_COND_STATUS_HIGH,
	CL_Dlsis_ALARM_TEMP3_HIGH_THRESHOLD,
	CL_Dlsis_ALARM_TEMP3_LOW_THRESHOLD,
	CL_Dlsis_ALARM_TEMP2_HIGH_THRESHOLD,
	CL_Dlsis_ALARM_TEMP2_LOW_THRESHOLD,
	CL_Dlsis_ALARM_TEMP1_HIGH_THRESHOLD,
	CL_Dlsis_ALARM_TEMP1_LOW_THRESHOLD,
	//CL_DLSIS_ALARM_BLOODDOOR_STATUS_OPEN,
	//CL_DLSIS_ALARM_LEVELSWITCHON,
	//CL_DLSIS_ALARM_LEVELSWITCHOFF,
	//CL_DLSIS_ALARM_HOLDER1,
	//CL_DLSIS_ALARM_HOLDER2,	
	//CL_DLSIS_COND_STATUS,
	//CL_DLSIS_HPSTATUS,
	//CL_DLSIS_ABDSTATUS,
	//CL_DLSIS_BDSTATUS,
	//
	//CL_DLSIS_BPTSTATUS,
	//CL_DLSIS_BLDSTATUS,
	//CL_DLSIS_PS1STATUS,
	//CL_DLSIS_PS3STATUS,
	//CL_DLSIS_PS4STATUS,
	//CL_DLSIS_TEMP1STATUS,
	//CL_DLSIS_TEMP2STATUS,
	//CL_DLSIS_TEMP3STATUS,
	//CL_DLSIS_FPCURRENTSTATUS,
	//CL_DLSIS_UFPCURRENTSTATUS,
	
	CL_DLSIS_ALRM_MAX
	
	} ClDlsisAlarmIdType;


#define CL_DLSIS_OPENFILL_TIMEOUT 1

#define CL_DLSIS_STATE_V2OPEN_TIMEOUT 1

#define CL_DLSIS_PATH_BO1_V4_TIMEOUT 1

#define CL_DLSIS_PATH_BO2_V4_TIMEOUT 1

#define CL_DLSIS_PATH_BO1_V13V14_TIMEOUT 1

#define CL_DLSIS_PATH_BO2_V13V14_TIMEOUT 1

#define CL_DLSIS_TIMEOUT_MIN 240
#define CL_DLSIS_TIMEOUT_HRS 0
#define CL_DLSIS_DURATION 
	
//prototype definitions of local functions
//Cl_ReturnCodeType Cl_Dlsis_Controller(Cl_Mac_EventsType );



#endif /* CL_DLSIS_CONTROLLER_H_ */
