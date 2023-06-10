/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_9C655B34_D715_4F1E_957C_F1BFB3213FB8
#define MFRAME_9C655B34_D715_4F1E_957C_F1BFB3213FB8

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/Interface.h"

/* ****************************************************************************************
 * Namespace
 */
namespace hal {
  struct GeneralInput;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */

/**
 * @brief 通用引腳輸入，硬體抽象層 <Interface>
 *
 */
struct hal::GeneralInput : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief 取得引腳電平。
   *
   * @return true 高電平。
   * @return false 低電平。
   */
  virtual bool getValue(void) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* MFRAME_9C655B34_D715_4F1E_957C_F1BFB3213FB8 */
