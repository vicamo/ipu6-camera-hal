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

#include "ia_css_psys_data_storage_class.h"

/*
 * Functions to possibly inline
 */

#ifdef __IA_CSS_PSYS_DATA_INLINE__
STORAGE_CLASS_INLINE int
__ia_css_program_group_data_avoid_warning_on_empty_file(void) { return 0; }
#else /* __IA_CSS_PSYS_DATA_INLINE__ */
#include "ia_css_program_group_data_impl.h"
#endif /* __IA_CSS_PSYS_DATA_INLINE__ */
