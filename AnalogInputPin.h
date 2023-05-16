/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_B16985A9_A63C_403C_9D7B_5B3BB7B33CFA
#define HAL_B16985A9_A63C_403C_9D7B_5B3BB7B33CFA

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "../lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "../lang/Interface.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"

/* ****************************************************************************************
 * Namespace
 */

namespace hal{
  struct AnalogInputPin;
}


/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::AnalogInputPin :public virtual lang::Interface{

  /* **************************************************************************************
   * Method
   */
  
  /**
   * @brief 
   * 
   * @return uint32_t 
   */
  virtual uint32_t convert(void) = 0;

  /**
   * @brief Get the adc convert level.
   * 
   * @return uint32_t 
   */
  virtual uint32_t getConvertLevel(void) = 0;
};  

/* *****************************************************************************************
 * End of file
 */

#endif /* HAL_B16985A9_A63C_403C_9D7B_5B3BB7B33CFA */
