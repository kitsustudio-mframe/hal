/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_9C2CA0D2_D921_428A_B411_A41968013B4F
#define HAL_9C2CA0D2_D921_428A_B411_A41968013B4F

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */

namespace hal{
  struct PulseWidthPort;
}


/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct hal::PulseWidthPort :public hal::Base{

  /* **************************************************************************************
   * Method
   */
  /**
   * @brief Set the Frequence object
   * 
   * @param hz 
   * @return true 
   * @return false 
   */
  virtual bool setFrequence(float hz) = 0;

  /**
   * @brief Get the Frequence object
   * 
   * @return float 
   */
  virtual float getFrequence(void) = 0;

  /**
   * @brief Get the Period object
   * 
   * @return int 
   */
  virtual int getPeriod(void) = 0;
  
  /**
   * @brief Get the Duty object
   * 
   * @param pin 
   * @return float 
   */
  virtual float getDuty(int pin) = 0;

  /**
   * @brief Get the Duty Tick object
   * 
   * @param pin 
   * @return int 
   */
  virtual int getDutyTick(int pin) = 0;
  
  /**
   * @brief Set the Duty object
   * 
   * @param pin 
   * @param percent 
   * @return true 
   * @return false 
   */
  virtual bool setDuty(int pin, float percent) = 0;
  
  /**
   * @brief Set the Duty Tick object
   * 
   * @param pin 
   * @param duty 
   * @return true 
   * @return false 
   */
  virtual bool setDutyTick(int pin, int duty) = 0;

  /**
   * @brief 
   * 
   * @param pin 
   * @return true 
   * @return false 
   */
  virtual bool enable(int pin) = 0;
  
  /**
   * @brief 
   * 
   * @param pin 
   * @return true 
   * @return false 
   */
  virtual bool disable(int pin) = 0;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* HAL_9C2CA0D2_D921_428A_B411_A41968013B4F */
