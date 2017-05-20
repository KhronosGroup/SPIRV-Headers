/*
** Copyright (c) 2014-2017 The Khronos Group Inc.
** 
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and/or associated documentation files (the "Materials"),
** to deal in the Materials without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Materials, and to permit persons to whom the
** Materials are furnished to do so, subject to the following conditions:
** 
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Materials.
** 
** MODIFICATIONS TO THIS FILE MAY MEAN IT NO LONGER ACCURATELY REFLECTS KHRONOS
** STANDARDS. THE UNMODIFIED, NORMATIVE VERSIONS OF KHRONOS SPECIFICATIONS AND
** HEADER INFORMATION ARE LOCATED AT https://www.khronos.org/registry/ 
** 
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
** OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
** THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM,OUT OF OR IN CONNECTION WITH THE MATERIALS OR THE USE OR OTHER DEALINGS
** IN THE MATERIALS.
*/

#ifndef spirv_strings_H
#define spirv_strings_H

#include "spirv.h"

#ifndef SPIRV_DEF
#   ifdef SPIRV_STRINGS_IMPLEMENT
#       define SPIRV_DEF
#   else
#       define SPIRV_DEF extern
#   endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

SPIRV_DEF const char* SpvSourceLanguageToString(SpvSourceLanguage e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvSourceLanguageUnknown: return "Unknown";
        case SpvSourceLanguageESSL: return "ESSL";
        case SpvSourceLanguageGLSL: return "GLSL";
        case SpvSourceLanguageOpenCL_C: return "OpenCL_C";
        case SpvSourceLanguageOpenCL_CPP: return "OpenCL_CPP";
        case SpvSourceLanguageHLSL: return "HLSL";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvExecutionModelToString(SpvExecutionModel e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvExecutionModelVertex: return "Vertex";
        case SpvExecutionModelTessellationControl: return "TessellationControl";
        case SpvExecutionModelTessellationEvaluation: return "TessellationEvaluation";
        case SpvExecutionModelGeometry: return "Geometry";
        case SpvExecutionModelFragment: return "Fragment";
        case SpvExecutionModelGLCompute: return "GLCompute";
        case SpvExecutionModelKernel: return "Kernel";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvAddressingModelToString(SpvAddressingModel e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvAddressingModelLogical: return "Logical";
        case SpvAddressingModelPhysical32: return "Physical32";
        case SpvAddressingModelPhysical64: return "Physical64";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvMemoryModelToString(SpvMemoryModel e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvMemoryModelSimple: return "Simple";
        case SpvMemoryModelGLSL450: return "GLSL450";
        case SpvMemoryModelOpenCL: return "OpenCL";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvExecutionModeToString(SpvExecutionMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvExecutionModeInvocations: return "Invocations";
        case SpvExecutionModeSpacingEqual: return "SpacingEqual";
        case SpvExecutionModeSpacingFractionalEven: return "SpacingFractionalEven";
        case SpvExecutionModeSpacingFractionalOdd: return "SpacingFractionalOdd";
        case SpvExecutionModeVertexOrderCw: return "VertexOrderCw";
        case SpvExecutionModeVertexOrderCcw: return "VertexOrderCcw";
        case SpvExecutionModePixelCenterInteger: return "PixelCenterInteger";
        case SpvExecutionModeOriginUpperLeft: return "OriginUpperLeft";
        case SpvExecutionModeOriginLowerLeft: return "OriginLowerLeft";
        case SpvExecutionModeEarlyFragmentTests: return "EarlyFragmentTests";
        case SpvExecutionModePointMode: return "PointMode";
        case SpvExecutionModeXfb: return "Xfb";
        case SpvExecutionModeDepthReplacing: return "DepthReplacing";
        case SpvExecutionModeDepthGreater: return "DepthGreater";
        case SpvExecutionModeDepthLess: return "DepthLess";
        case SpvExecutionModeDepthUnchanged: return "DepthUnchanged";
        case SpvExecutionModeLocalSize: return "LocalSize";
        case SpvExecutionModeLocalSizeHint: return "LocalSizeHint";
        case SpvExecutionModeInputPoints: return "InputPoints";
        case SpvExecutionModeInputLines: return "InputLines";
        case SpvExecutionModeInputLinesAdjacency: return "InputLinesAdjacency";
        case SpvExecutionModeTriangles: return "Triangles";
        case SpvExecutionModeInputTrianglesAdjacency: return "InputTrianglesAdjacency";
        case SpvExecutionModeQuads: return "Quads";
        case SpvExecutionModeIsolines: return "Isolines";
        case SpvExecutionModeOutputVertices: return "OutputVertices";
        case SpvExecutionModeOutputPoints: return "OutputPoints";
        case SpvExecutionModeOutputLineStrip: return "OutputLineStrip";
        case SpvExecutionModeOutputTriangleStrip: return "OutputTriangleStrip";
        case SpvExecutionModeVecTypeHint: return "VecTypeHint";
        case SpvExecutionModeContractionOff: return "ContractionOff";
        case SpvExecutionModeInitializer: return "Initializer";
        case SpvExecutionModeFinalizer: return "Finalizer";
        case SpvExecutionModeSubgroupSize: return "SubgroupSize";
        case SpvExecutionModeSubgroupsPerWorkgroup: return "SubgroupsPerWorkgroup";
        case SpvExecutionModeSubgroupsPerWorkgroupId: return "SubgroupsPerWorkgroupId";
        case SpvExecutionModeLocalSizeId: return "LocalSizeId";
        case SpvExecutionModeLocalSizeHintId: return "LocalSizeHintId";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvStorageClassToString(SpvStorageClass e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvStorageClassUniformConstant: return "UniformConstant";
        case SpvStorageClassInput: return "Input";
        case SpvStorageClassUniform: return "Uniform";
        case SpvStorageClassOutput: return "Output";
        case SpvStorageClassWorkgroup: return "Workgroup";
        case SpvStorageClassCrossWorkgroup: return "CrossWorkgroup";
        case SpvStorageClassPrivate: return "Private";
        case SpvStorageClassFunction: return "Function";
        case SpvStorageClassGeneric: return "Generic";
        case SpvStorageClassPushConstant: return "PushConstant";
        case SpvStorageClassAtomicCounter: return "AtomicCounter";
        case SpvStorageClassImage: return "Image";
        case SpvStorageClassStorageBuffer: return "StorageBuffer";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvDimToString(SpvDim e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvDim1D: return "1D";
        case SpvDim2D: return "2D";
        case SpvDim3D: return "3D";
        case SpvDimCube: return "Cube";
        case SpvDimRect: return "Rect";
        case SpvDimBuffer: return "Buffer";
        case SpvDimSubpassData: return "SubpassData";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvSamplerAddressingModeToString(SpvSamplerAddressingMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvSamplerAddressingModeNone: return "None";
        case SpvSamplerAddressingModeClampToEdge: return "ClampToEdge";
        case SpvSamplerAddressingModeClamp: return "Clamp";
        case SpvSamplerAddressingModeRepeat: return "Repeat";
        case SpvSamplerAddressingModeRepeatMirrored: return "RepeatMirrored";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvSamplerFilterModeToString(SpvSamplerFilterMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvSamplerFilterModeNearest: return "Nearest";
        case SpvSamplerFilterModeLinear: return "Linear";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvImageFormatToString(SpvImageFormat e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvImageFormatUnknown: return "Unknown";
        case SpvImageFormatRgba32f: return "Rgba32f";
        case SpvImageFormatRgba16f: return "Rgba16f";
        case SpvImageFormatR32f: return "R32f";
        case SpvImageFormatRgba8: return "Rgba8";
        case SpvImageFormatRgba8Snorm: return "Rgba8Snorm";
        case SpvImageFormatRg32f: return "Rg32f";
        case SpvImageFormatRg16f: return "Rg16f";
        case SpvImageFormatR11fG11fB10f: return "R11fG11fB10f";
        case SpvImageFormatR16f: return "R16f";
        case SpvImageFormatRgba16: return "Rgba16";
        case SpvImageFormatRgb10A2: return "Rgb10A2";
        case SpvImageFormatRg16: return "Rg16";
        case SpvImageFormatRg8: return "Rg8";
        case SpvImageFormatR16: return "R16";
        case SpvImageFormatR8: return "R8";
        case SpvImageFormatRgba16Snorm: return "Rgba16Snorm";
        case SpvImageFormatRg16Snorm: return "Rg16Snorm";
        case SpvImageFormatRg8Snorm: return "Rg8Snorm";
        case SpvImageFormatR16Snorm: return "R16Snorm";
        case SpvImageFormatR8Snorm: return "R8Snorm";
        case SpvImageFormatRgba32i: return "Rgba32i";
        case SpvImageFormatRgba16i: return "Rgba16i";
        case SpvImageFormatRgba8i: return "Rgba8i";
        case SpvImageFormatR32i: return "R32i";
        case SpvImageFormatRg32i: return "Rg32i";
        case SpvImageFormatRg16i: return "Rg16i";
        case SpvImageFormatRg8i: return "Rg8i";
        case SpvImageFormatR16i: return "R16i";
        case SpvImageFormatR8i: return "R8i";
        case SpvImageFormatRgba32ui: return "Rgba32ui";
        case SpvImageFormatRgba16ui: return "Rgba16ui";
        case SpvImageFormatRgba8ui: return "Rgba8ui";
        case SpvImageFormatR32ui: return "R32ui";
        case SpvImageFormatRgb10a2ui: return "Rgb10a2ui";
        case SpvImageFormatRg32ui: return "Rg32ui";
        case SpvImageFormatRg16ui: return "Rg16ui";
        case SpvImageFormatRg8ui: return "Rg8ui";
        case SpvImageFormatR16ui: return "R16ui";
        case SpvImageFormatR8ui: return "R8ui";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvImageChannelOrderToString(SpvImageChannelOrder e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvImageChannelOrderR: return "R";
        case SpvImageChannelOrderA: return "A";
        case SpvImageChannelOrderRG: return "RG";
        case SpvImageChannelOrderRA: return "RA";
        case SpvImageChannelOrderRGB: return "RGB";
        case SpvImageChannelOrderRGBA: return "RGBA";
        case SpvImageChannelOrderBGRA: return "BGRA";
        case SpvImageChannelOrderARGB: return "ARGB";
        case SpvImageChannelOrderIntensity: return "Intensity";
        case SpvImageChannelOrderLuminance: return "Luminance";
        case SpvImageChannelOrderRx: return "Rx";
        case SpvImageChannelOrderRGx: return "RGx";
        case SpvImageChannelOrderRGBx: return "RGBx";
        case SpvImageChannelOrderDepth: return "Depth";
        case SpvImageChannelOrderDepthStencil: return "DepthStencil";
        case SpvImageChannelOrdersRGB: return "sRGB";
        case SpvImageChannelOrdersRGBx: return "sRGBx";
        case SpvImageChannelOrdersRGBA: return "sRGBA";
        case SpvImageChannelOrdersBGRA: return "sBGRA";
        case SpvImageChannelOrderABGR: return "ABGR";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvImageChannelDataTypeToString(SpvImageChannelDataType e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvImageChannelDataTypeSnormInt8: return "SnormInt8";
        case SpvImageChannelDataTypeSnormInt16: return "SnormInt16";
        case SpvImageChannelDataTypeUnormInt8: return "UnormInt8";
        case SpvImageChannelDataTypeUnormInt16: return "UnormInt16";
        case SpvImageChannelDataTypeUnormShort565: return "UnormShort565";
        case SpvImageChannelDataTypeUnormShort555: return "UnormShort555";
        case SpvImageChannelDataTypeUnormInt101010: return "UnormInt101010";
        case SpvImageChannelDataTypeSignedInt8: return "SignedInt8";
        case SpvImageChannelDataTypeSignedInt16: return "SignedInt16";
        case SpvImageChannelDataTypeSignedInt32: return "SignedInt32";
        case SpvImageChannelDataTypeUnsignedInt8: return "UnsignedInt8";
        case SpvImageChannelDataTypeUnsignedInt16: return "UnsignedInt16";
        case SpvImageChannelDataTypeUnsignedInt32: return "UnsignedInt32";
        case SpvImageChannelDataTypeHalfFloat: return "HalfFloat";
        case SpvImageChannelDataTypeFloat: return "Float";
        case SpvImageChannelDataTypeUnormInt24: return "UnormInt24";
        case SpvImageChannelDataTypeUnormInt101010_2: return "UnormInt101010_2";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvImageOperandsShiftToString(SpvImageOperandsShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvImageOperandsBiasShift: return "Bias";
        case SpvImageOperandsLodShift: return "Lod";
        case SpvImageOperandsGradShift: return "Grad";
        case SpvImageOperandsConstOffsetShift: return "ConstOffset";
        case SpvImageOperandsOffsetShift: return "Offset";
        case SpvImageOperandsConstOffsetsShift: return "ConstOffsets";
        case SpvImageOperandsSampleShift: return "Sample";
        case SpvImageOperandsMinLodShift: return "MinLod";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvImageOperandsMaskToString(SpvImageOperandsMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvImageOperandsMaskNone: return "None";
        case SpvImageOperandsBiasMask: return "Bias";
        case SpvImageOperandsLodMask: return "Lod";
        case SpvImageOperandsGradMask: return "Grad";
        case SpvImageOperandsConstOffsetMask: return "ConstOffset";
        case SpvImageOperandsOffsetMask: return "Offset";
        case SpvImageOperandsConstOffsetsMask: return "ConstOffsets";
        case SpvImageOperandsSampleMask: return "Sample";
        case SpvImageOperandsMinLodMask: return "MinLod";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvFPFastMathModeShiftToString(SpvFPFastMathModeShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvFPFastMathModeNotNaNShift: return "NotNaN";
        case SpvFPFastMathModeNotInfShift: return "NotInf";
        case SpvFPFastMathModeNSZShift: return "NSZ";
        case SpvFPFastMathModeAllowRecipShift: return "AllowRecip";
        case SpvFPFastMathModeFastShift: return "Fast";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvFPFastMathModeMaskToString(SpvFPFastMathModeMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvFPFastMathModeMaskNone: return "None";
        case SpvFPFastMathModeNotNaNMask: return "NotNaN";
        case SpvFPFastMathModeNotInfMask: return "NotInf";
        case SpvFPFastMathModeNSZMask: return "NSZ";
        case SpvFPFastMathModeAllowRecipMask: return "AllowRecip";
        case SpvFPFastMathModeFastMask: return "Fast";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvFPRoundingModeToString(SpvFPRoundingMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvFPRoundingModeRTE: return "RTE";
        case SpvFPRoundingModeRTZ: return "RTZ";
        case SpvFPRoundingModeRTP: return "RTP";
        case SpvFPRoundingModeRTN: return "RTN";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvLinkageTypeToString(SpvLinkageType e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvLinkageTypeExport: return "Export";
        case SpvLinkageTypeImport: return "Import";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvAccessQualifierToString(SpvAccessQualifier e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvAccessQualifierReadOnly: return "ReadOnly";
        case SpvAccessQualifierWriteOnly: return "WriteOnly";
        case SpvAccessQualifierReadWrite: return "ReadWrite";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvFunctionParameterAttributeToString(SpvFunctionParameterAttribute e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvFunctionParameterAttributeZext: return "Zext";
        case SpvFunctionParameterAttributeSext: return "Sext";
        case SpvFunctionParameterAttributeByVal: return "ByVal";
        case SpvFunctionParameterAttributeSret: return "Sret";
        case SpvFunctionParameterAttributeNoAlias: return "NoAlias";
        case SpvFunctionParameterAttributeNoCapture: return "NoCapture";
        case SpvFunctionParameterAttributeNoWrite: return "NoWrite";
        case SpvFunctionParameterAttributeNoReadWrite: return "NoReadWrite";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvDecorationToString(SpvDecoration e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvDecorationRelaxedPrecision: return "RelaxedPrecision";
        case SpvDecorationSpecId: return "SpecId";
        case SpvDecorationBlock: return "Block";
        case SpvDecorationBufferBlock: return "BufferBlock";
        case SpvDecorationRowMajor: return "RowMajor";
        case SpvDecorationColMajor: return "ColMajor";
        case SpvDecorationArrayStride: return "ArrayStride";
        case SpvDecorationMatrixStride: return "MatrixStride";
        case SpvDecorationGLSLShared: return "GLSLShared";
        case SpvDecorationGLSLPacked: return "GLSLPacked";
        case SpvDecorationCPacked: return "CPacked";
        case SpvDecorationBuiltIn: return "BuiltIn";
        case SpvDecorationNoPerspective: return "NoPerspective";
        case SpvDecorationFlat: return "Flat";
        case SpvDecorationPatch: return "Patch";
        case SpvDecorationCentroid: return "Centroid";
        case SpvDecorationSample: return "Sample";
        case SpvDecorationInvariant: return "Invariant";
        case SpvDecorationRestrict: return "Restrict";
        case SpvDecorationAliased: return "Aliased";
        case SpvDecorationVolatile: return "Volatile";
        case SpvDecorationConstant: return "Constant";
        case SpvDecorationCoherent: return "Coherent";
        case SpvDecorationNonWritable: return "NonWritable";
        case SpvDecorationNonReadable: return "NonReadable";
        case SpvDecorationUniform: return "Uniform";
        case SpvDecorationSaturatedConversion: return "SaturatedConversion";
        case SpvDecorationStream: return "Stream";
        case SpvDecorationLocation: return "Location";
        case SpvDecorationComponent: return "Component";
        case SpvDecorationIndex: return "Index";
        case SpvDecorationBinding: return "Binding";
        case SpvDecorationDescriptorSet: return "DescriptorSet";
        case SpvDecorationOffset: return "Offset";
        case SpvDecorationXfbBuffer: return "XfbBuffer";
        case SpvDecorationXfbStride: return "XfbStride";
        case SpvDecorationFuncParamAttr: return "FuncParamAttr";
        case SpvDecorationFPRoundingMode: return "FPRoundingMode";
        case SpvDecorationFPFastMathMode: return "FPFastMathMode";
        case SpvDecorationLinkageAttributes: return "LinkageAttributes";
        case SpvDecorationNoContraction: return "NoContraction";
        case SpvDecorationInputAttachmentIndex: return "InputAttachmentIndex";
        case SpvDecorationAlignment: return "Alignment";
        case SpvDecorationMaxByteOffset: return "MaxByteOffset";
        case SpvDecorationAlignmentId: return "AlignmentId";
        case SpvDecorationMaxByteOffsetId: return "MaxByteOffsetId";
        case SpvDecorationOverrideCoverageNV: return "OverrideCoverageNV";
        case SpvDecorationPassthroughNV: return "PassthroughNV";
        case SpvDecorationViewportRelativeNV: return "ViewportRelativeNV";
        case SpvDecorationSecondaryViewportRelativeNV: return "SecondaryViewportRelativeNV";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvBuiltInToString(SpvBuiltIn e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvBuiltInPosition: return "Position";
        case SpvBuiltInPointSize: return "PointSize";
        case SpvBuiltInClipDistance: return "ClipDistance";
        case SpvBuiltInCullDistance: return "CullDistance";
        case SpvBuiltInVertexId: return "VertexId";
        case SpvBuiltInInstanceId: return "InstanceId";
        case SpvBuiltInPrimitiveId: return "PrimitiveId";
        case SpvBuiltInInvocationId: return "InvocationId";
        case SpvBuiltInLayer: return "Layer";
        case SpvBuiltInViewportIndex: return "ViewportIndex";
        case SpvBuiltInTessLevelOuter: return "TessLevelOuter";
        case SpvBuiltInTessLevelInner: return "TessLevelInner";
        case SpvBuiltInTessCoord: return "TessCoord";
        case SpvBuiltInPatchVertices: return "PatchVertices";
        case SpvBuiltInFragCoord: return "FragCoord";
        case SpvBuiltInPointCoord: return "PointCoord";
        case SpvBuiltInFrontFacing: return "FrontFacing";
        case SpvBuiltInSampleId: return "SampleId";
        case SpvBuiltInSamplePosition: return "SamplePosition";
        case SpvBuiltInSampleMask: return "SampleMask";
        case SpvBuiltInFragDepth: return "FragDepth";
        case SpvBuiltInHelperInvocation: return "HelperInvocation";
        case SpvBuiltInNumWorkgroups: return "NumWorkgroups";
        case SpvBuiltInWorkgroupSize: return "WorkgroupSize";
        case SpvBuiltInWorkgroupId: return "WorkgroupId";
        case SpvBuiltInLocalInvocationId: return "LocalInvocationId";
        case SpvBuiltInGlobalInvocationId: return "GlobalInvocationId";
        case SpvBuiltInLocalInvocationIndex: return "LocalInvocationIndex";
        case SpvBuiltInWorkDim: return "WorkDim";
        case SpvBuiltInGlobalSize: return "GlobalSize";
        case SpvBuiltInEnqueuedWorkgroupSize: return "EnqueuedWorkgroupSize";
        case SpvBuiltInGlobalOffset: return "GlobalOffset";
        case SpvBuiltInGlobalLinearId: return "GlobalLinearId";
        case SpvBuiltInSubgroupSize: return "SubgroupSize";
        case SpvBuiltInSubgroupMaxSize: return "SubgroupMaxSize";
        case SpvBuiltInNumSubgroups: return "NumSubgroups";
        case SpvBuiltInNumEnqueuedSubgroups: return "NumEnqueuedSubgroups";
        case SpvBuiltInSubgroupId: return "SubgroupId";
        case SpvBuiltInSubgroupLocalInvocationId: return "SubgroupLocalInvocationId";
        case SpvBuiltInVertexIndex: return "VertexIndex";
        case SpvBuiltInInstanceIndex: return "InstanceIndex";
        case SpvBuiltInSubgroupEqMaskKHR: return "SubgroupEqMaskKHR";
        case SpvBuiltInSubgroupGeMaskKHR: return "SubgroupGeMaskKHR";
        case SpvBuiltInSubgroupGtMaskKHR: return "SubgroupGtMaskKHR";
        case SpvBuiltInSubgroupLeMaskKHR: return "SubgroupLeMaskKHR";
        case SpvBuiltInSubgroupLtMaskKHR: return "SubgroupLtMaskKHR";
        case SpvBuiltInBaseVertex: return "BaseVertex";
        case SpvBuiltInBaseInstance: return "BaseInstance";
        case SpvBuiltInDrawIndex: return "DrawIndex";
        case SpvBuiltInDeviceIndex: return "DeviceIndex";
        case SpvBuiltInViewIndex: return "ViewIndex";
        case SpvBuiltInViewportMaskNV: return "ViewportMaskNV";
        case SpvBuiltInSecondaryPositionNV: return "SecondaryPositionNV";
        case SpvBuiltInSecondaryViewportMaskNV: return "SecondaryViewportMaskNV";
        case SpvBuiltInPositionPerViewNV: return "PositionPerViewNV";
        case SpvBuiltInViewportMaskPerViewNV: return "ViewportMaskPerViewNV";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvSelectionControlShiftToString(SpvSelectionControlShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvSelectionControlFlattenShift: return "Flatten";
        case SpvSelectionControlDontFlattenShift: return "DontFlatten";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvSelectionControlMaskToString(SpvSelectionControlMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvSelectionControlMaskNone: return "None";
        case SpvSelectionControlFlattenMask: return "Flatten";
        case SpvSelectionControlDontFlattenMask: return "DontFlatten";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvLoopControlShiftToString(SpvLoopControlShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvLoopControlUnrollShift: return "Unroll";
        case SpvLoopControlDontUnrollShift: return "DontUnroll";
        case SpvLoopControlDependencyInfiniteShift: return "DependencyInfinite";
        case SpvLoopControlDependencyLengthShift: return "DependencyLength";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvLoopControlMaskToString(SpvLoopControlMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvLoopControlMaskNone: return "None";
        case SpvLoopControlUnrollMask: return "Unroll";
        case SpvLoopControlDontUnrollMask: return "DontUnroll";
        case SpvLoopControlDependencyInfiniteMask: return "DependencyInfinite";
        case SpvLoopControlDependencyLengthMask: return "DependencyLength";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvFunctionControlShiftToString(SpvFunctionControlShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvFunctionControlInlineShift: return "Inline";
        case SpvFunctionControlDontInlineShift: return "DontInline";
        case SpvFunctionControlPureShift: return "Pure";
        case SpvFunctionControlConstShift: return "Const";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvFunctionControlMaskToString(SpvFunctionControlMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvFunctionControlMaskNone: return "None";
        case SpvFunctionControlInlineMask: return "Inline";
        case SpvFunctionControlDontInlineMask: return "DontInline";
        case SpvFunctionControlPureMask: return "Pure";
        case SpvFunctionControlConstMask: return "Const";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvMemorySemanticsShiftToString(SpvMemorySemanticsShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvMemorySemanticsAcquireShift: return "Acquire";
        case SpvMemorySemanticsReleaseShift: return "Release";
        case SpvMemorySemanticsAcquireReleaseShift: return "AcquireRelease";
        case SpvMemorySemanticsSequentiallyConsistentShift: return "SequentiallyConsistent";
        case SpvMemorySemanticsUniformMemoryShift: return "UniformMemory";
        case SpvMemorySemanticsSubgroupMemoryShift: return "SubgroupMemory";
        case SpvMemorySemanticsWorkgroupMemoryShift: return "WorkgroupMemory";
        case SpvMemorySemanticsCrossWorkgroupMemoryShift: return "CrossWorkgroupMemory";
        case SpvMemorySemanticsAtomicCounterMemoryShift: return "AtomicCounterMemory";
        case SpvMemorySemanticsImageMemoryShift: return "ImageMemory";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvMemorySemanticsMaskToString(SpvMemorySemanticsMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvMemorySemanticsMaskNone: return "None";
        case SpvMemorySemanticsAcquireMask: return "Acquire";
        case SpvMemorySemanticsReleaseMask: return "Release";
        case SpvMemorySemanticsAcquireReleaseMask: return "AcquireRelease";
        case SpvMemorySemanticsSequentiallyConsistentMask: return "SequentiallyConsistent";
        case SpvMemorySemanticsUniformMemoryMask: return "UniformMemory";
        case SpvMemorySemanticsSubgroupMemoryMask: return "SubgroupMemory";
        case SpvMemorySemanticsWorkgroupMemoryMask: return "WorkgroupMemory";
        case SpvMemorySemanticsCrossWorkgroupMemoryMask: return "CrossWorkgroupMemory";
        case SpvMemorySemanticsAtomicCounterMemoryMask: return "AtomicCounterMemory";
        case SpvMemorySemanticsImageMemoryMask: return "ImageMemory";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvMemoryAccessShiftToString(SpvMemoryAccessShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvMemoryAccessVolatileShift: return "Volatile";
        case SpvMemoryAccessAlignedShift: return "Aligned";
        case SpvMemoryAccessNontemporalShift: return "Nontemporal";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvMemoryAccessMaskToString(SpvMemoryAccessMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvMemoryAccessMaskNone: return "None";
        case SpvMemoryAccessVolatileMask: return "Volatile";
        case SpvMemoryAccessAlignedMask: return "Aligned";
        case SpvMemoryAccessNontemporalMask: return "Nontemporal";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvScopeToString(SpvScope e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvScopeCrossDevice: return "CrossDevice";
        case SpvScopeDevice: return "Device";
        case SpvScopeWorkgroup: return "Workgroup";
        case SpvScopeSubgroup: return "Subgroup";
        case SpvScopeInvocation: return "Invocation";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvGroupOperationToString(SpvGroupOperation e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvGroupOperationReduce: return "Reduce";
        case SpvGroupOperationInclusiveScan: return "InclusiveScan";
        case SpvGroupOperationExclusiveScan: return "ExclusiveScan";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvKernelEnqueueFlagsToString(SpvKernelEnqueueFlags e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvKernelEnqueueFlagsNoWait: return "NoWait";
        case SpvKernelEnqueueFlagsWaitKernel: return "WaitKernel";
        case SpvKernelEnqueueFlagsWaitWorkGroup: return "WaitWorkGroup";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvKernelProfilingInfoShiftToString(SpvKernelProfilingInfoShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvKernelProfilingInfoCmdExecTimeShift: return "CmdExecTime";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvKernelProfilingInfoMaskToString(SpvKernelProfilingInfoMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvKernelProfilingInfoMaskNone: return "None";
        case SpvKernelProfilingInfoCmdExecTimeMask: return "CmdExecTime";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvCapabilityToString(SpvCapability e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvCapabilityMatrix: return "Matrix";
        case SpvCapabilityShader: return "Shader";
        case SpvCapabilityGeometry: return "Geometry";
        case SpvCapabilityTessellation: return "Tessellation";
        case SpvCapabilityAddresses: return "Addresses";
        case SpvCapabilityLinkage: return "Linkage";
        case SpvCapabilityKernel: return "Kernel";
        case SpvCapabilityVector16: return "Vector16";
        case SpvCapabilityFloat16Buffer: return "Float16Buffer";
        case SpvCapabilityFloat16: return "Float16";
        case SpvCapabilityFloat64: return "Float64";
        case SpvCapabilityInt64: return "Int64";
        case SpvCapabilityInt64Atomics: return "Int64Atomics";
        case SpvCapabilityImageBasic: return "ImageBasic";
        case SpvCapabilityImageReadWrite: return "ImageReadWrite";
        case SpvCapabilityImageMipmap: return "ImageMipmap";
        case SpvCapabilityPipes: return "Pipes";
        case SpvCapabilityGroups: return "Groups";
        case SpvCapabilityDeviceEnqueue: return "DeviceEnqueue";
        case SpvCapabilityLiteralSampler: return "LiteralSampler";
        case SpvCapabilityAtomicStorage: return "AtomicStorage";
        case SpvCapabilityInt16: return "Int16";
        case SpvCapabilityTessellationPointSize: return "TessellationPointSize";
        case SpvCapabilityGeometryPointSize: return "GeometryPointSize";
        case SpvCapabilityImageGatherExtended: return "ImageGatherExtended";
        case SpvCapabilityStorageImageMultisample: return "StorageImageMultisample";
        case SpvCapabilityUniformBufferArrayDynamicIndexing: return "UniformBufferArrayDynamicIndexing";
        case SpvCapabilitySampledImageArrayDynamicIndexing: return "SampledImageArrayDynamicIndexing";
        case SpvCapabilityStorageBufferArrayDynamicIndexing: return "StorageBufferArrayDynamicIndexing";
        case SpvCapabilityStorageImageArrayDynamicIndexing: return "StorageImageArrayDynamicIndexing";
        case SpvCapabilityClipDistance: return "ClipDistance";
        case SpvCapabilityCullDistance: return "CullDistance";
        case SpvCapabilityImageCubeArray: return "ImageCubeArray";
        case SpvCapabilitySampleRateShading: return "SampleRateShading";
        case SpvCapabilityImageRect: return "ImageRect";
        case SpvCapabilitySampledRect: return "SampledRect";
        case SpvCapabilityGenericPointer: return "GenericPointer";
        case SpvCapabilityInt8: return "Int8";
        case SpvCapabilityInputAttachment: return "InputAttachment";
        case SpvCapabilitySparseResidency: return "SparseResidency";
        case SpvCapabilityMinLod: return "MinLod";
        case SpvCapabilitySampled1D: return "Sampled1D";
        case SpvCapabilityImage1D: return "Image1D";
        case SpvCapabilitySampledCubeArray: return "SampledCubeArray";
        case SpvCapabilitySampledBuffer: return "SampledBuffer";
        case SpvCapabilityImageBuffer: return "ImageBuffer";
        case SpvCapabilityImageMSArray: return "ImageMSArray";
        case SpvCapabilityStorageImageExtendedFormats: return "StorageImageExtendedFormats";
        case SpvCapabilityImageQuery: return "ImageQuery";
        case SpvCapabilityDerivativeControl: return "DerivativeControl";
        case SpvCapabilityInterpolationFunction: return "InterpolationFunction";
        case SpvCapabilityTransformFeedback: return "TransformFeedback";
        case SpvCapabilityGeometryStreams: return "GeometryStreams";
        case SpvCapabilityStorageImageReadWithoutFormat: return "StorageImageReadWithoutFormat";
        case SpvCapabilityStorageImageWriteWithoutFormat: return "StorageImageWriteWithoutFormat";
        case SpvCapabilityMultiViewport: return "MultiViewport";
        case SpvCapabilitySubgroupDispatch: return "SubgroupDispatch";
        case SpvCapabilityNamedBarrier: return "NamedBarrier";
        case SpvCapabilityPipeStorage: return "PipeStorage";
        case SpvCapabilitySubgroupBallotKHR: return "SubgroupBallotKHR";
        case SpvCapabilityDrawParameters: return "DrawParameters";
        case SpvCapabilitySubgroupVoteKHR: return "SubgroupVoteKHR";
        case SpvCapabilityStorageBuffer16BitAccess: return "StorageBuffer16BitAccess";
        //case SpvCapabilityStorageUniformBufferBlock16: return "StorageUniformBufferBlock16";
        case SpvCapabilityStorageUniform16: return "StorageUniform16";
        //case SpvCapabilityUniformAndStorageBuffer16BitAccess: return "UniformAndStorageBuffer16BitAccess";
        case SpvCapabilityStoragePushConstant16: return "StoragePushConstant16";
        case SpvCapabilityStorageInputOutput16: return "StorageInputOutput16";
        case SpvCapabilityDeviceGroup: return "DeviceGroup";
        case SpvCapabilityMultiView: return "MultiView";
        case SpvCapabilityVariablePointersStorageBuffer: return "VariablePointersStorageBuffer";
        case SpvCapabilityVariablePointers: return "VariablePointers";
        case SpvCapabilitySampleMaskOverrideCoverageNV: return "SampleMaskOverrideCoverageNV";
        case SpvCapabilityGeometryShaderPassthroughNV: return "GeometryShaderPassthroughNV";
        case SpvCapabilityShaderViewportIndexLayerNV: return "ShaderViewportIndexLayerNV";
        case SpvCapabilityShaderViewportMaskNV: return "ShaderViewportMaskNV";
        case SpvCapabilityShaderStereoViewNV: return "ShaderStereoViewNV";
        case SpvCapabilityPerViewAttributesNV: return "PerViewAttributesNV";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SpvOpToString(SpvOp e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SpvOpNop: return "OpNop";
        case SpvOpUndef: return "OpUndef";
        case SpvOpSourceContinued: return "OpSourceContinued";
        case SpvOpSource: return "OpSource";
        case SpvOpSourceExtension: return "OpSourceExtension";
        case SpvOpName: return "OpName";
        case SpvOpMemberName: return "OpMemberName";
        case SpvOpString: return "OpString";
        case SpvOpLine: return "OpLine";
        case SpvOpExtension: return "OpExtension";
        case SpvOpExtInstImport: return "OpExtInstImport";
        case SpvOpExtInst: return "OpExtInst";
        case SpvOpMemoryModel: return "OpMemoryModel";
        case SpvOpEntryPoint: return "OpEntryPoint";
        case SpvOpExecutionMode: return "OpExecutionMode";
        case SpvOpCapability: return "OpCapability";
        case SpvOpTypeVoid: return "OpTypeVoid";
        case SpvOpTypeBool: return "OpTypeBool";
        case SpvOpTypeInt: return "OpTypeInt";
        case SpvOpTypeFloat: return "OpTypeFloat";
        case SpvOpTypeVector: return "OpTypeVector";
        case SpvOpTypeMatrix: return "OpTypeMatrix";
        case SpvOpTypeImage: return "OpTypeImage";
        case SpvOpTypeSampler: return "OpTypeSampler";
        case SpvOpTypeSampledImage: return "OpTypeSampledImage";
        case SpvOpTypeArray: return "OpTypeArray";
        case SpvOpTypeRuntimeArray: return "OpTypeRuntimeArray";
        case SpvOpTypeStruct: return "OpTypeStruct";
        case SpvOpTypeOpaque: return "OpTypeOpaque";
        case SpvOpTypePointer: return "OpTypePointer";
        case SpvOpTypeFunction: return "OpTypeFunction";
        case SpvOpTypeEvent: return "OpTypeEvent";
        case SpvOpTypeDeviceEvent: return "OpTypeDeviceEvent";
        case SpvOpTypeReserveId: return "OpTypeReserveId";
        case SpvOpTypeQueue: return "OpTypeQueue";
        case SpvOpTypePipe: return "OpTypePipe";
        case SpvOpTypeForwardPointer: return "OpTypeForwardPointer";
        case SpvOpConstantTrue: return "OpConstantTrue";
        case SpvOpConstantFalse: return "OpConstantFalse";
        case SpvOpConstant: return "OpConstant";
        case SpvOpConstantComposite: return "OpConstantComposite";
        case SpvOpConstantSampler: return "OpConstantSampler";
        case SpvOpConstantNull: return "OpConstantNull";
        case SpvOpSpecConstantTrue: return "OpSpecConstantTrue";
        case SpvOpSpecConstantFalse: return "OpSpecConstantFalse";
        case SpvOpSpecConstant: return "OpSpecConstant";
        case SpvOpSpecConstantComposite: return "OpSpecConstantComposite";
        case SpvOpSpecConstantOp: return "OpSpecConstantOp";
        case SpvOpFunction: return "OpFunction";
        case SpvOpFunctionParameter: return "OpFunctionParameter";
        case SpvOpFunctionEnd: return "OpFunctionEnd";
        case SpvOpFunctionCall: return "OpFunctionCall";
        case SpvOpVariable: return "OpVariable";
        case SpvOpImageTexelPointer: return "OpImageTexelPointer";
        case SpvOpLoad: return "OpLoad";
        case SpvOpStore: return "OpStore";
        case SpvOpCopyMemory: return "OpCopyMemory";
        case SpvOpCopyMemorySized: return "OpCopyMemorySized";
        case SpvOpAccessChain: return "OpAccessChain";
        case SpvOpInBoundsAccessChain: return "OpInBoundsAccessChain";
        case SpvOpPtrAccessChain: return "OpPtrAccessChain";
        case SpvOpArrayLength: return "OpArrayLength";
        case SpvOpGenericPtrMemSemantics: return "OpGenericPtrMemSemantics";
        case SpvOpInBoundsPtrAccessChain: return "OpInBoundsPtrAccessChain";
        case SpvOpDecorate: return "OpDecorate";
        case SpvOpMemberDecorate: return "OpMemberDecorate";
        case SpvOpDecorationGroup: return "OpDecorationGroup";
        case SpvOpGroupDecorate: return "OpGroupDecorate";
        case SpvOpGroupMemberDecorate: return "OpGroupMemberDecorate";
        case SpvOpVectorExtractDynamic: return "OpVectorExtractDynamic";
        case SpvOpVectorInsertDynamic: return "OpVectorInsertDynamic";
        case SpvOpVectorShuffle: return "OpVectorShuffle";
        case SpvOpCompositeConstruct: return "OpCompositeConstruct";
        case SpvOpCompositeExtract: return "OpCompositeExtract";
        case SpvOpCompositeInsert: return "OpCompositeInsert";
        case SpvOpCopyObject: return "OpCopyObject";
        case SpvOpTranspose: return "OpTranspose";
        case SpvOpSampledImage: return "OpSampledImage";
        case SpvOpImageSampleImplicitLod: return "OpImageSampleImplicitLod";
        case SpvOpImageSampleExplicitLod: return "OpImageSampleExplicitLod";
        case SpvOpImageSampleDrefImplicitLod: return "OpImageSampleDrefImplicitLod";
        case SpvOpImageSampleDrefExplicitLod: return "OpImageSampleDrefExplicitLod";
        case SpvOpImageSampleProjImplicitLod: return "OpImageSampleProjImplicitLod";
        case SpvOpImageSampleProjExplicitLod: return "OpImageSampleProjExplicitLod";
        case SpvOpImageSampleProjDrefImplicitLod: return "OpImageSampleProjDrefImplicitLod";
        case SpvOpImageSampleProjDrefExplicitLod: return "OpImageSampleProjDrefExplicitLod";
        case SpvOpImageFetch: return "OpImageFetch";
        case SpvOpImageGather: return "OpImageGather";
        case SpvOpImageDrefGather: return "OpImageDrefGather";
        case SpvOpImageRead: return "OpImageRead";
        case SpvOpImageWrite: return "OpImageWrite";
        case SpvOpImage: return "OpImage";
        case SpvOpImageQueryFormat: return "OpImageQueryFormat";
        case SpvOpImageQueryOrder: return "OpImageQueryOrder";
        case SpvOpImageQuerySizeLod: return "OpImageQuerySizeLod";
        case SpvOpImageQuerySize: return "OpImageQuerySize";
        case SpvOpImageQueryLod: return "OpImageQueryLod";
        case SpvOpImageQueryLevels: return "OpImageQueryLevels";
        case SpvOpImageQuerySamples: return "OpImageQuerySamples";
        case SpvOpConvertFToU: return "OpConvertFToU";
        case SpvOpConvertFToS: return "OpConvertFToS";
        case SpvOpConvertSToF: return "OpConvertSToF";
        case SpvOpConvertUToF: return "OpConvertUToF";
        case SpvOpUConvert: return "OpUConvert";
        case SpvOpSConvert: return "OpSConvert";
        case SpvOpFConvert: return "OpFConvert";
        case SpvOpQuantizeToF16: return "OpQuantizeToF16";
        case SpvOpConvertPtrToU: return "OpConvertPtrToU";
        case SpvOpSatConvertSToU: return "OpSatConvertSToU";
        case SpvOpSatConvertUToS: return "OpSatConvertUToS";
        case SpvOpConvertUToPtr: return "OpConvertUToPtr";
        case SpvOpPtrCastToGeneric: return "OpPtrCastToGeneric";
        case SpvOpGenericCastToPtr: return "OpGenericCastToPtr";
        case SpvOpGenericCastToPtrExplicit: return "OpGenericCastToPtrExplicit";
        case SpvOpBitcast: return "OpBitcast";
        case SpvOpSNegate: return "OpSNegate";
        case SpvOpFNegate: return "OpFNegate";
        case SpvOpIAdd: return "OpIAdd";
        case SpvOpFAdd: return "OpFAdd";
        case SpvOpISub: return "OpISub";
        case SpvOpFSub: return "OpFSub";
        case SpvOpIMul: return "OpIMul";
        case SpvOpFMul: return "OpFMul";
        case SpvOpUDiv: return "OpUDiv";
        case SpvOpSDiv: return "OpSDiv";
        case SpvOpFDiv: return "OpFDiv";
        case SpvOpUMod: return "OpUMod";
        case SpvOpSRem: return "OpSRem";
        case SpvOpSMod: return "OpSMod";
        case SpvOpFRem: return "OpFRem";
        case SpvOpFMod: return "OpFMod";
        case SpvOpVectorTimesScalar: return "OpVectorTimesScalar";
        case SpvOpMatrixTimesScalar: return "OpMatrixTimesScalar";
        case SpvOpVectorTimesMatrix: return "OpVectorTimesMatrix";
        case SpvOpMatrixTimesVector: return "OpMatrixTimesVector";
        case SpvOpMatrixTimesMatrix: return "OpMatrixTimesMatrix";
        case SpvOpOuterProduct: return "OpOuterProduct";
        case SpvOpDot: return "OpDot";
        case SpvOpIAddCarry: return "OpIAddCarry";
        case SpvOpISubBorrow: return "OpISubBorrow";
        case SpvOpUMulExtended: return "OpUMulExtended";
        case SpvOpSMulExtended: return "OpSMulExtended";
        case SpvOpAny: return "OpAny";
        case SpvOpAll: return "OpAll";
        case SpvOpIsNan: return "OpIsNan";
        case SpvOpIsInf: return "OpIsInf";
        case SpvOpIsFinite: return "OpIsFinite";
        case SpvOpIsNormal: return "OpIsNormal";
        case SpvOpSignBitSet: return "OpSignBitSet";
        case SpvOpLessOrGreater: return "OpLessOrGreater";
        case SpvOpOrdered: return "OpOrdered";
        case SpvOpUnordered: return "OpUnordered";
        case SpvOpLogicalEqual: return "OpLogicalEqual";
        case SpvOpLogicalNotEqual: return "OpLogicalNotEqual";
        case SpvOpLogicalOr: return "OpLogicalOr";
        case SpvOpLogicalAnd: return "OpLogicalAnd";
        case SpvOpLogicalNot: return "OpLogicalNot";
        case SpvOpSelect: return "OpSelect";
        case SpvOpIEqual: return "OpIEqual";
        case SpvOpINotEqual: return "OpINotEqual";
        case SpvOpUGreaterThan: return "OpUGreaterThan";
        case SpvOpSGreaterThan: return "OpSGreaterThan";
        case SpvOpUGreaterThanEqual: return "OpUGreaterThanEqual";
        case SpvOpSGreaterThanEqual: return "OpSGreaterThanEqual";
        case SpvOpULessThan: return "OpULessThan";
        case SpvOpSLessThan: return "OpSLessThan";
        case SpvOpULessThanEqual: return "OpULessThanEqual";
        case SpvOpSLessThanEqual: return "OpSLessThanEqual";
        case SpvOpFOrdEqual: return "OpFOrdEqual";
        case SpvOpFUnordEqual: return "OpFUnordEqual";
        case SpvOpFOrdNotEqual: return "OpFOrdNotEqual";
        case SpvOpFUnordNotEqual: return "OpFUnordNotEqual";
        case SpvOpFOrdLessThan: return "OpFOrdLessThan";
        case SpvOpFUnordLessThan: return "OpFUnordLessThan";
        case SpvOpFOrdGreaterThan: return "OpFOrdGreaterThan";
        case SpvOpFUnordGreaterThan: return "OpFUnordGreaterThan";
        case SpvOpFOrdLessThanEqual: return "OpFOrdLessThanEqual";
        case SpvOpFUnordLessThanEqual: return "OpFUnordLessThanEqual";
        case SpvOpFOrdGreaterThanEqual: return "OpFOrdGreaterThanEqual";
        case SpvOpFUnordGreaterThanEqual: return "OpFUnordGreaterThanEqual";
        case SpvOpShiftRightLogical: return "OpShiftRightLogical";
        case SpvOpShiftRightArithmetic: return "OpShiftRightArithmetic";
        case SpvOpShiftLeftLogical: return "OpShiftLeftLogical";
        case SpvOpBitwiseOr: return "OpBitwiseOr";
        case SpvOpBitwiseXor: return "OpBitwiseXor";
        case SpvOpBitwiseAnd: return "OpBitwiseAnd";
        case SpvOpNot: return "OpNot";
        case SpvOpBitFieldInsert: return "OpBitFieldInsert";
        case SpvOpBitFieldSExtract: return "OpBitFieldSExtract";
        case SpvOpBitFieldUExtract: return "OpBitFieldUExtract";
        case SpvOpBitReverse: return "OpBitReverse";
        case SpvOpBitCount: return "OpBitCount";
        case SpvOpDPdx: return "OpDPdx";
        case SpvOpDPdy: return "OpDPdy";
        case SpvOpFwidth: return "OpFwidth";
        case SpvOpDPdxFine: return "OpDPdxFine";
        case SpvOpDPdyFine: return "OpDPdyFine";
        case SpvOpFwidthFine: return "OpFwidthFine";
        case SpvOpDPdxCoarse: return "OpDPdxCoarse";
        case SpvOpDPdyCoarse: return "OpDPdyCoarse";
        case SpvOpFwidthCoarse: return "OpFwidthCoarse";
        case SpvOpEmitVertex: return "OpEmitVertex";
        case SpvOpEndPrimitive: return "OpEndPrimitive";
        case SpvOpEmitStreamVertex: return "OpEmitStreamVertex";
        case SpvOpEndStreamPrimitive: return "OpEndStreamPrimitive";
        case SpvOpControlBarrier: return "OpControlBarrier";
        case SpvOpMemoryBarrier: return "OpMemoryBarrier";
        case SpvOpAtomicLoad: return "OpAtomicLoad";
        case SpvOpAtomicStore: return "OpAtomicStore";
        case SpvOpAtomicExchange: return "OpAtomicExchange";
        case SpvOpAtomicCompareExchange: return "OpAtomicCompareExchange";
        case SpvOpAtomicCompareExchangeWeak: return "OpAtomicCompareExchangeWeak";
        case SpvOpAtomicIIncrement: return "OpAtomicIIncrement";
        case SpvOpAtomicIDecrement: return "OpAtomicIDecrement";
        case SpvOpAtomicIAdd: return "OpAtomicIAdd";
        case SpvOpAtomicISub: return "OpAtomicISub";
        case SpvOpAtomicSMin: return "OpAtomicSMin";
        case SpvOpAtomicUMin: return "OpAtomicUMin";
        case SpvOpAtomicSMax: return "OpAtomicSMax";
        case SpvOpAtomicUMax: return "OpAtomicUMax";
        case SpvOpAtomicAnd: return "OpAtomicAnd";
        case SpvOpAtomicOr: return "OpAtomicOr";
        case SpvOpAtomicXor: return "OpAtomicXor";
        case SpvOpPhi: return "OpPhi";
        case SpvOpLoopMerge: return "OpLoopMerge";
        case SpvOpSelectionMerge: return "OpSelectionMerge";
        case SpvOpLabel: return "OpLabel";
        case SpvOpBranch: return "OpBranch";
        case SpvOpBranchConditional: return "OpBranchConditional";
        case SpvOpSwitch: return "OpSwitch";
        case SpvOpKill: return "OpKill";
        case SpvOpReturn: return "OpReturn";
        case SpvOpReturnValue: return "OpReturnValue";
        case SpvOpUnreachable: return "OpUnreachable";
        case SpvOpLifetimeStart: return "OpLifetimeStart";
        case SpvOpLifetimeStop: return "OpLifetimeStop";
        case SpvOpGroupAsyncCopy: return "OpGroupAsyncCopy";
        case SpvOpGroupWaitEvents: return "OpGroupWaitEvents";
        case SpvOpGroupAll: return "OpGroupAll";
        case SpvOpGroupAny: return "OpGroupAny";
        case SpvOpGroupBroadcast: return "OpGroupBroadcast";
        case SpvOpGroupIAdd: return "OpGroupIAdd";
        case SpvOpGroupFAdd: return "OpGroupFAdd";
        case SpvOpGroupFMin: return "OpGroupFMin";
        case SpvOpGroupUMin: return "OpGroupUMin";
        case SpvOpGroupSMin: return "OpGroupSMin";
        case SpvOpGroupFMax: return "OpGroupFMax";
        case SpvOpGroupUMax: return "OpGroupUMax";
        case SpvOpGroupSMax: return "OpGroupSMax";
        case SpvOpReadPipe: return "OpReadPipe";
        case SpvOpWritePipe: return "OpWritePipe";
        case SpvOpReservedReadPipe: return "OpReservedReadPipe";
        case SpvOpReservedWritePipe: return "OpReservedWritePipe";
        case SpvOpReserveReadPipePackets: return "OpReserveReadPipePackets";
        case SpvOpReserveWritePipePackets: return "OpReserveWritePipePackets";
        case SpvOpCommitReadPipe: return "OpCommitReadPipe";
        case SpvOpCommitWritePipe: return "OpCommitWritePipe";
        case SpvOpIsValidReserveId: return "OpIsValidReserveId";
        case SpvOpGetNumPipePackets: return "OpGetNumPipePackets";
        case SpvOpGetMaxPipePackets: return "OpGetMaxPipePackets";
        case SpvOpGroupReserveReadPipePackets: return "OpGroupReserveReadPipePackets";
        case SpvOpGroupReserveWritePipePackets: return "OpGroupReserveWritePipePackets";
        case SpvOpGroupCommitReadPipe: return "OpGroupCommitReadPipe";
        case SpvOpGroupCommitWritePipe: return "OpGroupCommitWritePipe";
        case SpvOpEnqueueMarker: return "OpEnqueueMarker";
        case SpvOpEnqueueKernel: return "OpEnqueueKernel";
        case SpvOpGetKernelNDrangeSubGroupCount: return "OpGetKernelNDrangeSubGroupCount";
        case SpvOpGetKernelNDrangeMaxSubGroupSize: return "OpGetKernelNDrangeMaxSubGroupSize";
        case SpvOpGetKernelWorkGroupSize: return "OpGetKernelWorkGroupSize";
        case SpvOpGetKernelPreferredWorkGroupSizeMultiple: return "OpGetKernelPreferredWorkGroupSizeMultiple";
        case SpvOpRetainEvent: return "OpRetainEvent";
        case SpvOpReleaseEvent: return "OpReleaseEvent";
        case SpvOpCreateUserEvent: return "OpCreateUserEvent";
        case SpvOpIsValidEvent: return "OpIsValidEvent";
        case SpvOpSetUserEventStatus: return "OpSetUserEventStatus";
        case SpvOpCaptureEventProfilingInfo: return "OpCaptureEventProfilingInfo";
        case SpvOpGetDefaultQueue: return "OpGetDefaultQueue";
        case SpvOpBuildNDRange: return "OpBuildNDRange";
        case SpvOpImageSparseSampleImplicitLod: return "OpImageSparseSampleImplicitLod";
        case SpvOpImageSparseSampleExplicitLod: return "OpImageSparseSampleExplicitLod";
        case SpvOpImageSparseSampleDrefImplicitLod: return "OpImageSparseSampleDrefImplicitLod";
        case SpvOpImageSparseSampleDrefExplicitLod: return "OpImageSparseSampleDrefExplicitLod";
        case SpvOpImageSparseSampleProjImplicitLod: return "OpImageSparseSampleProjImplicitLod";
        case SpvOpImageSparseSampleProjExplicitLod: return "OpImageSparseSampleProjExplicitLod";
        case SpvOpImageSparseSampleProjDrefImplicitLod: return "OpImageSparseSampleProjDrefImplicitLod";
        case SpvOpImageSparseSampleProjDrefExplicitLod: return "OpImageSparseSampleProjDrefExplicitLod";
        case SpvOpImageSparseFetch: return "OpImageSparseFetch";
        case SpvOpImageSparseGather: return "OpImageSparseGather";
        case SpvOpImageSparseDrefGather: return "OpImageSparseDrefGather";
        case SpvOpImageSparseTexelsResident: return "OpImageSparseTexelsResident";
        case SpvOpNoLine: return "OpNoLine";
        case SpvOpAtomicFlagTestAndSet: return "OpAtomicFlagTestAndSet";
        case SpvOpAtomicFlagClear: return "OpAtomicFlagClear";
        case SpvOpImageSparseRead: return "OpImageSparseRead";
        case SpvOpSizeOf: return "OpSizeOf";
        case SpvOpTypePipeStorage: return "OpTypePipeStorage";
        case SpvOpConstantPipeStorage: return "OpConstantPipeStorage";
        case SpvOpCreatePipeFromPipeStorage: return "OpCreatePipeFromPipeStorage";
        case SpvOpGetKernelLocalSizeForSubgroupCount: return "OpGetKernelLocalSizeForSubgroupCount";
        case SpvOpGetKernelMaxNumSubgroups: return "OpGetKernelMaxNumSubgroups";
        case SpvOpTypeNamedBarrier: return "OpTypeNamedBarrier";
        case SpvOpNamedBarrierInitialize: return "OpNamedBarrierInitialize";
        case SpvOpMemoryNamedBarrier: return "OpMemoryNamedBarrier";
        case SpvOpModuleProcessed: return "OpModuleProcessed";
        case SpvOpExecutionModeId: return "OpExecutionModeId";
        case SpvOpDecorateId: return "OpDecorateId";
        case SpvOpSubgroupBallotKHR: return "OpSubgroupBallotKHR";
        case SpvOpSubgroupFirstInvocationKHR: return "OpSubgroupFirstInvocationKHR";
        case SpvOpSubgroupAllKHR: return "OpSubgroupAllKHR";
        case SpvOpSubgroupAnyKHR: return "OpSubgroupAnyKHR";
        case SpvOpSubgroupAllEqualKHR: return "OpSubgroupAllEqualKHR";
        case SpvOpSubgroupReadInvocationKHR: return "OpSubgroupReadInvocationKHR";
        default: return "";
    }
}
#endif

#ifdef __cplusplus
} // end of extern "C"
#endif

#endif  // #ifndef spirv_strings_H

