/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_BA8DBAF0_DCE9_4F33_B776_7C5470172961
#define MFRAME_BA8DBAF0_DCE9_4F33_B776_7C5470172961

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../../lang/Interface.h"

/* ****************************************************************************************
 * Namespace
 */

namespace hal::trigger {
  struct EventRise;
}  // namespace hal::trigger

/* ****************************************************************************************
 * Class/Interface/Struct
 */

/**
 * @brief 邊緣觸發正觸發事件 <Interface>
 * 
 */
struct hal::trigger::EventRise : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   *
   * @param status
   */
  virtual void onEdgeTriggerRise(void) abstract;
};

/* *****************************************************************************************
 * End of file
 */

#endif /* MFRAME_BA8DBAF0_DCE9_4F33_B776_7C5470172961 */
