/*
* INTEL CONFIDENTIAL
*
* Copyright (C) 2010 - 2017 Intel Corporation.
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
#ifndef _cell_regmem_h_
#define _cell_regmem_h_

/* Generated with DAI generator 1.3.0 */

/* enumerate for all memories for devices of type cell */
typedef enum {
	DAI_CELL_MEM_CONFIG_ICACHE,
	DAI_CELL_MEM_DMEM,
	DAI_CELL_MEM_QMEM,
	DAI_CELL_MEM_CMEM,
	DAI_CELL_MEM_XMEM,
	NUM_DAI_CELL_MEMORY_ID     = 5
} dai_cell_memory_id_t;

/* enumerate for all register bank types for devices of type cell */
typedef enum {
	NUM_DAI_CELL_RB_TYPES = 0
} dai_cell_rb_types_t;

/* enumerate for all registers for slave port sl_stat_ip for devices of type cell */
typedef enum {
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_CONFIG_ICACHE_STAT_CONTROL_REG_0                 = NUM_DAI_CELL_MEMORY_ID,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_START_ADDRESS,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_2,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_3,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_0_MI_CONFIG_ICACHE_MASTER,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_0_MI_CONFIG_ICACHE_MASTER,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_0_MI_CONFIG_ICACHE_MASTER,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_0_MI_QMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_8,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_9,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_0_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_0_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_0_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_1_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_1_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_1_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_2_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_2_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_2_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_3_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_3_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_3_MI_CMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_0_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_0_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_0_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_1_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_1_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_1_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_2_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_2_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_2_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_ADDR_SEG_3_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_SEG_3_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_BASE_INFO_OVERRIDE_SEG_3_MI_XMEM_MASTER_INT,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_34,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_35,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_36,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_37,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_38,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_DEBUG_PC,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_CONFIG_ICACHE_STAT_CONTROL_REG_40,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_UNUSED_41,
	DAI_CELL_REG_CONFIG_ICACHE_STAT_CONTROL_PMEM_SLAVE_ACCESS,
	NUM_DAI_CELL_SL_STAT_IP_REGISTERS                                                        = 43
} dai_cell_sl_stat_ip_registers_t;

/* enumerate for all registers for slave port sl_dmem_ip for devices of type cell */
typedef enum {
	NUM_DAI_CELL_SL_DMEM_IP_REGISTERS = 0
} dai_cell_sl_dmem_ip_registers_t;

#endif /* _cell_regmem_h_ */
