/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_151D474C_7D7F_471E_96DB_052C7A994602
#define HAL_151D474C_7D7F_471E_96DB_052C7A994602

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
#include "./../Base.h"
#include "./Event.h"

/* ****************************************************************************************
 * Namespace
 */
namespace hal::usart {
  struct USART;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct hal::usart::USART : public hal::Base {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   * 設定UART Baudrate，返回值為設定後的數值。
   * 隨核心頻率不同，可能只能產生相近的Baudrate
   *
   * @param baudrate 預期的Baudrate
   * @return uint32_t 隨設備頻率所產生的Baudrate
   */
  virtual uint32_t setBuadrate(uint32_t baudrate) abstract;

  /**
   * @brief
   * 取得UART Baudrate
   *
   * @return uint32_t Baudrate
   */
  virtual uint32_t getBaudrate(void) abstract;

  /**
   * @brief
   * 設定UART開始或關閉輸出緩衝器空事件監聽，當輸出緩存為空時將會呼叫Event::onUartTransfer
   *
   * @param enable - true為開始監聽，false則否
   */
  virtual void beginTransfer(bool enable) abstract;

  /**
   * @brief
   * 設定UART開始或關閉接收緩衝器滿事件監聽，當有新資料接收成功後將會呼叫Event::onUartReceiver
   *
   * @param enable - true為開始監聽，false則否
   */
  virtual void beginReceiver(bool enable) abstract;

  /**
   * @brief
   * 設定UART事件物件，當參數為nullptr時取消監聽與事件。
   *
   * @param event 事件，可為nullptr
   */
  virtual void setEvent(Event* event) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* HAL_151D474C_7D7F_471E_96DB_052C7A994602 */
