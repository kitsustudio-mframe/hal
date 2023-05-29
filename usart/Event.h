/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_EED8B891_287B_4333_8669_6523A44D8CCC
#define HAL_EED8B891_287B_4333_8669_6523A44D8CCC

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */
namespace hal::usart {
  struct Event;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct hal::usart::Event : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   * 接收事件，當成功接收字元時呼叫該方法。
   *
   * @param data 接收資料
   * @return true 持續接收下一個資料
   * @return false 取消接收下一個資料，並關閉接收緩衝器滿的事件監聽。
   */
  virtual bool onUartReceiver(const uint8_t data) abstract;

  /**
   * @brief
   *
   * @param data 預發送資料
   * @return true 發送該筆資料
   * @return false 取消發送資料，並結束輸出緩衝器空的事件間聽。
   */
  virtual bool onUartTrhasfer(uint8_t& data) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* HAL_EED8B891_287B_4333_8669_6523A44D8CCC */
