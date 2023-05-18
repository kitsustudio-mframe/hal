/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_C49120BF_2531_4068_86B3_87BA2D347ED7
#define HAL_C49120BF_2531_4068_86B3_87BA2D347ED7

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "lang/Interface.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */  
namespace hal{
  struct Base;
}


/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::Base :public virtual lang::Interface{
  /**
   * @brief uninitialze hardware.
   * 
   * @return true 
   * @return false 
   */
  virtual bool deinit(void) = 0;

  /**
   * @brief initialze hardware;
   * 
   * @return true 
   * @return false 
   */
  virtual bool init(void) = 0;

  /**
   * @brief get hardware initialzed status.
   * 
   * @return true not init
   * @return false initd
   */
  virtual bool isInit(void) = 0;
   
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_C49120BF_2531_4068_86B3_87BA2D347ED7 */
