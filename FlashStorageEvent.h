/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef HAL_D9F1072A_3AF8_4A2E_9CFA_09471F1D5AA0
#define HAL_D9F1072A_3AF8_4A2E_9CFA_09471F1D5AA0

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
  struct FlashStorage;
  struct FlashStorageEvent;
}

/* ****************************************************************************************
 * Class/Interface/Struct
 */
struct hal::FlashStorageEvent : public virtual lang::Interface {
  /* **************************************************************************************
   * sub class/enum/struct
   */
  enum struct Status : char {
    WRITE_SUCCESSFUL,
    WRITE_FAIL,
    READ_SUCCESSFUL,
    READ_FAIL
  };

  /* **************************************************************************************
   * Method
   */

  /**
   * @brief
   *
   * @param status
   * @param flashStorage
   */
  virtual void onFlashStorageEvent(Status status, FlashStorage& flash) abstract;
};

#endif /* HAL_D9F1072A_3AF8_4A2E_9CFA_09471F1D5AA0 */
