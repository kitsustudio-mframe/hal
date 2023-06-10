/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_477CBD58_814E_44DC_AC26_88630DD5162D
#define MFRAME_477CBD58_814E_44DC_AC26_88630DD5162D

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../../lang/Interface.h"

/* ****************************************************************************************
 * Namespace
 */
namespace hal::trigger {
  struct EventFall;
}  // namespace hal::trigger

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */

/**
 * @brief 邊緣觸發負觸發事件 <Interface>
 * 
 */
struct hal::trigger::EventFall : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   *
   * @param status
   */
  virtual void onEdgeTriggerFall(void) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* MFRAME_477CBD58_814E_44DC_AC26_88630DD5162D */
