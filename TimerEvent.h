/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */

#ifndef HAL_DF0EC699_78D6_4243_A75D_F321C92D88BB
#define HAL_DF0EC699_78D6_4243_A75D_F321C92D88BB

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "lang/Interface.h"

//-----------------------------------------------------------------------------------------
#include "./TimerStatus.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{  
  struct Timer;
  struct TimerEvent;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::TimerEvent :public virtual lang::Interface{

  /* **************************************************************************************
   * Method
   */
  
  /**
   * @brief 
   * 
   * @param status 
   */
  virtual void onTimerEvent(hal::TimerStatus status, hal::Timer& timer) = 0;
};

#endif /* HAL_DF0EC699_78D6_4243_A75D_F321C92D88BB */
