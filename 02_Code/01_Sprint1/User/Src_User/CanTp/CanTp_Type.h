/****************************************************************************
* File Name : CanIf_Type.h
*
* Modules : CAN Interface Layer head file
*
* Summary : 1.The file define use data type in can interface layer.
* 			2.The module between CAN Driver and CanTP modules.
*
*
* Reference Documents : None
*
/****************************************************************************
* Author : Mingfen XIAO
* Version : V0.1
* Date	: 2018-10-09
* Description : 1.Create the modules
* 				2.Initialization Version
****************************************************************************/
#ifndef CANTP_TYPE_H_
#define CANTP_TYPE_H_

/*Include head files AREA*/
#include "..\Common\Common.h"
#include "CanTp_Cfg_Define.h"

/*
 * Can message structure
 * include : can channel,can message id,can message data,can message data length
 * */
typedef struct CanTp_CanMsgStruct_Type_Tag
{
	uint8 CanChNo;
#if(CANTP_CANMESSAGEIDTYPE == STANDARD)
	uint16 CanMsgId;
#else
	uint32 CanMsgId;
#endif
	uint8 CanMsgDlc;
#if (CANTP_CONRTOLLERTYPE == CANFD)
	uint8 CanData[64];
#else
	uint8 CanData[8];
#endif
}CanTp_CanMsgStruct_Type;

/*
 * Diagnostic protocol data unit structure
 * include :
 * */
typedef struct CanTp_ProtocolDataUnitStruct_Type_Tag
{
	uint8 BusChannel;
	uint8 ReqMsgType;
#if(CANTP_CONRTOLLERTYPE == CAN)
	uint8 DataLength;
#else
	uint8 DataLength;
#endif
	uint8 *ReqData;
}CanTp_ProtocolDataUnitStruct_Type;

/*
 * Diagnostic protocol data unit Receive control information structure
 * include :
 * */
typedef struct CanTp_RecvPduControlInformation_Type_Tag
{
	uint8 RecvLockFlag; /*0:idle,1:running,2:done*/
	uint8 BusChannel;
	uint8 FrameType;
	uint8 ReqMsgType;
	uint32 MsgId;
#if(CANTP_CONRTOLLERTYPE == CAN)
	uint8 TotalDataLength;
#else
	uint8 TotalDataLength;
#endif
#if(CANTP_CONRTOLLERTYPE == CAN)
	uint8 RecvDataLength;
#else
	uint8 RecvDataLength;
#endif
	uint8 *ReqData; /*需要注意,这个指针的地址问题*/
}CanTp_RecvPduControlInformation_Type;

typedef struct CanTp_BuffControlInformation_Type_Tag
{
	uint8 WriteIndex;
	uint8 ReadIndex;
}CanTp_BuffControlInformation_Type;


typedef enum
{
	CANTP_FRAME_TYPE_SF = 0,
	CANTP_FRAME_TYPE_FF = 1,
	CANTP_FRAME_TYPE_CF = 2,
	CANTP_FRAME_TYPE_FC = 3,
	CANTP_FRAME_TYPE_NONE
};

typedef enum
{
	CANTP_MSG_TYPE_REQ_PHY	 	= 0,
	CANTP_MSG_TYPE_REQ_FUNC 	= 1,
	CANTP_MSG_TYPE_RESPONSE		= 2,
	CANTP_MSG_TYPE_NONE
};

#endif /* CANTP_TYPE_H_ */
