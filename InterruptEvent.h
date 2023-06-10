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
struct hal::InterruptEvent : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   *
   */
  virtual void interruptEvent(void) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* MFRAME_9E61DE90_7223_4EE7_BB33_FE3C45509F28 */
