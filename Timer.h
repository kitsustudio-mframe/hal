/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_AD0B942D_EE2D_4080_BDAD_3E9AACE341DA
#define HAL_AD0B942D_EE2D_4080_BDAD_3E9AACE341DA

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
#include "./Base.h"
#include "./TimerEvent.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{
  struct Timer;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::Timer :public hal::Base{

/* **************************************************************************************
   * Method
   */
  
  /**
   * @brief 
   * 
   */
  virtual void cancel(void) = 0;

  /**
   * @brief 
   * 
   * @return true 
   * @return false 
   */
  virtual bool isBusy(void) = 0;
  
  /**
   * @brief 
   * 
   * @return true 
   * @return false 
   */
  virtual bool isDone(void) = 0;

  /**
   * @brief 
   * 
   */
  virtual void waitDone(void) = 0;
  
  /**
   * @brief Get the Timer Clock object
   * 
   * @return uint32_t hz
   */
  virtual uint32_t getTimerClock(void) = 0;  

  /**
   * @brief 
   * 
   * @param tick 
   * @return true 
   * @return false 
   */
  virtual bool startAtTick(uint32_t tick) = 0;

  /**
   * @brief 
   * 
   * @param tick 
   * @param event 
   * @return true 
   * @return false 
   */
  virtual bool startAtTick(uint32_t tick, hal::TimerEvent* event) = 0;
  
  /**
   * @brief 
   * 
   * @param microSecond 
   * @return true 
   * @return false 
   */
  virtual bool startAtTime(uint32_t microSecond) = 0;

  /**
   * @brief 
   * 
   * @param microSecond 
   * @param event 
   * @return true 
   * @return false 
   */
  virtual bool startAtTime(uint32_t microSecond, hal::TimerEvent* event) = 0;
  
  /**
   * @brief 
   * 
   * @param tick 
   */
  virtual void resetTick(uint32_t tick) = 0;

};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_AD0B942D_EE2D_4080_BDAD_3E9AACE341DA */
