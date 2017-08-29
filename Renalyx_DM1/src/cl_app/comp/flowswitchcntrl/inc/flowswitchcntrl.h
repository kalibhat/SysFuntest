/*
 * flowswitchcntrl.h
 *
 * Created: 11/9/2014 2:08:36 PM
 *  Author: user
 */ 


#ifndef FLOWSWITCHCNTRL_H_
#define FLOWSWITCHCNTRL_H_
#include "cl_types.h"
typedef enum
{
	FLOW_SWITCH_CNTRL_IDLE,
	FLOW_SWITCH_CNTRL_READY,
	FLOW_SWITCH_CNTRL_ACTIVE,
	FLOW_SWITCH_CNTRL_STOPPED,
	FLOW_SWITCH_CNTRL_MAX
	
}flowswitchcntrlstate_type;
typedef enum
{
	FLOW_SWITCH_UNDEFINED,
	FLOW_SWITCH_LEVEL_HIGH,
	FLOW_SWITCH_LEVEL_LOW,
	FLOW_SWITCH_MAX
	
}flowswitchstate_type;
typedef enum
{
	FLOW_SWITCH_EVENT_UNDEFINED,
	FLOW_SWITCH_EVENT_LEVEL_HIGH,
	FLOW_SWITCH_EVENT_LEVEL_LOW,
	FLOW_SWITCH_EVENT_MAX
	
}flowwitchevent_type;
typedef enum
{
	FLOW_SWITCH_CNTRLER_EVENT_NULL,
	FLOW_SWITCH_CNTRLER_EVENT_START,
	FLOW_SWITCH_CNTRLER_EVENT_STOP,
	FLOW_SWITCH_CNTRLER_EVENT_SEC,
	FLOW_SWITCH_CNTRLER_EVENT_100MS,
	FLOW_SWITCH_CNTRLER_EVENT_10MS,
	FLOW_SWITCH_CNTRLER_EVENT_INSTANT,
	FLOW_SWITCH_CNTRLER_EVENT_MAX
	
}flowswitchcntrl_event_type;

typedef struct{
	flowwitchevent_type flowswitch_event;
	int8_t event_ID;
	
}Cl_Flowswitch_msgType;

#endif /* FLOWSWITCHCNTRL_H_ */