/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_A805502A_41D9_45B8_A89A_B11ED86A2F19
#define HAL_A805502A_41D9_45B8_A89A_B11ED86A2F19

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "../lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "../lang/InputStreamBuffer.h"
#include "../lang/OutputStream.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"


/* ****************************************************************************************
 * Namespace
 */  
namespace hal{
  struct SerialPort;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::SerialPort :public hal::Base,
    lang::InputStream,
    lang::OutputStream{

  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 
   * 
   * @return uint32_t 
   */
  virtual uint32_t getBaudrate(void) = 0;

  /**
   * @brief Set the Baudrate object
   * 
   * @param baudrate 期望的輸出鮑率
   * @return uint32_t 實際的輸出鮑率
   */
  virtual uint32_t setBaudrate(uint32_t baudrate) = 0;
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_A805502A_41D9_45B8_A89A_B11ED86A2F19 */
