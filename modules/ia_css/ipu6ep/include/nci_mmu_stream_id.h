/*
 * INTEL CONFIDENTIAL
 *
 * Copyright (C) 2017 - 2020 Intel Corporation.
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

#ifndef __NCI_MMU_STREAM_ID_H
#define __NCI_MMU_STREAM_ID_H

#include "math_support.h"
#include "frame_support.h"

/* genpipe doesn't support B = A in enum definition */
#ifndef PIPE_GENERATION

/* The tables below are according to IPU6 Transfer HAS table 2.4-1 */

enum {
	NCI_STREAM_ID_RESERVED = 0 /* This value is deprecated */
};

/* ISYS MMU stream ID DMA_HBtoX */
enum {
	NCI_STREAM_ID_ISYS_DEFAULT_STREAM = 0,
	NCI_STREAM_ID_ISYS_SENSOR_1_BAYER_NORMAL_EXP = 1,
	NCI_STREAM_ID_ISYS_SENSOR_1_BAYER_LONG_EXP = 2,
	NCI_STREAM_ID_ISYS_SENSOR_1_BAYER_SHORT_EXP = 3,
	NCI_STREAM_ID_ISYS_SENSOR_1_PDAF = 4,
	NCI_STREAM_ID_ISYS_SENSOR_2_BAYER_Y_HB = 5, /* Or on IS LB-3 */
	NCI_STREAM_ID_ISYS_SENSOR_3_BAYER_Y_HB = 6, /* Or on IS LB-6 */
	NCI_STREAM_ID_ISYS_SENSOR_4_BAYER = 7,
	NCI_STREAM_ID_ISYS_SENSOR_4_PDAF  = 8,
	NCI_STREAM_ID_ISYS_SENSOR_5_BAYER = 9,
	NCI_STREAM_ID_ISYS_SENSOR_6_BAYER = 10,
	NCI_STREAM_ID_ISYS_SENSOR_7_BAYER = 11,
	NCI_STREAM_ID_ISYS_SENSOR_8_BAYER = 12,
	NCI_STREAM_ID_ISYS_T1E_TS = 15,
	NCI_STREAM_ID_ISYS_HBTOX_MMU_MISS = 16

};

/* ISYS MMU stream ID DMA_LBtoX */
enum {
	NCI_STREAM_ID_ISYS_LB_DEFAULT = 0,
	NCI_STREAM_ID_ISYS_SENSOR_METADATA = 1,
	NCI_STREAM_ID_ISYS_SENSOR_2_BAYER_Y_LB = 2, /* Or on IS LB-3 */
	NCI_STREAM_ID_ISYS_SENSOR_2_BAYER_U = 3,
	NCI_STREAM_ID_ISYS_SENSOR_2_BAYER_V = 4,
	NCI_STREAM_ID_ISYS_SENSOR_3_BAYER_Y_LB = 5, /* Or on IS LB-6 */
	NCI_STREAM_ID_ISYS_SENSOR_3_BAYER_U = 6,
	NCI_STREAM_ID_ISYS_SENSOR_3_BAYER_V = 7,
	NCI_STREAM_ID_ISYS_LB_MMU_MISS = 16
     };

/* PSYS MMU stream ID DMA_HBtoX */
enum {
	NCI_STREAM_ID_PSYS_EXTW_MMU_MISS = 0,
	NCI_STREAM_ID_PSYS_ISL_FR_VIDEO_OUTPUT_Y_OR_BAYER_GR = 1,
	NCI_STREAM_ID_PSYS_ISL_FR_VIDEO_OUTPUT_U_V = 2,
	NCI_STREAM_ID_PSYS_ISL_FR_VIDEO_OUTPUT_V = NCI_STREAM_ID_PSYS_ISL_FR_VIDEO_OUTPUT_U_V, /* only NV12 is POR, so reuse stream for YUV */
	NCI_STREAM_ID_PSYS_ISL_DS_VIDEO_OUTPUT_Y = 3,
	NCI_STREAM_ID_PSYS_ISL_DS_VIDEO_OUTPUT_U_V = 4,
	NCI_STREAM_ID_PSYS_ISL_DS_VIDEO_OUTPUT_V = NCI_STREAM_ID_PSYS_ISL_DS_VIDEO_OUTPUT_U_V, /* only NV12 is POR, so reuse stream for YUV */
	NCI_STREAM_ID_PSYS_ISL_PP_OUTPUT_Y_OR_BAYER_R = 5,
	NCI_STREAM_ID_PSYS_ISL_PP_OUTPUT_U_V = 6,
	NCI_STREAM_ID_PSYS_ISL_PP_OUTPUT_V = NCI_STREAM_ID_PSYS_ISL_PP_OUTPUT_U_V, /* only NV12 is POR, so reuse stream for YUV */
	NCI_STREAM_ID_PSYS_ISL_SIS_VIDEO_OUTPUT = 7,
	NCI_STREAM_ID_PSYS_ISL_SIS_STILL_OUTPUT = 8,
	NCI_STREAM_ID_PSYS_ISL_IR_MD_OUTPUT = 9,
	NCI_STREAM_ID_PSYS_PSA_PRE_IEFD_Y = NCI_STREAM_ID_PSYS_ISL_SIS_VIDEO_OUTPUT, /* Not in use */
	NCI_STREAM_ID_PSYS_PSA_PRE_IEFD_U_OR_BAYER_B = 10, /* IEFD not in use */
	NCI_STREAM_ID_PSYS_PSA_PRE_IEFD_V_OR_BAYER_GB = 11, /* IEFD not in use */
	NCI_STREAM_ID_PSYS_PSA_OUTPUT_Y = 12,
	NCI_STREAM_ID_PSYS_PSA_OUTPUT_U_V = 13,
	NCI_STREAM_ID_PSYS_PSA_OUTPUT_V = 14,
	NCI_STREAM_ID_PSYS_PSA_BNLM_NOISE = NCI_STREAM_ID_PSYS_ISL_SIS_STILL_OUTPUT,
	NCI_STREAM_ID_PSYS_TNR_REF_OUT_Y = 15,
	NCI_STREAM_ID_PSYS_TNR_REF_OUT_U_V = 16,
	NCI_STREAM_ID_PSYS_TNR_REF_OUT_RECSIM = 17,
	NCI_STREAM_ID_PSYS_MAIN_OUTPUT_Y = 18,
	NCI_STREAM_ID_PSYS_MAIN_OUTPUT_U_V = 19,
	NCI_STREAM_ID_PSYS_MAIN_OUTPUT_V = 20,
	NCI_STREAM_ID_PSYS_DISPLAY_OUTPUT_Y = 21,
	NCI_STREAM_ID_PSYS_DISPLAY_OUTPUT_U_V = 22,
	NCI_STREAM_ID_PSYS_DISPLAY_OUTPUT_V = 23,
	NCI_STREAM_ID_PSYS_POST_PROCESSING_OUTPUT_Y = 24,
	NCI_STREAM_ID_PSYS_POST_PROCESSING_OUTPUT_U_V = 25,
	NCI_STREAM_ID_PSYS_POST_PROCESSING_OUTPUT_V = 26,
	NCI_STREAM_ID_PSYS_BURST_ISP_R = 27,
	NCI_STREAM_ID_PSYS_BURST_ISP_GR = 28,
	NCI_STREAM_ID_PSYS_BURST_ISP_B = 29,
	NCI_STREAM_ID_PSYS_BURST_ISP_GB = 30,
	NCI_STREAM_ID_PSYS_T2E_TS = 31,
	NCI_STREAM_ID_PSYS_HBTOX_NUM_STREAMS /* NOTE: this literal must be last, so that it gets the highest value.  */
};

/* PSYS MMU stream ID DMA_HBfromX */
enum {
	NCI_STREAM_ID_PSYS_EXTR_MMU_MISS = 0,
	NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_MEDIUM = 1,
	NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_LONG = 2,
	NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_SHORT = 3,
	NCI_STREAM_ID_PSYS_ISL_INPUT_PDAF = 4,
	NCI_STREAM_ID_PSYS_TNR_REF_IN_Y = 5,
	NCI_STREAM_ID_PSYS_TNR_REF_IN_U_V = 6,
	NCI_STREAM_ID_PSYS_TNR_REF_IN_RECSIM = 7,
	NCI_STREAM_ID_PSYS_GDC_Y = 8,
	NCI_STREAM_ID_PSYS_GDC_U = 9,
	NCI_STREAM_ID_PSYS_GDC_V = 10,
	NCI_STREAM_ID_PSYS_PSA_INPUT_BAYER_VECTORIZED = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_MEDIUM, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_YUV_INTERLEAVED = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_MEDIUM, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_FR_VIDEO_Y = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_MEDIUM, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_FR_VIDEO_U = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_LONG, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_FR_VIDEO_V = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_SHORT, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_BAYER_PLANAR_GR = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_MEDIUM, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_BAYER_PLANAR_R = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_LONG, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_BAYER_PLANAR_B = NCI_STREAM_ID_PSYS_ISL_INPUT_BAYER_SHORT, /* mutually excl. */
	NCI_STREAM_ID_PSYS_PSA_INPUT_BAYER_PLANAR_GB = NCI_STREAM_ID_PSYS_ISL_INPUT_PDAF, /* mutually excl. */
	NCI_STREAM_ID_PSYS_T2D_TS = 15, /* Do not change  */
	NCI_STREAM_ID_PSYS_HBFRX_NUM_STREAMS /* NOTE: this literal must be last, so that it gets the highest value.  */
};

/* PSYS MMU stream ID DMA_LB */
enum {
	NCI_STREAM_ID_PSYS_LB_MMU_MISS = 0,
	NCI_STREAM_ID_PSYS_LB_DEFAULT = 1,
	NCI_STREAM_ID_PSYS_META_DPC = 2,
	NCI_STREAM_ID_PSYS_META_STAT_AWB = 3,
	NCI_STREAM_ID_PSYS_META_STAT_AF = 4,
	NCI_STREAM_ID_PSYS_META_STAT_DVS_L0 = 5,
	NCI_STREAM_ID_PSYS_META_STAT_DVS_L1 = 6,
	NCI_STREAM_ID_PSYS_META_STAT_DVS_L2 = 7,
	NCI_STREAM_ID_PSYS_META_PDAF = 8,
	NCI_STREAM_ID_PSYS_META_LSC = 9,
	NCI_STREAM_ID_PSYS_META_GAMMASTAR = 10,
};

#define NCI_STREAM_ID_PSYS_MAX MAX(NCI_STREAM_ID_PSYS_HBTOX_NUM_STREAMS, NCI_STREAM_ID_PSYS_HBFRX_NUM_STREAMS)

#define INTERLEAVED_TRANSFER_NUMBER_OF_STREAMS		(INTERLEAVED_FRAME_TYPE_NUM_PLANES)
#define YUV_SEMI_PLANAR_TRANSFER_NUMBER_OF_STREAMS	(YUV_SEMI_PLANAR_FRAME_TYPE_NUM_PLANES)
#define YUV_PLANAR_TRANSFER_NUMBER_OF_STREAMS		(YUV_PLANAR_FRAME_TYPE_NUM_PLANES)
#define BAYER_PLANAR_TRANSFER_NUMBER_OF_STREAMS		(BAYER_PLANAR_FRAME_TYPE_NUM_PLANES)

#endif /* PIPE_GENERATION */
#endif /* __NCI_MMU_STREAM_ID_H */
