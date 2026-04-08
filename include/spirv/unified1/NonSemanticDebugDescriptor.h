// SPDX-FileCopyrightText: 2020-2024 The Khronos Group Inc.
// SPDX-License-Identifier: MIT
// 
// MODIFICATIONS TO THIS FILE MAY MEAN IT NO LONGER ACCURATELY REFLECTS
// KHRONOS STANDARDS. THE UNMODIFIED, NORMATIVE VERSIONS OF KHRONOS
// SPECIFICATIONS AND HEADER INFORMATION ARE LOCATED AT
//    https://www.khronos.org/registry/
// 
// 

#ifndef SPIRV_UNIFIED1_NonSemanticDebugDescriptor_H_
#define SPIRV_UNIFIED1_NonSemanticDebugDescriptor_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    NonSemanticDebugDescriptorRevision = 1,
    NonSemanticDebugDescriptorRevision_BitWidthPadding = 0x7fffffff
};

enum NonSemanticDebugDescriptorInstructions {
    NonSemanticDebugDescriptorDebugDescriptor = 1,
    NonSemanticDebugDescriptorDebugDescriptorAll = 2,
    NonSemanticDebugDescriptorInstructionsMax = 0x7fffffff
};


enum NonSemanticDebugDescriptorDebugOption {
    NonSemanticDebugDescriptorNone = 0,
    NonSemanticDebugDescriptorFunctionReturn = 1,
    NonSemanticDebugDescriptorShaderAbort = 2,
    NonSemanticDebugDescriptorUseNullValue = 3,
    NonSemanticDebugDescriptorDebugOptionMax = 0x7fffffff
};


#ifdef __cplusplus
}
#endif

#endif // SPIRV_UNIFIED1_NonSemanticDebugDescriptor_H_
