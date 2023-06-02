/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_BCEF8EF1_8E8F_4C7F_B575_41D3DEE77164
#define HAL_BCEF8EF1_8E8F_4C7F_B575_41D3DEE77164

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
#include "./GeneralInput.h"
#include "./GeneralOutput.h"
#include "./GeneralPinMode.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{
  struct GeneralPin;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::GeneralPin :public hal::GeneralOutput, hal::GeneralInput{

  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 
   * 
   * @return PinMode 
   */
  virtual hal::GeneralPinMode getPinMode(void) = 0;

  /**
   * @brief Set the Pin Mode object
   * 
   * @param mode 
   * @return hal::GeneralPinMode 返回設定模式
   */
  virtual hal::GeneralPinMode setPinMode(hal::GeneralPinMode mode) = 0; 

  /**
   * @brief  Get io direction.
   * 
   * @return true output
   * @return false input
   */
  virtual bool getDir(void) = 0;
  
  /**
   * @brief Set io direction.
   * 
   * @param dir false = input, true = output.
   */
  virtual void setDir(bool dir) = 0;

  /**
   * @brief Set the Input object
   * 
   */
  virtual void setInput(void) = 0;

  /**
   * @brief Set the Output object
   * 
   */
  virtual void setOutput(void) = 0;
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_BCEF8EF1_8E8F_4C7F_B575_41D3DEE77164 */
