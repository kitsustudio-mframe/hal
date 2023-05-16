/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_B4701C5A_F9C9_4C60_AF27_09CD2013EE9A
#define HAL_B4701C5A_F9C9_4C60_AF27_09CD2013EE9A

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "../lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "../lang/ByteBuffer.h"
#include "../lang/Interface.h"

//-----------------------------------------------------------------------------------------
#include "./SerialPeriphStatus.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{
  struct SerialPeriph;
  struct SerialPeriphEvent;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::SerialPeriphEvent :public lang::Interface{
  
  /* **************************************************************************************
   * Method
   */  
  
  /**
   * @brief 
   * 
   * @param status 
   * @param transfer 
   * @param receiver 
   */
  virtual void onSerialPeriphEvent(hal::SerialPeriphStatus status, 
                                   hal::SerialPeriph& serialPeriph) = 0;
};


/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_B4701C5A_F9C9_4C60_AF27_09CD2013EE9A */
