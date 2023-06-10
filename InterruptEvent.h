/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_9E61DE90_7223_4EE7_BB33_FE3C45509F28
#define MFRAME_9E61DE90_7223_4EE7_BB33_FE3C45509F28

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../lang/Interface.h"

/* ****************************************************************************************
 * Namespace
 */

namespace hal {
  struct InterruptEvent;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */

/**
 * @brief 硬體中斷觸發事件，硬體抽象層 <Interface>
 * 
 */
struct hal::InterruptEvent : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 硬體中斷觸發事件
   * 
   */
  virtual void interruptEvent(void) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* MFRAME_9E61DE90_7223_4EE7_BB33_FE3C45509F28 */
