/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_E0DBA665_1EF1_4ECC_BF90_B467759500E6
#define HAL_E0DBA665_1EF1_4ECC_BF90_B467759500E6

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/ByteBuffer.h"

//-----------------------------------------------------------------------------------------
#include "./SerialPeriphMode.h"
#include "./SerialPeriphEvent.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"

/* ****************************************************************************************
 * Namespace
 */  
namespace hal{
  struct SerialPeriph;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::SerialPeriph :public hal::Base{
  /* **************************************************************************************
   * Method Get/Set
   */
  
  /**
   * @brief Get the Clock object
   * 
   * @return uint32_t 
   */
  virtual uint32_t getClock(void) = 0;

  /**
   * @brief Set the Clock object
   * 
   * @param clock 
   * @return uint32_t 
   */
  virtual uint32_t setClock(uint32_t clock) = 0;

  /**
   * @brief Get the Mode object
   * 
   * @return hal::SerialPeriphMode 
   */
  virtual hal::SerialPeriphMode getMode(void) = 0;

  /**
   * @brief Set the Mode object
   * 
   * @param mode 
   * @return hal::SerialPeriphMode 
   */
  virtual hal::SerialPeriphMode setMode(hal::SerialPeriphMode mode) = 0;  

  /**
   * @brief Get the Read Buffer object
   * 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* getReadBuffer(void) = 0;

  /**
   * @brief Set the Read Buffer object
   * 
   * @param byteBuffer 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* setReadBuffer(lang::ByteBuffer* byteBuffer) = 0;

  /**
   * @brief Get the Write Buffer object
   * 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* getWriteBuffer(void) = 0;

  /**
   * @brief Set the Write Buffer object
   * 
   * @param byteBuffer 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* setWriteBuffer(lang::ByteBuffer* byteBuffer) = 0;

  /* **************************************************************************************
   * Method 
   */

  /**
   * @brief 取消讀取
   * 
   * @return true 取消成功
   * @return false 取消失敗
   */
  virtual bool abort(void) = 0;

  /**
   * @brief 
   * 
   * @return true 
   * @return false 
   */
  virtual bool isBusy(void) = 0;

  /**
   * @brief 
   * 
   * @param chipSelect 
   * @param event 
   * @return true 
   * @return false 
   */
  virtual bool transfer(uint32_t chipSelect, hal::SerialPeriphEvent* event) = 0;
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_E0DBA665_1EF1_4ECC_BF90_B467759500E6 */
