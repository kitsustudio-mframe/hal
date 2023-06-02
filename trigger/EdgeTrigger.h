/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_EFF1A157_A291_4313_A742_99FB124D0B71
#define HAL_EFF1A157_A291_4313_A742_99FB124D0B71

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "./../Base.h"

//-----------------------------------------------------------------------------------------
#include "./EventFall.h"
#include "./EventRise.h"

/* ****************************************************************************************
 * Namespace
 */

namespace hal::trigger {
  struct EdgeTrigger;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */
struct hal::trigger::EdgeTrigger : public hal::Base {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 啟動或關閉正負緣觸發
   *
   * @param enable
   * - true 啟用
   * - false 禁用
   */
  virtual void enableAll(bool enable) abstract;

  /**
   * @brief 啟用負緣觸發
   *
   * @param enable
   * - true 啟用
   * - false 禁用
   */
  virtual void enableFall(bool enable) abstract;

  /**
   * @brief 啟動正緣觸發
   *
   * @param enable
   * - true 啟用
   * - false 禁用
   */
  virtual void enableRise(bool enable) abstract;

  /**
   * @brief Set the Event Rise object
   *
   * @param event
   */
  virtual void setEventRise(hal::trigger::EventRise* event) abstract;

  /**
   * @brief Set the Event Fall object
   *
   * @param event
   */
  virtual void setEventFall(hal::trigger::EventFall* event) abstract;

  /**
   * @brief 讀取是否有發生正緣觸發
   *
   * 嘗試讀取狀態，若發生觸發將回傳true並且清除事件
   *
   *
   * Tips: 若已設定setEventRise事件，此方法將永遠回傳false
   *
   * @return true 已發生觸發
   * @return false 尚未發生觸發
   */
  virtual bool readRise(void) abstract;

  /**
   * @brief 讀取是否有發生負緣觸發
   *
   * 嘗試讀取狀態，若發生觸發將回傳true並且清除事件
   *
   *
   * Tips: 若已設定setEventFall事件，此方法將永遠回傳false
   *
   * @return true 已發生觸發
   * @return false 尚未發生觸發
   */
  virtual bool readFall(void) abstract;
};

/* *****************************************************************************************
 * End of file
 */

#endif /* HAL_EFF1A157_A291_4313_A742_99FB124D0B71 */
