/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_F910971C_89D1_4087_ACD7_DADFFCDFD72D
#define HAL_F910971C_89D1_4087_ACD7_DADFFCDFD72D

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */

namespace hal{
  struct PulseWidthPin;
}


/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct hal::PulseWidthPin :public virtual lang::Interface{

  /* **************************************************************************************
   * Method
   */
  
  /**
   * @brief Get the Period object
   * 
   * @return int 
   */
  virtual int getPeriod(void) abstract;
  
  /**
   * @brief Get the Duty object
   * 
   * @return float 
   */
  virtual float getDuty(void) abstract;
  
  /**
   * @brief Get the Frequence object
   * 
   * @return float 
   */
  virtual float getFrequence(void) abstract;
  
  /**
   * @brief Set the Duty object
   * 
   * @param percent 0 ~ 1.0
   * @return true 
   * @return false 
   */
  virtual bool setDuty(float percent) abstract;
  
  /**
   * @brief Set the Duty object
   * 
   * @param duty 
   * @return true 
   * @return false 
   */
  virtual bool setDuty(int duty) abstract;

  /**
   * @brief 
   * 
   * @return true 
   * @return false 
   */
  virtual bool stop(void) abstract;

};

/* ****************************************************************************************
 * End of file
 */

#endif /* HAL_F910971C_89D1_4087_ACD7_DADFFCDFD72D */
