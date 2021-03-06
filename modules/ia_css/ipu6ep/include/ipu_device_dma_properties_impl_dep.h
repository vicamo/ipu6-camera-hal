/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2019 - 2019 Intel Corporation.
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

#ifndef __IPU_DEVICE_DMA_PROPERTIES_IMPL_DEP_H
#define __IPU_DEVICE_DMA_PROPERTIES_IMPL_DEP_H

#include "ipu_device_dma_properties_storage_class.h"

#define DMA_INSTANCES_PROPERTY(name)	\
	IPU_DEVICE_DMA_EXT0_##name,	\
	IPU_DEVICE_DMA_EXT1R_##name,	\
	IPU_DEVICE_DMA_EXT1W_##name,	\
	IPU_DEVICE_DMA_INT_##name,	\
	IPU_DEVICE_DMA_ISA_##name,

#define DMA_INSTANCES_PORT_PROPERTY(name)						\
	{ IPU_DEVICE_DMA_EXT0_##name##_M0, IPU_DEVICE_DMA_EXT0_##name##_M1, },		\
	{ IPU_DEVICE_DMA_EXT1R_##name##_M0, IPU_DEVICE_DMA_EXT1R_##name##_M1, },	\
	{ IPU_DEVICE_DMA_EXT1W_##name##_M0, IPU_DEVICE_DMA_EXT1W_##name##_M1, },	\
	{ IPU_DEVICE_DMA_INT_##name##_M0, IPU_DEVICE_DMA_INT_##name##_M1, },		\
	{ IPU_DEVICE_DMA_ISA_##name##_M0, IPU_DEVICE_DMA_ISA_##name##_M1, },

#endif /* __IPU_DEVICE_DMA_PROPERTIES_IMPL_DEP_H */
