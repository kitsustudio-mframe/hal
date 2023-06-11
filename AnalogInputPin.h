/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_B16985A9_A63C_403C_9D7B_5B3BB7B33CFA
#define MFRAME_B16985A9_A63C_403C_9D7B_5B3BB7B33CFA

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../hal/Base.h"
#include "./../lang/Interface.h"

/* ****************************************************************************************
 * Namespace
 */

namespace mframe::hal {
  struct AnalogInputPin;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */

/**
 * @brief 類比輸入訊號引腳硬體抽象層 <Interface>
 *
 */
struct mframe::hal::AnalogInputPin : public virtual mframe::lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   *
   * @return uint32_t
   */
  virtual uint32_t convert(void) abstract;

  /**
   * @brief Get the adc convert level.
   *
   * @return uint32_t
   */
  virtual uint32_t getConvertLevel(void) abstract;
};

/* *****************************************************************************************
 * End of file
 */

#endif /* MFRAME_B16985A9_A63C_403C_9D7B_5B3BB7B33CFA */
