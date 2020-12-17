/*
* INTEL CONFIDENTIAL
*
* Copyright (C) 2010 - 2013 Intel Corporation.
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

/**
 * @file
 * @brief Internally used, general definitions
 */

#ifndef VIED_CONFIG_H_
#define VIED_CONFIG_H_

/* Defines from the compiler:
 *   HRT_HOST - this is code running on the host
 *   HRT_CELL - this is code running on a cell
 */
#ifdef HRT_HOST
# define CFG_VIED_SUBSYSTEM_ACCESS_LIB_IMPL 1

#elif defined(HRT_CELL)
# undef CFG_VIED_SUBSYSTEM_ACCESS_LIB_IMPL

#else  /* !HRT_CELL */
/* Allow neither HRT_HOST nor HRT_CELL for testing purposes */
#endif /* !HRT_CELL */

#endif  /* VIED_CONFIG_H_ */
