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
  struct EventTransfer;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct hal::usart::EventTransfer : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   *
   * @param data 預發送資料
   * @return true 發送該筆資料
   * @return false 取消發送資料，並結束輸出緩衝器空的事件間聽。
   */
  virtual bool onUartTransfer(uint8_t& data) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* HAL_EED8B891_287B_4333_8669_6523A44D8CCC */
