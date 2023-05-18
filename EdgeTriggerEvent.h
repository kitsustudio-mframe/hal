/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_BA8DBAF0_DCE9_4F33_B776_7C5470172961
#define HAL_BA8DBAF0_DCE9_4F33_B776_7C5470172961

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "lang/Interface.h"

//-----------------------------------------------------------------------------------------
#include "./EdgeTriggerStatus.h"

/* ****************************************************************************************
 * Namespace
 */

namespace hal{
  struct EdgeTriggerEvent;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::EdgeTriggerEvent :public virtual lang::Interface{
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 
   * 
   * @param status 
   */
  virtual void onEdgeTriggerEvent(hal::EdgeTriggerStatus status) = 0;
  
};



/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_BA8DBAF0_DCE9_4F33_B776_7C5470172961 */
