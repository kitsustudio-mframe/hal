/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_C04F29D8_8794_4EA6_A3AD_CFBD1C61458B
#define MFRAME_C04F29D8_8794_4EA6_A3AD_CFBD1C61458B

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../hal/Base.h"

/* ****************************************************************************************
 * Namespace
 */

namespace mframe::hal {
  struct AnalogInputPort;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */

/**
 * @brief 類比輸入訊號硬體抽象層 <Interface>
 *
 */
struct mframe::hal::AnalogInputPort : public mframe::hal::Base {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   *
   * @param pin
   * @return uint32_t
   */
  virtual uint32_t read(int channel) abstract;

  /**
   * @brief Get the adc convert bit.
   *
   * @return uint32_t
   */
  virtual uint32_t getConvertLevel(void) abstract;
};

/* *****************************************************************************************
 * End of file
 */

#endif /* MFRAME_C04F29D8_8794_4EA6_A3AD_CFBD1C61458B */
