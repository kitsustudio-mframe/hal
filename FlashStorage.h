/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 * 
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_DE1F2BD6_EFF1_4410_A5B2_5A1C14D00695
#define HAL_DE1F2BD6_EFF1_4410_A5B2_5A1C14D00695

/* ****************************************************************************************
 * Include
 */  

//-----------------------------------------------------------------------------------------
#include "../lang/ByteBuffer.h"

//-----------------------------------------------------------------------------------------
#include "./Base.h"
#include "./FlashStorageEvent.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */  

namespace hal{  
  struct FlashStorage;
}


/* ****************************************************************************************
 * Class/Interface/Struct
 */  
struct hal::FlashStorage :public hal::Base{

  /* **************************************************************************************
   * Method
   */

  /**
   * @brief Set the Address object
   * 
   * @param address 
   */
  virtual void setAddress(uint32_t address) = 0;

  /**
   * @brief Get the Address object
   * 
   * @return uint32_t 
   */
  virtual uint32_t getAddress(void) = 0;

  /**
   * @brief 
   * 
   * @return uint32_t 
   */
  virtual uint32_t getFlashSize(void) = 0;

  /**
   * @brief 
   * 
   * @return uint32_t 
   */
  virtual uint32_t getPageSize(void) = 0;

  /**
   * @brief 
   * 
   * @param pageNumber 
   * @return true 
   * @return false 
   */
  virtual bool pageErase(uint32_t pageNumber) = 0;

  /**
   * @brief 
   * 
   * @return uint32_t 
   */
  virtual uint32_t getSectorSize(void) = 0;

  /**
   * @brief 
   * 
   * @param sectorNumber 
   * @return true 
   * @return false 
   */
  virtual bool sectorErase(uint32_t sectorNumber) = 0;

  /**
   * @brief flash寫入
   * 
   * @param bytebuffer 寫入資料來源
   * @param event 完成事件
   * @return true 設定寫入成功
   * @return false 設定寫入失敗，可能設備正在忙碌中
   */
  virtual bool write(lang::ByteBuffer& bytebuffer, hal::FlashStorageEvent* event) = 0;

  /**
   * @brief flash讀取
   * 
   * @param bytebuffer 資料讀取至目標
   * @param event 事件
   * @return true 設定讀取成功
   * @return false 設定讀取失敗，設備可能正在忙碌中
   */
  virtual bool read(lang::ByteBuffer& bytebuffer, hal::FlashStorageEvent* event) = 0;
};

/* *****************************************************************************************
 * End of file
 */ 

#endif /* HAL_DE1F2BD6_EFF1_4410_A5B2_5A1C14D00695 */
