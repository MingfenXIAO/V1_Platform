/****************************************************************************
* File Name : VFB_Dcm.h
*
* Modules : Virtual Function Bus base on diagnostic communication management Layer
*
* Summary :
*
* Reference Documents :
*
/****************************************************************************
* Author : Mingfen XIAO
* Version : V0.1
* Date	: 2018-12-02
* Description : 1.Create the modules
* 				2.Initialization Version
****************************************************************************/
#ifndef	_VFB_DCM_H_
#define	_VFB_DCM_H_

/*Include head files AREA*/
#include "..\Common\Common.h"
#include "..\Debug\Debug.h"
#include "..\CanTp\CanTp.h"

/*Macro definition AREA*/



/*Function declaration AREA*/
/****************************************************************************
 * @function	Dcm_CanTp_SendDiagnosticResponseData
 * @brief  		receive diagnostic response data from Dcm modules
 * @param  		ChNo : intput parameters,
 * 				DatLength : input parameters, diagnostic response data length
 * 				ptr_Data : input parameters,diagnostic response data
 * @retval 		ret : function execute result
 * @attention   null
****************************************************************************/
#define Dcm_CanTp_SendDiagnosticResponseData(ChNo, DataLength, ptr_Data)		CanTp_ReceiveDiagnosticResponseData(ChNo, DataLength, ptr_Data)

/****************************************************************************
 * @function	Debug_Dcm_OutputInfo
 * @brief
 * @param
 * @retval
 * @attention
****************************************************************************/
#define Dcm_Debug_OutputInfo(x)		Debug_Dcm_OutputInfo(x)





#endif /*_VFB_DCM_H_*/
/*********************************File End*********************************/