/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_EFF1A157_A291_4313_A742_99FB124D0B71
#define HAL_EFF1A157_A291_4313_A742_99FB124D0B71

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"

//-----------------------------------------------------------------------------------------
#include "./EdgeTriggerEvent.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{
  struct EdgeTrigger;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::EdgeTrigger :public hal::Base{
  /* **************************************************************************************
   * Method
   */
  /**
   * @brief 取消全部邊緣觸發事件
   * 
   */
  virtual void disableAll(void) = 0;

  /**
   * @brief 取消負緣觸發
   * 
   */
  virtual void disableFall(void) = 0;

  /**
   * @brief 取消正緣觸發
   * 
   */
  virtual void disableRise(void) = 0;

  /**
   * @brief 啟用負緣觸發
   * 
   * @param event 觸發事件
   * @return true 設定成功
   * @return false 設定失敗
   */
  virtual bool enableFall(hal::EdgeTriggerEvent* event) = 0;

  /**
   * @brief 
   * 
   * @param event 啟用正緣觸發
   * @return true 設定成功
   * @return false 設定失敗
   */
  virtual bool enableRise(hal::EdgeTriggerEvent* event) = 0;
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_EFF1A157_A291_4313_A742_99FB124D0B71 */
