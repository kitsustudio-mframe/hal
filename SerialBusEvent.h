/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_F948F450_E9C5_4979_8B11_1563B5BE65F6
#define HAL_F948F450_E9C5_4979_8B11_1563B5BE65F6

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "lang/Interface.h"
#include "lang/ByteBuffer.h"

//-----------------------------------------------------------------------------------------
#include "./SerialBusStatus.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{
  struct SerialBus;
  struct SerialBusEvent;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::SerialBusEvent :public virtual lang::Interface{

  /* **************************************************************************************
   * Method
   */
  
  /**
   * @brief SerialBus讀取事件
   * 
   * @param status 事件狀態
   * @param serialBus 執行本體
   */
  virtual void onSerialBusEvent(hal::SerialBusStatus status, hal::SerialBus& serialBus) = 0;
  
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_F948F450_E9C5_4979_8B11_1563B5BE65F6 */
