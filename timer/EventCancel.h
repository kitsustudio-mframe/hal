/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_BBBD0380_DB14_422C_BED7_CF09F8A9BA5A
#define HAL_BBBD0380_DB14_422C_BED7_CF09F8A9BA5A

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */
namespace hal::timer {
  struct EventCancel;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct hal::timer::EventCancel : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 計時器取消事件
   * 
   * 當計時器取消時呼叫此事件
   */
  virtual void onTimerCancel(void) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* HAL_BBBD0380_DB14_422C_BED7_CF09F8A9BA5A */
