/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2014 - 2016 Intel Corporation.
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

#ifndef __IPU_DEVICE_STR2MMIO_PROPERTIES_STRUCT_H
#define __IPU_DEVICE_STR2MMIO_PROPERTIES_STRUCT_H

#include "ipu_device_str2mmio_devices.h"

struct ipu_device_str2mmio_properties_s {
	enum ipu_device_str2mmio_type type;		/* type of the str2mmio device */
	unsigned int base_addr;				/* base address of the str2mmio device from Host/SPC */
	unsigned int nr_sids;				/* number of MAX sids for the str2mmio device */
	unsigned int str2mmio_from_ibuf_dev;  /* base address of the str2mmio device from corresponding IBUF device */
};

#endif /* __IPU_DEVICE_STR2MMIO_PROPERTIES_STRUCT_H */
