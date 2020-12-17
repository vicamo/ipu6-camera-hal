/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2019 - 2020 Intel Corporation.
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

#ifndef __IPU_DEVICE_PF_PROPERTIES_IMPL_H
#define __IPU_DEVICE_PF_PROPERTIES_IMPL_H

#include "ipu_device_pf_devices.h"
#include "ipu_device_pf_properties_defs.h"
#include "ipu_device_pf_properties_storage_class.h"

PF_PROPERTIES_DATA_STORAGE_CLASS_C unsigned int ipu_device_pf_properties[IPU_DEVICE_PIXEL_FORMATTER_NUM_DEVS] = {
	IPU_DEVICE_SP_PF_ADDR
};

#endif /* __IPU_DEVICE_PF_PROPERTIES_IMPL_H */
