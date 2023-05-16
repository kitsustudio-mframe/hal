/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_C04F29D8_8794_4EA6_A3AD_CFBD1C61458B
#define HAL_C04F29D8_8794_4EA6_A3AD_CFBD1C61458B

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "../lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"

/* ****************************************************************************************
 * Namespace
 */

namespace hal{
  struct AnalogInputPort;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::AnalogInputPort :public hal::Base{

  /* **************************************************************************************
   * Method
   */
  /**
   * @brief 
   * 
   * @param pin 
   * @return uint32_t 
   */
  virtual uint32_t read(int channel) = 0;

  /**
   * @brief Get the adc convert bit.
   * 
   * @return uint32_t 
   */
  virtual uint32_t getConvertLevel(void) = 0;
};  

/* *****************************************************************************************
 * End of file
 */

#endif /* HAL_C04F29D8_8794_4EA6_A3AD_CFBD1C61458B */
