/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_F5896110_0162_406F_9ECE_A67699B0938F
#define HAL_F5896110_0162_406F_9ECE_A67699B0938F

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
  struct GeneralOutput;
}


/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct hal::GeneralOutput :public virtual lang::Interface{
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief Set the High object
   * 
   */
  virtual void setHigh(void) = 0;

  /**
   * @brief Set the Low object
   * 
   */
  virtual void setLow(void) = 0;

  /**
   * @brief Set the Toggle object
   * 
   */
  virtual void setToggle(void) = 0;  
  
  /**
   * @brief 
   * 
   * @param level 
   */
  virtual void setValue(bool level) = 0;

};

/* ****************************************************************************************
 * End of file
 */

#endif /* HAL_F5896110_0162_406F_9ECE_A67699B0938F */
