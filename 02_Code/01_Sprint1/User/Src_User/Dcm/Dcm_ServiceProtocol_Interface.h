/****************************************************************************
* File Name : Dcm_ServiceProtocol_Interface.h
*
* Modules : Diagnostic communication management modules submodules
*           implements the uds service protocol function.
*
* Summary :
*
* Reference Documents :
*
/****************************************************************************
* Author : Mingfen XIAO
* Version : V0.1
* Date	: 2018-12-08
* Description : 1.Create the modules
* 				2.Initialization Version
****************************************************************************/
#ifndef	_DCM_SERVICEPORTOCOL_INTERFACE_H_
#define	_DCM_SERVICEPORTOCOL_INTERFACE_H_

/*Include head files AREA*/
#include "..\Common\Common.h"
#include "Dcm_Type.h"
#include "Dcm_Cfg_Define.h"
#include "VFB_Dcm.h"
#include "Dcm.h"

/*Macro definition AREA*/
#define _DCM_C_	/*define use CanTp.c*/

#ifndef _DCM_C_
#define DCM_EXTERN_API
#define DCM_LOCAL_API
#else
#define DCM_EXTERN_API extern
#define DCM_LOCAL_API static
#endif /*_DCM_C_*/





/*Variable Define AREA*/


/*Function declaration AREA*/



#endif /*_DCM_SERVICEPORTOCOL_INTERFACE_H_*/
/*********************************File End*********************************/
