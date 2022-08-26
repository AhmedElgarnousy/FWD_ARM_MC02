/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Std_Types.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/
#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/***********************************************************************************
*	INCLUDES
***********************************************************************************/

/***********************************************************************************
*	GLOBAL CONSTANT MACROS 
***********************************************************************************/


typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;

typedef signed char         sint8;
typedef signed short        sint16;
typedef signed int          sint32;

typedef float               float32;
typedef double              float64;

typedef enum
{
    STD_off=0,
    STD_on=!STD_off
}Std_BoolType;

typedef enum
{
    STD_Suspended=0,
    STD_Active=!STD_Suspended
}Std_StatusType;

typedef enum
{
    false=0,
    true=!false
}Std_boolean;

typedef enum
{
    DISABLE=0,
    ENABLE=1
}Std_EnType;

typedef enum
{
    E_OK,
    E_NOT_OK
}Std_ReturnType;

#define Std_High                1
#define Std_Low                 0

#define NULL        0

/***********************************************************************************
*	GLOBAL FUNCTION MACROS
***********************************************************************************/


/***********************************************************************************
*	GLOBAL DATA TYPES AND STRUCTURES
***********************************************************************************/
#endif
/***********************************************************************************
*	END OF FILE: Std_Types.h
***********************************************************************************/

