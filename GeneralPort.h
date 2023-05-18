/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_DA8BBDE6_3AFE_4070_945C_08F9966A0B20
#define HAL_DA8BBDE6_3AFE_4070_945C_08F9966A0B20

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
#include "./Base.h"

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{
  struct GeneralPort;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::GeneralPort :public hal::Base{
  /* **************************************************************************************
   * Method 
   */

  /**
   * @brief 
   * 
   * @param port 
   * @return uint32_t 
   */
  virtual uint32_t dir(uint32_t port) = 0;

  /**
   * @brief 
   * 
   * @param port 
   * @param value 
   */
  virtual void dir(uint32_t port, uint32_t value) = 0;
  
  /**
   * @brief 
   * 
   * @param port 
   * @param mask 
   */
  virtual void dirClear(uint32_t port, uint32_t mask) = 0;
  
  /**
   * @brief 
   * 
   * @param port 
   * @param mask 
   */
  virtual void dirSet(uint32_t port, uint32_t mask) = 0;

  /**
   * @brief Get port value.
   * 
   * @param port GPIO port.
   * @return pin value 0 = low, 1 = high.
   */
  virtual uint32_t pin(uint32_t port) = 0;

  /**
   * @brief Set port value.
   * 
   * @param port GPIO port.
   * @param value 0 = low, 
   *              1 = high.
   */
  virtual void pin(uint32_t port, uint32_t value) = 0;
  
  /**
   * @brief Set port mask low.
   * 
   * @param port GPIO port.
   * @param value 0 = No operation. 
   *              1 = Set output bit low.
   */
  virtual void pinClear(uint32_t port, uint32_t mask) = 0;

  /**
   * @brief Set port mask high.
   * 
   * @param port GPIO port.
   * @param value 0 = No operation. 
   *              1 = Set output bit high.
   */
  virtual void pinSet(uint32_t port, uint32_t mask) = 0;
  
  /**
   * @brief Set port mask toggle.
   * 
   * @param port GPIO port.
   * @param value 0 = No operation. 
   *              1 = Set output bit toggle.
   */
  virtual void pinToggle(uint32_t port, uint32_t mask) = 0;
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_DA8BBDE6_3AFE_4070_945C_08F9966A0B20 */
