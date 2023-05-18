/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_D9F1072A_3AF8_4A2E_9CFA_09471F1D5AA0
#define HAL_D9F1072A_3AF8_4A2E_9CFA_09471F1D5AA0

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "lang/Interface.h"

//-----------------------------------------------------------------------------------------
#include "./FlashStorageStatus.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{
  struct FlashStorageEvent;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::FlashStorageEvent :public virtual lang::Interface{

  /* **************************************************************************************
   * Method
   */
  
  /**
   * @brief 
   * 
   * @param status 
   * @param flashStorage 
   */
  virtual void onFlashStorageEvent(hal::FlashStorageStatus status) = 0;

};

#endif /* HAL_D9F1072A_3AF8_4A2E_9CFA_09471F1D5AA0 */
