// SPDX-FileCopyrightText: 2026 Imagination Technologies Ltd.
// SPDX-License-Identifier: MIT

#ifndef SPIRV_UNIFIED1_IMGEXPERIMENTALOPERATIONS_H_
#define SPIRV_UNIFIED1_IMGEXPERIMENTALOPERATIONS_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    IMGExperimentalOperationsRevision = 1,
    IMGExperimentalOperationsRevision_BitWidthPadding = 0x7fffffff
};

enum IMGExperimentalOperationsInstructions {
    IMGOpCooperativeMatrixConvertIMG = 1,
    IMGMax = 0x7fffffff
};


#ifdef __cplusplus
}
#endif

#endif // SPIRV_UNIFIED1_IMGEXPERIMENTALOPERATIONS_H_
