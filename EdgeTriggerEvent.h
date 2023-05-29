/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_BA8DBAF0_DCE9_4F33_B776_7C5470172961
#define HAL_BA8DBAF0_DCE9_4F33_B776_7C5470172961

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "lang/Interface.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */

namespace hal {
  class EdgeTrigger;
  struct EdgeTriggerEvent;
}  // namespace hal

/* ****************************************************************************************
 * Class/Interface/Struct
 */
struct hal::EdgeTriggerEvent : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   *
   * @param status
   */
  virtual void onEdgeTriggerRise(EdgeTrigger& edgeTrigger) abstract;

  /**
   * @brief
   *
   * @param status
   */
  virtual void onEdgeTriggerFall(EdgeTrigger& edgeTrigger) abstract;
};

/* *****************************************************************************************
 * End of file
 */

#endif /* HAL_BA8DBAF0_DCE9_4F33_B776_7C5470172961 */
