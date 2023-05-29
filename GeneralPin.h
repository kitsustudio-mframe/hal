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
   * sub class/enum/struct
   */
  enum struct Mode : char;

  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 
   * 
   * @return PinMode 
   */
  virtual Mode getPinMode(void) abstract;

  /**
   * @brief Set the Pin Mode object
   * 
   * @param mode 
   * @return Mode 返回設定模式
   */
  virtual Mode setPinMode(Mode mode) abstract; 

  /**
   * @brief  Get io direction.
   * 
   * @return true output
   * @return false input
   */
  virtual bool getDir(void) abstract;
  
  /**
   * @brief Set io direction.
   * 
   * @param dir false = input, true = output.
   */
  virtual void setDir(bool dir) abstract;

  /**
   * @brief Set the Input object
   * 
   */
  virtual void setInput(void) abstract;

  /**
   * @brief Set the Output object
   * 
   */
  virtual void setOutput(void)abstract;
};

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
enum hal::GeneralPin::Mode : char{
  NOT_SUPPORT,
  PUSH_PULL,
  PULL_UP,
  PULL_DOWN,
  OPEN_DRAIN
};


/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_BCEF8EF1_8E8F_4C7F_B575_41D3DEE77164 */
