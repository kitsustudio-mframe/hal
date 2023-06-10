/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_BCEF8EF1_8E8F_4C7F_B575_41D3DEE77164
#define MFRAME_BCEF8EF1_8E8F_4C7F_B575_41D3DEE77164

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../hal/GeneralInput.h"
#include "./../hal/GeneralOutput.h"
#include "./../hal/GeneralPinMode.h"

/* ****************************************************************************************
 * Namespace
 */

namespace hal {
  struct GeneralPin;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */

/**
 * @brief 通用引腳輸入輸出，硬體抽象層 <Interface>
 *
 */
struct hal::GeneralPin : public hal::GeneralOutput,
                         public hal::GeneralInput {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 取得引腳工作模式。
   *
   * @return @link hal::GeneralPinMode @endlink
   *
   * - PUSH_PULL 推輓輸出
   * - PULL_UP 引腳上拉
   * - PULL_DOWN 引腳下拉
   * - OPEN_DRAIN 開路模式
   */
  virtual hal::GeneralPinMode getPinMode(void) abstract;

  /**
   * @brief 設定引腳工作模式：
   *
   * @param mode @link hal::GeneralPinMode @endlink
   *
   * - PUSH_PULL 推輓輸出。
   * - PULL_UP 引腳上拉。
   * - PULL_DOWN 引腳下拉。
   * - OPEN_DRAIN 開路模式。
   *
   * @return hal::GeneralPinMode 返回設定模式：
   *
   * - PUSH_PULL 推輓輸出。
   * - PULL_UP 引腳上拉。
   * - PULL_DOWN 引腳下拉。
   * - OPEN_DRAIN 開路模式。
   */
  virtual hal::GeneralPinMode setPinMode(hal::GeneralPinMode mode) abstract;

  /**
   * @brief 取得引腳的輸出輸入方向。
   *
   * @return true 輸出。
   * @return false 輸入。
   */
  virtual bool getDir(void) abstract;

  /**
   * @brief 設定引腳的輸出輸入方向。
   *
   * @param dir 
   * 
   * - true 設定為輸出。
   * - false = 設定為輸入。
   */
  virtual void setDir(bool dir) abstract;

  /**
   * @brief Set the Input object
   *
   */
  virtual void setInput(void) abstract;

  /**
   * @brief Set the Output object
   *
   */
  virtual void setOutput(void) abstract;
};

/* *****************************************************************************************
 * End of file
 */

#endif /* MFRAME_BCEF8EF1_8E8F_4C7F_B575_41D3DEE77164 */
