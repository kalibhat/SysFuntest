/*
 * UFPumpController.h
 *
 * Created: 11/5/2014 3:40:49 PM
 *  Author: user
 */ 


#ifndef UFPUMPCONTROLLER_H_
#define UFPUMPCONTROLLER_H_

#include "cl_alarmdetector.h"

typedef union{
	
	Cl_Uint8Type bytearray[8] ;
	Cl_Uint16Type Twobyte  ;
	Cl_Uint32Type word ;
	
}cl_IsoUfDatatype;

typedef struct
{
	
	Cl_NewAlarmIdType Cl_IsoufAlarmId;
	Cl_AlarmType Cl_IsoufAlarmType;
	Cl_BoolType IsActive;
	Cl_BoolType IsRaised;
	Cl_BoolType userclear;
	Cl_BoolType critical;
	Cl_BoolType Mute;
	
}IsoufAlarmsType;


typedef enum {
	CL_ISOUF_ALARM_HOLDER1STATUS_CLOSE,
	CL_ISOUF_ALARM_HOLDER2STATUS_CLOSE,
	CL_ISOUF_ALARM_ACID_IN,
	CL_ISOUF_ALARM_BICAR_IN,
	CL_ISOUF_ALARM_FLOW_NO_FLOW,
	CL_ISOUF_ALARM_FLOW_LOW_FLOWRATE,
	CL_ISOUF_ALARM_COND_STATUS_LOW,
	CL_ISOUF_ALARM_COND_STATUS_HIGH,
	CL_ISOUF_ALARM_BLOODDOOR_STATUS_OPEN,
	CL_ISOUF_ALARM_PS1_HIGH_THRESHOLD,
	CL_ISOUF_ALARM_PS1_LOW_THRESHOLD,
	CL_ISOUF_ALARM_PS2_HIGH_THRESHOLD,
	CL_ISOUF_ALARM_PS2_LOW_THRESHOLD,
	CL_ISOUF_ALARM_PS3_HIGH_THRESHOLD,
	CL_ISOUF_ALARM_PS3_LOW_THRESHOLD,
	CL_ISOUF_BDSTATUS,
	CL_ISOUF_ABDSTATUS,
	CL_ISOUF_BLDSTATUS,
	CL_ISOUF_APTSTATUS_HIGH,
	CL_ISOUF_APTSTATUS_LOW,
	CL_ISOUF_VPTSTATUS_HIGH,
	CL_ISOUF_VPTSTATUS_LOW,
	CL_ISOUF_COND_STATUS_LOW,
	CL_ISOUF_COND_STATUS_HIGH,
	CL_ISOUF_ALARM_TEMP3_HIGH_THRESHOLD,
	CL_ISOUF_ALARM_TEMP3_LOW_THRESHOLD,
	CL_ISOUF_ALARM_TEMP2_HIGH_THRESHOLD,
	CL_ISOUF_ALARM_TEMP2_LOW_THRESHOLD,
	CL_ISOUF_ALARM_TEMP1_HIGH_THRESHOLD,
	CL_ISOUF_ALARM_TEMP1_LOW_THRESHOLD,
	CL_ISOUF_ALRM_MAX
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
	
	
	
} ClIsoufAlarmIdType;


typedef enum {
	
	CL_UF_STATE_IDLE,
	CL_UF_STATE_STARTED,
	CL_UF_STATE_STOPPED,
	CL_UF_STATE_PAUSED,
	CL_UF_STATE_COMPLETED,
	CL_UF_STATE_MAXSTATE,
	CL_ISO_UF_STATE_START
	
	
}cl_uf_states;
typedef enum {
	
	CL_UF_EVENT_NULL,
	CL_UF_EVENT_SET_UF_RATE,
	CL_UF_EVENT_START,
	CL_UF_EVENT_PAUSE,
	CL_UF_EVENT_STOP,
	CL_UF_EVENT_COMPLETED,
	CL_UF_EVENT_SECOND,
	CL_UF_EVENT_MAX_EVENT,
	CL_UF_EVENT_RESET,
	CL_ISO_UF_EVENT_START,
	CL_UF_EVENT_MINUTE
}cl_uf_events;

typedef enum {
	
	CL_ISOUF_STATE_IDLE,
	CL_ISOUF_STATE_STARTED,
	CL_ISOUF_STATE_STOPPED,
	CL_ISOUF_STATE_PAUSED,
	CL_ISOUF_STATE_COMPLETED,
	CL_ISOUF_STATE_MAXSTATE,
	CL_ISOUF_STATE_START,
	CL_ISOUF_STATE_POST_COMPLETION,
	CL_ISOUF_STATE_CRITICAL_ALARM
	
}cl_isouf_states;
typedef enum {
	
	EVENT_ISOUF_NULL_EVENT,
	EVENT_ISOUF_CLR_ALARM,
	EVENT_ISOUF_GET_DATA,
	EVENT_ISOUF_SET_DATA,
	EVENT_ISOUF_START_RINSE,
	EVENT_ISOUF_START_DIALYSIS,
	EVENT_ISOUF_DLSIS_TIMEOUT,
	EVENT_ISOUF_TICK_50MS,
	EVENT_ISOUF_TICK_500MS,
	EVENT_ISOUF_TICK_SECOND,
	EVENT_ISOUF_TICK_MINUTE,
	EVENT_ISOUF_TICK_HOUR,
	EVENT_ISOUF_ALARM,
	EVENT_ISOUF_ALERT,
	EVENT_ISOUF_START_RETURN,
	EVENT_ISOUF_STOP_RETURN,
	EVENT_ISOUF_COMMAND_SET_BLDPUMPRATE,
	EVENT_ISOUF_COMMAND_SET_BLDPMP_ON,
	EVENT_ISOUF_COMMAND_SET_BLDPMP_OFF,
	EVENT_ISOUF_HEP_RATE,
	EVENT_ISOUF_HEP_ON,
	EVENT_ISOUF_HEP_OFF,
	EVENT_ISOUF_START,
	EVENT_ISOUF_PAUSED,
	EVENT_ISOUF_STOP,
	EVENT_ISOUF_COMPLETED,
	EVENT_ISOUF_RESET,
	EVENT_ISOUF_HEAPARIN_BOLUS,
	EVENT_ISOUF_BYPASS_ON,
	EVENT_ISOUF_BYPASS_OFF
	
	
}cl_isouf_events;



#endif /* UFPUMPCONTROLLER_H_ */