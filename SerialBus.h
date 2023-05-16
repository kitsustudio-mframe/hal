/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_BE431D3A_03AC_4CF4_85C2_68C442B30474
#define HAL_BE431D3A_03AC_4CF4_85C2_68C442B30474

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "../lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"
#include "./SerialBusEvent.h"

/* ****************************************************************************************
 * Namespace
 */  
namespace hal{
  struct SerialBus;
}

/* ****************************************************************************************
 * Interface/Class/Struct
 */  
struct hal::SerialBus :public hal::Base{

  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 終止讀寫
   * 
   * @return true 終止成功
   * @return false 終止失敗
   */
  virtual bool abort(void) = 0;
  
 /**
   * @brief 取得輸出頻率
   * 
   * @return uint32_t Hz
   */
  virtual uint32_t getClockRate(void) = 0;

  /**
   * @brief 設定輸出頻率
   * 
   * @param clock 期望輸出頻率
   * @return uint32_t Hz，實際設定頻率
   */
  virtual uint32_t setClockRate(uint32_t clock) = 0;

  /**
   * @brief 設定讀寫地址
   * 
   * @param address 讀寫地址
   * @return uint16_t 實際設定之讀寫地址
   */
  virtual uint16_t setAddress(uint16_t address) = 0;

  /**
   * @brief 取得已被設定之讀寫地址
   * 
   * @return uint16_t 地址
   */
  virtual uint16_t getAddress(void) = 0;
  
  /**
   * @brief Set the Write Buffer object
   * 
   * @param writeBuffer 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* setWriteBuffer(lang::ByteBuffer* writeBuffer) = 0;

  /**
   * @brief Get the Write Buffer object
   * 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* getWriteBuffer(void) = 0;

  /**
   * @brief Set the Read Buffer object
   * 
   * @param readBuffer 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* setReadBuffer(lang::ByteBuffer* readBuffer) = 0;

  /**
   * @brief Get the Read Buffer object
   * 
   * @return lang::ByteBuffer* 
   */
  virtual lang::ByteBuffer* getReadBuffer(void) = 0;

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
   * @param address 
   * @param in 
   * @param event 
   */
  virtual bool read(hal::SerialBusEvent* event) = 0;

  /**
   * @brief 
   * 
   * @param address 
   * @param out 
   * @param event 
   */
  virtual bool write(hal::SerialBusEvent* event) = 0;
  
  /**
   * @brief 
   * 
   * @param address 
   * @param out 
   * @param in 
   * @param event 
   * @return true 
   * @return false 
   */
  virtual bool transfer(hal::SerialBusEvent* event) = 0;
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_BE431D3A_03AC_4CF4_85C2_68C442B30474 */
