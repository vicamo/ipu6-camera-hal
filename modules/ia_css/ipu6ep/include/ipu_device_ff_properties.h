/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2015 - 2019 Intel Corporation.
 * All Rights Reserved.
 *
 * The source code contained or described herein and all documents
 * related to the source code ("Material") are owned by Intel Corporation
 * or licensors. Title to the Material remains with Intel
 * Corporation or its licensors. The Material contains trade
 * secrets and proprietary and confidential information of Intel or its
 * licensors. The Material is protected by worldwide copyright
 * and trade secret laws and treaty provisions. No part of the Material may
 * be used, copied, reproduced, modified, published, uploaded, posted,
 * transmitted, distributed, or disclosed in any way without Intel's prior
 * express written permission.
 *
 * No License under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or
 * delivery of the Materials, either expressly, by implication, inducement,
 * estoppel or otherwise. Any license under such intellectual property rights
 * must be express and approved by Intel in writing.
 */

#ifndef __IPU_DEVICE_FF_PROPERTIES_H
#define __IPU_DEVICE_FF_PROPERTIES_H

#include "storage_class.h"

STORAGE_CLASS_INLINE unsigned int
ipu_device_ff_ctrl_address(const unsigned int ff_id);

STORAGE_CLASS_INLINE unsigned int
ipu_device_ff_data_bus_address(const unsigned int ff_id);

STORAGE_CLASS_INLINE unsigned int
ipu_device_ff_control_bus_to_data_bus_address(void);

STORAGE_CLASS_INLINE unsigned int
ipu_device_ff_power_feature_address(const unsigned int ff_id);

STORAGE_CLASS_INLINE unsigned int
ipu_device_ff_clock_gating_value(const unsigned int ff_id);

#include "ipu_device_ff_properties_func.h"

#endif /* __IPU_DEVICE_FF_PROPERTIES_H */
