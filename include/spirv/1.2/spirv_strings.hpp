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

#ifndef spirv_strings_HPP
#define spirv_strings_HPP

#include "spirv.hpp"

#ifndef SPIRV_DEF
#   ifdef SPIRV_STRINGS_IMPLEMENT
#       define SPIRV_DEF
#   else
#       define SPIRV_DEF extern
#   endif
#endif

namespace spv {

SPIRV_DEF const char* SourceLanguageToString(SourceLanguage e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SourceLanguageUnknown: return "Unknown";
        case SourceLanguageESSL: return "ESSL";
        case SourceLanguageGLSL: return "GLSL";
        case SourceLanguageOpenCL_C: return "OpenCL_C";
        case SourceLanguageOpenCL_CPP: return "OpenCL_CPP";
        case SourceLanguageHLSL: return "HLSL";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ExecutionModelToString(ExecutionModel e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ExecutionModelVertex: return "Vertex";
        case ExecutionModelTessellationControl: return "TessellationControl";
        case ExecutionModelTessellationEvaluation: return "TessellationEvaluation";
        case ExecutionModelGeometry: return "Geometry";
        case ExecutionModelFragment: return "Fragment";
        case ExecutionModelGLCompute: return "GLCompute";
        case ExecutionModelKernel: return "Kernel";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* AddressingModelToString(AddressingModel e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case AddressingModelLogical: return "Logical";
        case AddressingModelPhysical32: return "Physical32";
        case AddressingModelPhysical64: return "Physical64";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* MemoryModelToString(MemoryModel e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case MemoryModelSimple: return "Simple";
        case MemoryModelGLSL450: return "GLSL450";
        case MemoryModelOpenCL: return "OpenCL";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ExecutionModeToString(ExecutionMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ExecutionModeInvocations: return "Invocations";
        case ExecutionModeSpacingEqual: return "SpacingEqual";
        case ExecutionModeSpacingFractionalEven: return "SpacingFractionalEven";
        case ExecutionModeSpacingFractionalOdd: return "SpacingFractionalOdd";
        case ExecutionModeVertexOrderCw: return "VertexOrderCw";
        case ExecutionModeVertexOrderCcw: return "VertexOrderCcw";
        case ExecutionModePixelCenterInteger: return "PixelCenterInteger";
        case ExecutionModeOriginUpperLeft: return "OriginUpperLeft";
        case ExecutionModeOriginLowerLeft: return "OriginLowerLeft";
        case ExecutionModeEarlyFragmentTests: return "EarlyFragmentTests";
        case ExecutionModePointMode: return "PointMode";
        case ExecutionModeXfb: return "Xfb";
        case ExecutionModeDepthReplacing: return "DepthReplacing";
        case ExecutionModeDepthGreater: return "DepthGreater";
        case ExecutionModeDepthLess: return "DepthLess";
        case ExecutionModeDepthUnchanged: return "DepthUnchanged";
        case ExecutionModeLocalSize: return "LocalSize";
        case ExecutionModeLocalSizeHint: return "LocalSizeHint";
        case ExecutionModeInputPoints: return "InputPoints";
        case ExecutionModeInputLines: return "InputLines";
        case ExecutionModeInputLinesAdjacency: return "InputLinesAdjacency";
        case ExecutionModeTriangles: return "Triangles";
        case ExecutionModeInputTrianglesAdjacency: return "InputTrianglesAdjacency";
        case ExecutionModeQuads: return "Quads";
        case ExecutionModeIsolines: return "Isolines";
        case ExecutionModeOutputVertices: return "OutputVertices";
        case ExecutionModeOutputPoints: return "OutputPoints";
        case ExecutionModeOutputLineStrip: return "OutputLineStrip";
        case ExecutionModeOutputTriangleStrip: return "OutputTriangleStrip";
        case ExecutionModeVecTypeHint: return "VecTypeHint";
        case ExecutionModeContractionOff: return "ContractionOff";
        case ExecutionModeInitializer: return "Initializer";
        case ExecutionModeFinalizer: return "Finalizer";
        case ExecutionModeSubgroupSize: return "SubgroupSize";
        case ExecutionModeSubgroupsPerWorkgroup: return "SubgroupsPerWorkgroup";
        case ExecutionModeSubgroupsPerWorkgroupId: return "SubgroupsPerWorkgroupId";
        case ExecutionModeLocalSizeId: return "LocalSizeId";
        case ExecutionModeLocalSizeHintId: return "LocalSizeHintId";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* StorageClassToString(StorageClass e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case StorageClassUniformConstant: return "UniformConstant";
        case StorageClassInput: return "Input";
        case StorageClassUniform: return "Uniform";
        case StorageClassOutput: return "Output";
        case StorageClassWorkgroup: return "Workgroup";
        case StorageClassCrossWorkgroup: return "CrossWorkgroup";
        case StorageClassPrivate: return "Private";
        case StorageClassFunction: return "Function";
        case StorageClassGeneric: return "Generic";
        case StorageClassPushConstant: return "PushConstant";
        case StorageClassAtomicCounter: return "AtomicCounter";
        case StorageClassImage: return "Image";
        case StorageClassStorageBuffer: return "StorageBuffer";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* DimToString(Dim e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case Dim1D: return "1D";
        case Dim2D: return "2D";
        case Dim3D: return "3D";
        case DimCube: return "Cube";
        case DimRect: return "Rect";
        case DimBuffer: return "Buffer";
        case DimSubpassData: return "SubpassData";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SamplerAddressingModeToString(SamplerAddressingMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SamplerAddressingModeNone: return "None";
        case SamplerAddressingModeClampToEdge: return "ClampToEdge";
        case SamplerAddressingModeClamp: return "Clamp";
        case SamplerAddressingModeRepeat: return "Repeat";
        case SamplerAddressingModeRepeatMirrored: return "RepeatMirrored";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SamplerFilterModeToString(SamplerFilterMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SamplerFilterModeNearest: return "Nearest";
        case SamplerFilterModeLinear: return "Linear";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ImageFormatToString(ImageFormat e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ImageFormatUnknown: return "Unknown";
        case ImageFormatRgba32f: return "Rgba32f";
        case ImageFormatRgba16f: return "Rgba16f";
        case ImageFormatR32f: return "R32f";
        case ImageFormatRgba8: return "Rgba8";
        case ImageFormatRgba8Snorm: return "Rgba8Snorm";
        case ImageFormatRg32f: return "Rg32f";
        case ImageFormatRg16f: return "Rg16f";
        case ImageFormatR11fG11fB10f: return "R11fG11fB10f";
        case ImageFormatR16f: return "R16f";
        case ImageFormatRgba16: return "Rgba16";
        case ImageFormatRgb10A2: return "Rgb10A2";
        case ImageFormatRg16: return "Rg16";
        case ImageFormatRg8: return "Rg8";
        case ImageFormatR16: return "R16";
        case ImageFormatR8: return "R8";
        case ImageFormatRgba16Snorm: return "Rgba16Snorm";
        case ImageFormatRg16Snorm: return "Rg16Snorm";
        case ImageFormatRg8Snorm: return "Rg8Snorm";
        case ImageFormatR16Snorm: return "R16Snorm";
        case ImageFormatR8Snorm: return "R8Snorm";
        case ImageFormatRgba32i: return "Rgba32i";
        case ImageFormatRgba16i: return "Rgba16i";
        case ImageFormatRgba8i: return "Rgba8i";
        case ImageFormatR32i: return "R32i";
        case ImageFormatRg32i: return "Rg32i";
        case ImageFormatRg16i: return "Rg16i";
        case ImageFormatRg8i: return "Rg8i";
        case ImageFormatR16i: return "R16i";
        case ImageFormatR8i: return "R8i";
        case ImageFormatRgba32ui: return "Rgba32ui";
        case ImageFormatRgba16ui: return "Rgba16ui";
        case ImageFormatRgba8ui: return "Rgba8ui";
        case ImageFormatR32ui: return "R32ui";
        case ImageFormatRgb10a2ui: return "Rgb10a2ui";
        case ImageFormatRg32ui: return "Rg32ui";
        case ImageFormatRg16ui: return "Rg16ui";
        case ImageFormatRg8ui: return "Rg8ui";
        case ImageFormatR16ui: return "R16ui";
        case ImageFormatR8ui: return "R8ui";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ImageChannelOrderToString(ImageChannelOrder e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ImageChannelOrderR: return "R";
        case ImageChannelOrderA: return "A";
        case ImageChannelOrderRG: return "RG";
        case ImageChannelOrderRA: return "RA";
        case ImageChannelOrderRGB: return "RGB";
        case ImageChannelOrderRGBA: return "RGBA";
        case ImageChannelOrderBGRA: return "BGRA";
        case ImageChannelOrderARGB: return "ARGB";
        case ImageChannelOrderIntensity: return "Intensity";
        case ImageChannelOrderLuminance: return "Luminance";
        case ImageChannelOrderRx: return "Rx";
        case ImageChannelOrderRGx: return "RGx";
        case ImageChannelOrderRGBx: return "RGBx";
        case ImageChannelOrderDepth: return "Depth";
        case ImageChannelOrderDepthStencil: return "DepthStencil";
        case ImageChannelOrdersRGB: return "sRGB";
        case ImageChannelOrdersRGBx: return "sRGBx";
        case ImageChannelOrdersRGBA: return "sRGBA";
        case ImageChannelOrdersBGRA: return "sBGRA";
        case ImageChannelOrderABGR: return "ABGR";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ImageChannelDataTypeToString(ImageChannelDataType e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ImageChannelDataTypeSnormInt8: return "SnormInt8";
        case ImageChannelDataTypeSnormInt16: return "SnormInt16";
        case ImageChannelDataTypeUnormInt8: return "UnormInt8";
        case ImageChannelDataTypeUnormInt16: return "UnormInt16";
        case ImageChannelDataTypeUnormShort565: return "UnormShort565";
        case ImageChannelDataTypeUnormShort555: return "UnormShort555";
        case ImageChannelDataTypeUnormInt101010: return "UnormInt101010";
        case ImageChannelDataTypeSignedInt8: return "SignedInt8";
        case ImageChannelDataTypeSignedInt16: return "SignedInt16";
        case ImageChannelDataTypeSignedInt32: return "SignedInt32";
        case ImageChannelDataTypeUnsignedInt8: return "UnsignedInt8";
        case ImageChannelDataTypeUnsignedInt16: return "UnsignedInt16";
        case ImageChannelDataTypeUnsignedInt32: return "UnsignedInt32";
        case ImageChannelDataTypeHalfFloat: return "HalfFloat";
        case ImageChannelDataTypeFloat: return "Float";
        case ImageChannelDataTypeUnormInt24: return "UnormInt24";
        case ImageChannelDataTypeUnormInt101010_2: return "UnormInt101010_2";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ImageOperandsShiftToString(ImageOperandsShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ImageOperandsBiasShift: return "Bias";
        case ImageOperandsLodShift: return "Lod";
        case ImageOperandsGradShift: return "Grad";
        case ImageOperandsConstOffsetShift: return "ConstOffset";
        case ImageOperandsOffsetShift: return "Offset";
        case ImageOperandsConstOffsetsShift: return "ConstOffsets";
        case ImageOperandsSampleShift: return "Sample";
        case ImageOperandsMinLodShift: return "MinLod";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ImageOperandsMaskToString(ImageOperandsMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ImageOperandsMaskNone: return "None";
        case ImageOperandsBiasMask: return "Bias";
        case ImageOperandsLodMask: return "Lod";
        case ImageOperandsGradMask: return "Grad";
        case ImageOperandsConstOffsetMask: return "ConstOffset";
        case ImageOperandsOffsetMask: return "Offset";
        case ImageOperandsConstOffsetsMask: return "ConstOffsets";
        case ImageOperandsSampleMask: return "Sample";
        case ImageOperandsMinLodMask: return "MinLod";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* FPFastMathModeShiftToString(FPFastMathModeShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case FPFastMathModeNotNaNShift: return "NotNaN";
        case FPFastMathModeNotInfShift: return "NotInf";
        case FPFastMathModeNSZShift: return "NSZ";
        case FPFastMathModeAllowRecipShift: return "AllowRecip";
        case FPFastMathModeFastShift: return "Fast";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* FPFastMathModeMaskToString(FPFastMathModeMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case FPFastMathModeMaskNone: return "None";
        case FPFastMathModeNotNaNMask: return "NotNaN";
        case FPFastMathModeNotInfMask: return "NotInf";
        case FPFastMathModeNSZMask: return "NSZ";
        case FPFastMathModeAllowRecipMask: return "AllowRecip";
        case FPFastMathModeFastMask: return "Fast";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* FPRoundingModeToString(FPRoundingMode e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case FPRoundingModeRTE: return "RTE";
        case FPRoundingModeRTZ: return "RTZ";
        case FPRoundingModeRTP: return "RTP";
        case FPRoundingModeRTN: return "RTN";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* LinkageTypeToString(LinkageType e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case LinkageTypeExport: return "Export";
        case LinkageTypeImport: return "Import";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* AccessQualifierToString(AccessQualifier e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case AccessQualifierReadOnly: return "ReadOnly";
        case AccessQualifierWriteOnly: return "WriteOnly";
        case AccessQualifierReadWrite: return "ReadWrite";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* FunctionParameterAttributeToString(FunctionParameterAttribute e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case FunctionParameterAttributeZext: return "Zext";
        case FunctionParameterAttributeSext: return "Sext";
        case FunctionParameterAttributeByVal: return "ByVal";
        case FunctionParameterAttributeSret: return "Sret";
        case FunctionParameterAttributeNoAlias: return "NoAlias";
        case FunctionParameterAttributeNoCapture: return "NoCapture";
        case FunctionParameterAttributeNoWrite: return "NoWrite";
        case FunctionParameterAttributeNoReadWrite: return "NoReadWrite";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* DecorationToString(Decoration e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case DecorationRelaxedPrecision: return "RelaxedPrecision";
        case DecorationSpecId: return "SpecId";
        case DecorationBlock: return "Block";
        case DecorationBufferBlock: return "BufferBlock";
        case DecorationRowMajor: return "RowMajor";
        case DecorationColMajor: return "ColMajor";
        case DecorationArrayStride: return "ArrayStride";
        case DecorationMatrixStride: return "MatrixStride";
        case DecorationGLSLShared: return "GLSLShared";
        case DecorationGLSLPacked: return "GLSLPacked";
        case DecorationCPacked: return "CPacked";
        case DecorationBuiltIn: return "BuiltIn";
        case DecorationNoPerspective: return "NoPerspective";
        case DecorationFlat: return "Flat";
        case DecorationPatch: return "Patch";
        case DecorationCentroid: return "Centroid";
        case DecorationSample: return "Sample";
        case DecorationInvariant: return "Invariant";
        case DecorationRestrict: return "Restrict";
        case DecorationAliased: return "Aliased";
        case DecorationVolatile: return "Volatile";
        case DecorationConstant: return "Constant";
        case DecorationCoherent: return "Coherent";
        case DecorationNonWritable: return "NonWritable";
        case DecorationNonReadable: return "NonReadable";
        case DecorationUniform: return "Uniform";
        case DecorationSaturatedConversion: return "SaturatedConversion";
        case DecorationStream: return "Stream";
        case DecorationLocation: return "Location";
        case DecorationComponent: return "Component";
        case DecorationIndex: return "Index";
        case DecorationBinding: return "Binding";
        case DecorationDescriptorSet: return "DescriptorSet";
        case DecorationOffset: return "Offset";
        case DecorationXfbBuffer: return "XfbBuffer";
        case DecorationXfbStride: return "XfbStride";
        case DecorationFuncParamAttr: return "FuncParamAttr";
        case DecorationFPRoundingMode: return "FPRoundingMode";
        case DecorationFPFastMathMode: return "FPFastMathMode";
        case DecorationLinkageAttributes: return "LinkageAttributes";
        case DecorationNoContraction: return "NoContraction";
        case DecorationInputAttachmentIndex: return "InputAttachmentIndex";
        case DecorationAlignment: return "Alignment";
        case DecorationMaxByteOffset: return "MaxByteOffset";
        case DecorationAlignmentId: return "AlignmentId";
        case DecorationMaxByteOffsetId: return "MaxByteOffsetId";
        case DecorationOverrideCoverageNV: return "OverrideCoverageNV";
        case DecorationPassthroughNV: return "PassthroughNV";
        case DecorationViewportRelativeNV: return "ViewportRelativeNV";
        case DecorationSecondaryViewportRelativeNV: return "SecondaryViewportRelativeNV";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* BuiltInToString(BuiltIn e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case BuiltInPosition: return "Position";
        case BuiltInPointSize: return "PointSize";
        case BuiltInClipDistance: return "ClipDistance";
        case BuiltInCullDistance: return "CullDistance";
        case BuiltInVertexId: return "VertexId";
        case BuiltInInstanceId: return "InstanceId";
        case BuiltInPrimitiveId: return "PrimitiveId";
        case BuiltInInvocationId: return "InvocationId";
        case BuiltInLayer: return "Layer";
        case BuiltInViewportIndex: return "ViewportIndex";
        case BuiltInTessLevelOuter: return "TessLevelOuter";
        case BuiltInTessLevelInner: return "TessLevelInner";
        case BuiltInTessCoord: return "TessCoord";
        case BuiltInPatchVertices: return "PatchVertices";
        case BuiltInFragCoord: return "FragCoord";
        case BuiltInPointCoord: return "PointCoord";
        case BuiltInFrontFacing: return "FrontFacing";
        case BuiltInSampleId: return "SampleId";
        case BuiltInSamplePosition: return "SamplePosition";
        case BuiltInSampleMask: return "SampleMask";
        case BuiltInFragDepth: return "FragDepth";
        case BuiltInHelperInvocation: return "HelperInvocation";
        case BuiltInNumWorkgroups: return "NumWorkgroups";
        case BuiltInWorkgroupSize: return "WorkgroupSize";
        case BuiltInWorkgroupId: return "WorkgroupId";
        case BuiltInLocalInvocationId: return "LocalInvocationId";
        case BuiltInGlobalInvocationId: return "GlobalInvocationId";
        case BuiltInLocalInvocationIndex: return "LocalInvocationIndex";
        case BuiltInWorkDim: return "WorkDim";
        case BuiltInGlobalSize: return "GlobalSize";
        case BuiltInEnqueuedWorkgroupSize: return "EnqueuedWorkgroupSize";
        case BuiltInGlobalOffset: return "GlobalOffset";
        case BuiltInGlobalLinearId: return "GlobalLinearId";
        case BuiltInSubgroupSize: return "SubgroupSize";
        case BuiltInSubgroupMaxSize: return "SubgroupMaxSize";
        case BuiltInNumSubgroups: return "NumSubgroups";
        case BuiltInNumEnqueuedSubgroups: return "NumEnqueuedSubgroups";
        case BuiltInSubgroupId: return "SubgroupId";
        case BuiltInSubgroupLocalInvocationId: return "SubgroupLocalInvocationId";
        case BuiltInVertexIndex: return "VertexIndex";
        case BuiltInInstanceIndex: return "InstanceIndex";
        case BuiltInSubgroupEqMaskKHR: return "SubgroupEqMaskKHR";
        case BuiltInSubgroupGeMaskKHR: return "SubgroupGeMaskKHR";
        case BuiltInSubgroupGtMaskKHR: return "SubgroupGtMaskKHR";
        case BuiltInSubgroupLeMaskKHR: return "SubgroupLeMaskKHR";
        case BuiltInSubgroupLtMaskKHR: return "SubgroupLtMaskKHR";
        case BuiltInBaseVertex: return "BaseVertex";
        case BuiltInBaseInstance: return "BaseInstance";
        case BuiltInDrawIndex: return "DrawIndex";
        case BuiltInDeviceIndex: return "DeviceIndex";
        case BuiltInViewIndex: return "ViewIndex";
        case BuiltInViewportMaskNV: return "ViewportMaskNV";
        case BuiltInSecondaryPositionNV: return "SecondaryPositionNV";
        case BuiltInSecondaryViewportMaskNV: return "SecondaryViewportMaskNV";
        case BuiltInPositionPerViewNV: return "PositionPerViewNV";
        case BuiltInViewportMaskPerViewNV: return "ViewportMaskPerViewNV";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SelectionControlShiftToString(SelectionControlShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SelectionControlFlattenShift: return "Flatten";
        case SelectionControlDontFlattenShift: return "DontFlatten";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* SelectionControlMaskToString(SelectionControlMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case SelectionControlMaskNone: return "None";
        case SelectionControlFlattenMask: return "Flatten";
        case SelectionControlDontFlattenMask: return "DontFlatten";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* LoopControlShiftToString(LoopControlShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case LoopControlUnrollShift: return "Unroll";
        case LoopControlDontUnrollShift: return "DontUnroll";
        case LoopControlDependencyInfiniteShift: return "DependencyInfinite";
        case LoopControlDependencyLengthShift: return "DependencyLength";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* LoopControlMaskToString(LoopControlMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case LoopControlMaskNone: return "None";
        case LoopControlUnrollMask: return "Unroll";
        case LoopControlDontUnrollMask: return "DontUnroll";
        case LoopControlDependencyInfiniteMask: return "DependencyInfinite";
        case LoopControlDependencyLengthMask: return "DependencyLength";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* FunctionControlShiftToString(FunctionControlShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case FunctionControlInlineShift: return "Inline";
        case FunctionControlDontInlineShift: return "DontInline";
        case FunctionControlPureShift: return "Pure";
        case FunctionControlConstShift: return "Const";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* FunctionControlMaskToString(FunctionControlMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case FunctionControlMaskNone: return "None";
        case FunctionControlInlineMask: return "Inline";
        case FunctionControlDontInlineMask: return "DontInline";
        case FunctionControlPureMask: return "Pure";
        case FunctionControlConstMask: return "Const";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* MemorySemanticsShiftToString(MemorySemanticsShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case MemorySemanticsAcquireShift: return "Acquire";
        case MemorySemanticsReleaseShift: return "Release";
        case MemorySemanticsAcquireReleaseShift: return "AcquireRelease";
        case MemorySemanticsSequentiallyConsistentShift: return "SequentiallyConsistent";
        case MemorySemanticsUniformMemoryShift: return "UniformMemory";
        case MemorySemanticsSubgroupMemoryShift: return "SubgroupMemory";
        case MemorySemanticsWorkgroupMemoryShift: return "WorkgroupMemory";
        case MemorySemanticsCrossWorkgroupMemoryShift: return "CrossWorkgroupMemory";
        case MemorySemanticsAtomicCounterMemoryShift: return "AtomicCounterMemory";
        case MemorySemanticsImageMemoryShift: return "ImageMemory";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* MemorySemanticsMaskToString(MemorySemanticsMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case MemorySemanticsMaskNone: return "None";
        case MemorySemanticsAcquireMask: return "Acquire";
        case MemorySemanticsReleaseMask: return "Release";
        case MemorySemanticsAcquireReleaseMask: return "AcquireRelease";
        case MemorySemanticsSequentiallyConsistentMask: return "SequentiallyConsistent";
        case MemorySemanticsUniformMemoryMask: return "UniformMemory";
        case MemorySemanticsSubgroupMemoryMask: return "SubgroupMemory";
        case MemorySemanticsWorkgroupMemoryMask: return "WorkgroupMemory";
        case MemorySemanticsCrossWorkgroupMemoryMask: return "CrossWorkgroupMemory";
        case MemorySemanticsAtomicCounterMemoryMask: return "AtomicCounterMemory";
        case MemorySemanticsImageMemoryMask: return "ImageMemory";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* MemoryAccessShiftToString(MemoryAccessShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case MemoryAccessVolatileShift: return "Volatile";
        case MemoryAccessAlignedShift: return "Aligned";
        case MemoryAccessNontemporalShift: return "Nontemporal";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* MemoryAccessMaskToString(MemoryAccessMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case MemoryAccessMaskNone: return "None";
        case MemoryAccessVolatileMask: return "Volatile";
        case MemoryAccessAlignedMask: return "Aligned";
        case MemoryAccessNontemporalMask: return "Nontemporal";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* ScopeToString(Scope e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case ScopeCrossDevice: return "CrossDevice";
        case ScopeDevice: return "Device";
        case ScopeWorkgroup: return "Workgroup";
        case ScopeSubgroup: return "Subgroup";
        case ScopeInvocation: return "Invocation";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* GroupOperationToString(GroupOperation e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case GroupOperationReduce: return "Reduce";
        case GroupOperationInclusiveScan: return "InclusiveScan";
        case GroupOperationExclusiveScan: return "ExclusiveScan";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* KernelEnqueueFlagsToString(KernelEnqueueFlags e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case KernelEnqueueFlagsNoWait: return "NoWait";
        case KernelEnqueueFlagsWaitKernel: return "WaitKernel";
        case KernelEnqueueFlagsWaitWorkGroup: return "WaitWorkGroup";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* KernelProfilingInfoShiftToString(KernelProfilingInfoShift e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case KernelProfilingInfoCmdExecTimeShift: return "CmdExecTime";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* KernelProfilingInfoMaskToString(KernelProfilingInfoMask e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case KernelProfilingInfoMaskNone: return "None";
        case KernelProfilingInfoCmdExecTimeMask: return "CmdExecTime";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* CapabilityToString(Capability e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case CapabilityMatrix: return "Matrix";
        case CapabilityShader: return "Shader";
        case CapabilityGeometry: return "Geometry";
        case CapabilityTessellation: return "Tessellation";
        case CapabilityAddresses: return "Addresses";
        case CapabilityLinkage: return "Linkage";
        case CapabilityKernel: return "Kernel";
        case CapabilityVector16: return "Vector16";
        case CapabilityFloat16Buffer: return "Float16Buffer";
        case CapabilityFloat16: return "Float16";
        case CapabilityFloat64: return "Float64";
        case CapabilityInt64: return "Int64";
        case CapabilityInt64Atomics: return "Int64Atomics";
        case CapabilityImageBasic: return "ImageBasic";
        case CapabilityImageReadWrite: return "ImageReadWrite";
        case CapabilityImageMipmap: return "ImageMipmap";
        case CapabilityPipes: return "Pipes";
        case CapabilityGroups: return "Groups";
        case CapabilityDeviceEnqueue: return "DeviceEnqueue";
        case CapabilityLiteralSampler: return "LiteralSampler";
        case CapabilityAtomicStorage: return "AtomicStorage";
        case CapabilityInt16: return "Int16";
        case CapabilityTessellationPointSize: return "TessellationPointSize";
        case CapabilityGeometryPointSize: return "GeometryPointSize";
        case CapabilityImageGatherExtended: return "ImageGatherExtended";
        case CapabilityStorageImageMultisample: return "StorageImageMultisample";
        case CapabilityUniformBufferArrayDynamicIndexing: return "UniformBufferArrayDynamicIndexing";
        case CapabilitySampledImageArrayDynamicIndexing: return "SampledImageArrayDynamicIndexing";
        case CapabilityStorageBufferArrayDynamicIndexing: return "StorageBufferArrayDynamicIndexing";
        case CapabilityStorageImageArrayDynamicIndexing: return "StorageImageArrayDynamicIndexing";
        case CapabilityClipDistance: return "ClipDistance";
        case CapabilityCullDistance: return "CullDistance";
        case CapabilityImageCubeArray: return "ImageCubeArray";
        case CapabilitySampleRateShading: return "SampleRateShading";
        case CapabilityImageRect: return "ImageRect";
        case CapabilitySampledRect: return "SampledRect";
        case CapabilityGenericPointer: return "GenericPointer";
        case CapabilityInt8: return "Int8";
        case CapabilityInputAttachment: return "InputAttachment";
        case CapabilitySparseResidency: return "SparseResidency";
        case CapabilityMinLod: return "MinLod";
        case CapabilitySampled1D: return "Sampled1D";
        case CapabilityImage1D: return "Image1D";
        case CapabilitySampledCubeArray: return "SampledCubeArray";
        case CapabilitySampledBuffer: return "SampledBuffer";
        case CapabilityImageBuffer: return "ImageBuffer";
        case CapabilityImageMSArray: return "ImageMSArray";
        case CapabilityStorageImageExtendedFormats: return "StorageImageExtendedFormats";
        case CapabilityImageQuery: return "ImageQuery";
        case CapabilityDerivativeControl: return "DerivativeControl";
        case CapabilityInterpolationFunction: return "InterpolationFunction";
        case CapabilityTransformFeedback: return "TransformFeedback";
        case CapabilityGeometryStreams: return "GeometryStreams";
        case CapabilityStorageImageReadWithoutFormat: return "StorageImageReadWithoutFormat";
        case CapabilityStorageImageWriteWithoutFormat: return "StorageImageWriteWithoutFormat";
        case CapabilityMultiViewport: return "MultiViewport";
        case CapabilitySubgroupDispatch: return "SubgroupDispatch";
        case CapabilityNamedBarrier: return "NamedBarrier";
        case CapabilityPipeStorage: return "PipeStorage";
        case CapabilitySubgroupBallotKHR: return "SubgroupBallotKHR";
        case CapabilityDrawParameters: return "DrawParameters";
        case CapabilitySubgroupVoteKHR: return "SubgroupVoteKHR";
        case CapabilityStorageBuffer16BitAccess: return "StorageBuffer16BitAccess";
        //case CapabilityStorageUniformBufferBlock16: return "StorageUniformBufferBlock16";
        case CapabilityStorageUniform16: return "StorageUniform16";
        //case CapabilityUniformAndStorageBuffer16BitAccess: return "UniformAndStorageBuffer16BitAccess";
        case CapabilityStoragePushConstant16: return "StoragePushConstant16";
        case CapabilityStorageInputOutput16: return "StorageInputOutput16";
        case CapabilityDeviceGroup: return "DeviceGroup";
        case CapabilityMultiView: return "MultiView";
        case CapabilityVariablePointersStorageBuffer: return "VariablePointersStorageBuffer";
        case CapabilityVariablePointers: return "VariablePointers";
        case CapabilitySampleMaskOverrideCoverageNV: return "SampleMaskOverrideCoverageNV";
        case CapabilityGeometryShaderPassthroughNV: return "GeometryShaderPassthroughNV";
        case CapabilityShaderViewportIndexLayerNV: return "ShaderViewportIndexLayerNV";
        case CapabilityShaderViewportMaskNV: return "ShaderViewportMaskNV";
        case CapabilityShaderStereoViewNV: return "ShaderStereoViewNV";
        case CapabilityPerViewAttributesNV: return "PerViewAttributesNV";
        default: return "";
    }
}
#endif

SPIRV_DEF const char* OpToString(Op e)
#ifndef SPIRV_STRINGS_IMPLEMENT
;
#else
{
    switch(e)
    {
        case OpNop: return "OpNop";
        case OpUndef: return "OpUndef";
        case OpSourceContinued: return "OpSourceContinued";
        case OpSource: return "OpSource";
        case OpSourceExtension: return "OpSourceExtension";
        case OpName: return "OpName";
        case OpMemberName: return "OpMemberName";
        case OpString: return "OpString";
        case OpLine: return "OpLine";
        case OpExtension: return "OpExtension";
        case OpExtInstImport: return "OpExtInstImport";
        case OpExtInst: return "OpExtInst";
        case OpMemoryModel: return "OpMemoryModel";
        case OpEntryPoint: return "OpEntryPoint";
        case OpExecutionMode: return "OpExecutionMode";
        case OpCapability: return "OpCapability";
        case OpTypeVoid: return "OpTypeVoid";
        case OpTypeBool: return "OpTypeBool";
        case OpTypeInt: return "OpTypeInt";
        case OpTypeFloat: return "OpTypeFloat";
        case OpTypeVector: return "OpTypeVector";
        case OpTypeMatrix: return "OpTypeMatrix";
        case OpTypeImage: return "OpTypeImage";
        case OpTypeSampler: return "OpTypeSampler";
        case OpTypeSampledImage: return "OpTypeSampledImage";
        case OpTypeArray: return "OpTypeArray";
        case OpTypeRuntimeArray: return "OpTypeRuntimeArray";
        case OpTypeStruct: return "OpTypeStruct";
        case OpTypeOpaque: return "OpTypeOpaque";
        case OpTypePointer: return "OpTypePointer";
        case OpTypeFunction: return "OpTypeFunction";
        case OpTypeEvent: return "OpTypeEvent";
        case OpTypeDeviceEvent: return "OpTypeDeviceEvent";
        case OpTypeReserveId: return "OpTypeReserveId";
        case OpTypeQueue: return "OpTypeQueue";
        case OpTypePipe: return "OpTypePipe";
        case OpTypeForwardPointer: return "OpTypeForwardPointer";
        case OpConstantTrue: return "OpConstantTrue";
        case OpConstantFalse: return "OpConstantFalse";
        case OpConstant: return "OpConstant";
        case OpConstantComposite: return "OpConstantComposite";
        case OpConstantSampler: return "OpConstantSampler";
        case OpConstantNull: return "OpConstantNull";
        case OpSpecConstantTrue: return "OpSpecConstantTrue";
        case OpSpecConstantFalse: return "OpSpecConstantFalse";
        case OpSpecConstant: return "OpSpecConstant";
        case OpSpecConstantComposite: return "OpSpecConstantComposite";
        case OpSpecConstantOp: return "OpSpecConstantOp";
        case OpFunction: return "OpFunction";
        case OpFunctionParameter: return "OpFunctionParameter";
        case OpFunctionEnd: return "OpFunctionEnd";
        case OpFunctionCall: return "OpFunctionCall";
        case OpVariable: return "OpVariable";
        case OpImageTexelPointer: return "OpImageTexelPointer";
        case OpLoad: return "OpLoad";
        case OpStore: return "OpStore";
        case OpCopyMemory: return "OpCopyMemory";
        case OpCopyMemorySized: return "OpCopyMemorySized";
        case OpAccessChain: return "OpAccessChain";
        case OpInBoundsAccessChain: return "OpInBoundsAccessChain";
        case OpPtrAccessChain: return "OpPtrAccessChain";
        case OpArrayLength: return "OpArrayLength";
        case OpGenericPtrMemSemantics: return "OpGenericPtrMemSemantics";
        case OpInBoundsPtrAccessChain: return "OpInBoundsPtrAccessChain";
        case OpDecorate: return "OpDecorate";
        case OpMemberDecorate: return "OpMemberDecorate";
        case OpDecorationGroup: return "OpDecorationGroup";
        case OpGroupDecorate: return "OpGroupDecorate";
        case OpGroupMemberDecorate: return "OpGroupMemberDecorate";
        case OpVectorExtractDynamic: return "OpVectorExtractDynamic";
        case OpVectorInsertDynamic: return "OpVectorInsertDynamic";
        case OpVectorShuffle: return "OpVectorShuffle";
        case OpCompositeConstruct: return "OpCompositeConstruct";
        case OpCompositeExtract: return "OpCompositeExtract";
        case OpCompositeInsert: return "OpCompositeInsert";
        case OpCopyObject: return "OpCopyObject";
        case OpTranspose: return "OpTranspose";
        case OpSampledImage: return "OpSampledImage";
        case OpImageSampleImplicitLod: return "OpImageSampleImplicitLod";
        case OpImageSampleExplicitLod: return "OpImageSampleExplicitLod";
        case OpImageSampleDrefImplicitLod: return "OpImageSampleDrefImplicitLod";
        case OpImageSampleDrefExplicitLod: return "OpImageSampleDrefExplicitLod";
        case OpImageSampleProjImplicitLod: return "OpImageSampleProjImplicitLod";
        case OpImageSampleProjExplicitLod: return "OpImageSampleProjExplicitLod";
        case OpImageSampleProjDrefImplicitLod: return "OpImageSampleProjDrefImplicitLod";
        case OpImageSampleProjDrefExplicitLod: return "OpImageSampleProjDrefExplicitLod";
        case OpImageFetch: return "OpImageFetch";
        case OpImageGather: return "OpImageGather";
        case OpImageDrefGather: return "OpImageDrefGather";
        case OpImageRead: return "OpImageRead";
        case OpImageWrite: return "OpImageWrite";
        case OpImage: return "OpImage";
        case OpImageQueryFormat: return "OpImageQueryFormat";
        case OpImageQueryOrder: return "OpImageQueryOrder";
        case OpImageQuerySizeLod: return "OpImageQuerySizeLod";
        case OpImageQuerySize: return "OpImageQuerySize";
        case OpImageQueryLod: return "OpImageQueryLod";
        case OpImageQueryLevels: return "OpImageQueryLevels";
        case OpImageQuerySamples: return "OpImageQuerySamples";
        case OpConvertFToU: return "OpConvertFToU";
        case OpConvertFToS: return "OpConvertFToS";
        case OpConvertSToF: return "OpConvertSToF";
        case OpConvertUToF: return "OpConvertUToF";
        case OpUConvert: return "OpUConvert";
        case OpSConvert: return "OpSConvert";
        case OpFConvert: return "OpFConvert";
        case OpQuantizeToF16: return "OpQuantizeToF16";
        case OpConvertPtrToU: return "OpConvertPtrToU";
        case OpSatConvertSToU: return "OpSatConvertSToU";
        case OpSatConvertUToS: return "OpSatConvertUToS";
        case OpConvertUToPtr: return "OpConvertUToPtr";
        case OpPtrCastToGeneric: return "OpPtrCastToGeneric";
        case OpGenericCastToPtr: return "OpGenericCastToPtr";
        case OpGenericCastToPtrExplicit: return "OpGenericCastToPtrExplicit";
        case OpBitcast: return "OpBitcast";
        case OpSNegate: return "OpSNegate";
        case OpFNegate: return "OpFNegate";
        case OpIAdd: return "OpIAdd";
        case OpFAdd: return "OpFAdd";
        case OpISub: return "OpISub";
        case OpFSub: return "OpFSub";
        case OpIMul: return "OpIMul";
        case OpFMul: return "OpFMul";
        case OpUDiv: return "OpUDiv";
        case OpSDiv: return "OpSDiv";
        case OpFDiv: return "OpFDiv";
        case OpUMod: return "OpUMod";
        case OpSRem: return "OpSRem";
        case OpSMod: return "OpSMod";
        case OpFRem: return "OpFRem";
        case OpFMod: return "OpFMod";
        case OpVectorTimesScalar: return "OpVectorTimesScalar";
        case OpMatrixTimesScalar: return "OpMatrixTimesScalar";
        case OpVectorTimesMatrix: return "OpVectorTimesMatrix";
        case OpMatrixTimesVector: return "OpMatrixTimesVector";
        case OpMatrixTimesMatrix: return "OpMatrixTimesMatrix";
        case OpOuterProduct: return "OpOuterProduct";
        case OpDot: return "OpDot";
        case OpIAddCarry: return "OpIAddCarry";
        case OpISubBorrow: return "OpISubBorrow";
        case OpUMulExtended: return "OpUMulExtended";
        case OpSMulExtended: return "OpSMulExtended";
        case OpAny: return "OpAny";
        case OpAll: return "OpAll";
        case OpIsNan: return "OpIsNan";
        case OpIsInf: return "OpIsInf";
        case OpIsFinite: return "OpIsFinite";
        case OpIsNormal: return "OpIsNormal";
        case OpSignBitSet: return "OpSignBitSet";
        case OpLessOrGreater: return "OpLessOrGreater";
        case OpOrdered: return "OpOrdered";
        case OpUnordered: return "OpUnordered";
        case OpLogicalEqual: return "OpLogicalEqual";
        case OpLogicalNotEqual: return "OpLogicalNotEqual";
        case OpLogicalOr: return "OpLogicalOr";
        case OpLogicalAnd: return "OpLogicalAnd";
        case OpLogicalNot: return "OpLogicalNot";
        case OpSelect: return "OpSelect";
        case OpIEqual: return "OpIEqual";
        case OpINotEqual: return "OpINotEqual";
        case OpUGreaterThan: return "OpUGreaterThan";
        case OpSGreaterThan: return "OpSGreaterThan";
        case OpUGreaterThanEqual: return "OpUGreaterThanEqual";
        case OpSGreaterThanEqual: return "OpSGreaterThanEqual";
        case OpULessThan: return "OpULessThan";
        case OpSLessThan: return "OpSLessThan";
        case OpULessThanEqual: return "OpULessThanEqual";
        case OpSLessThanEqual: return "OpSLessThanEqual";
        case OpFOrdEqual: return "OpFOrdEqual";
        case OpFUnordEqual: return "OpFUnordEqual";
        case OpFOrdNotEqual: return "OpFOrdNotEqual";
        case OpFUnordNotEqual: return "OpFUnordNotEqual";
        case OpFOrdLessThan: return "OpFOrdLessThan";
        case OpFUnordLessThan: return "OpFUnordLessThan";
        case OpFOrdGreaterThan: return "OpFOrdGreaterThan";
        case OpFUnordGreaterThan: return "OpFUnordGreaterThan";
        case OpFOrdLessThanEqual: return "OpFOrdLessThanEqual";
        case OpFUnordLessThanEqual: return "OpFUnordLessThanEqual";
        case OpFOrdGreaterThanEqual: return "OpFOrdGreaterThanEqual";
        case OpFUnordGreaterThanEqual: return "OpFUnordGreaterThanEqual";
        case OpShiftRightLogical: return "OpShiftRightLogical";
        case OpShiftRightArithmetic: return "OpShiftRightArithmetic";
        case OpShiftLeftLogical: return "OpShiftLeftLogical";
        case OpBitwiseOr: return "OpBitwiseOr";
        case OpBitwiseXor: return "OpBitwiseXor";
        case OpBitwiseAnd: return "OpBitwiseAnd";
        case OpNot: return "OpNot";
        case OpBitFieldInsert: return "OpBitFieldInsert";
        case OpBitFieldSExtract: return "OpBitFieldSExtract";
        case OpBitFieldUExtract: return "OpBitFieldUExtract";
        case OpBitReverse: return "OpBitReverse";
        case OpBitCount: return "OpBitCount";
        case OpDPdx: return "OpDPdx";
        case OpDPdy: return "OpDPdy";
        case OpFwidth: return "OpFwidth";
        case OpDPdxFine: return "OpDPdxFine";
        case OpDPdyFine: return "OpDPdyFine";
        case OpFwidthFine: return "OpFwidthFine";
        case OpDPdxCoarse: return "OpDPdxCoarse";
        case OpDPdyCoarse: return "OpDPdyCoarse";
        case OpFwidthCoarse: return "OpFwidthCoarse";
        case OpEmitVertex: return "OpEmitVertex";
        case OpEndPrimitive: return "OpEndPrimitive";
        case OpEmitStreamVertex: return "OpEmitStreamVertex";
        case OpEndStreamPrimitive: return "OpEndStreamPrimitive";
        case OpControlBarrier: return "OpControlBarrier";
        case OpMemoryBarrier: return "OpMemoryBarrier";
        case OpAtomicLoad: return "OpAtomicLoad";
        case OpAtomicStore: return "OpAtomicStore";
        case OpAtomicExchange: return "OpAtomicExchange";
        case OpAtomicCompareExchange: return "OpAtomicCompareExchange";
        case OpAtomicCompareExchangeWeak: return "OpAtomicCompareExchangeWeak";
        case OpAtomicIIncrement: return "OpAtomicIIncrement";
        case OpAtomicIDecrement: return "OpAtomicIDecrement";
        case OpAtomicIAdd: return "OpAtomicIAdd";
        case OpAtomicISub: return "OpAtomicISub";
        case OpAtomicSMin: return "OpAtomicSMin";
        case OpAtomicUMin: return "OpAtomicUMin";
        case OpAtomicSMax: return "OpAtomicSMax";
        case OpAtomicUMax: return "OpAtomicUMax";
        case OpAtomicAnd: return "OpAtomicAnd";
        case OpAtomicOr: return "OpAtomicOr";
        case OpAtomicXor: return "OpAtomicXor";
        case OpPhi: return "OpPhi";
        case OpLoopMerge: return "OpLoopMerge";
        case OpSelectionMerge: return "OpSelectionMerge";
        case OpLabel: return "OpLabel";
        case OpBranch: return "OpBranch";
        case OpBranchConditional: return "OpBranchConditional";
        case OpSwitch: return "OpSwitch";
        case OpKill: return "OpKill";
        case OpReturn: return "OpReturn";
        case OpReturnValue: return "OpReturnValue";
        case OpUnreachable: return "OpUnreachable";
        case OpLifetimeStart: return "OpLifetimeStart";
        case OpLifetimeStop: return "OpLifetimeStop";
        case OpGroupAsyncCopy: return "OpGroupAsyncCopy";
        case OpGroupWaitEvents: return "OpGroupWaitEvents";
        case OpGroupAll: return "OpGroupAll";
        case OpGroupAny: return "OpGroupAny";
        case OpGroupBroadcast: return "OpGroupBroadcast";
        case OpGroupIAdd: return "OpGroupIAdd";
        case OpGroupFAdd: return "OpGroupFAdd";
        case OpGroupFMin: return "OpGroupFMin";
        case OpGroupUMin: return "OpGroupUMin";
        case OpGroupSMin: return "OpGroupSMin";
        case OpGroupFMax: return "OpGroupFMax";
        case OpGroupUMax: return "OpGroupUMax";
        case OpGroupSMax: return "OpGroupSMax";
        case OpReadPipe: return "OpReadPipe";
        case OpWritePipe: return "OpWritePipe";
        case OpReservedReadPipe: return "OpReservedReadPipe";
        case OpReservedWritePipe: return "OpReservedWritePipe";
        case OpReserveReadPipePackets: return "OpReserveReadPipePackets";
        case OpReserveWritePipePackets: return "OpReserveWritePipePackets";
        case OpCommitReadPipe: return "OpCommitReadPipe";
        case OpCommitWritePipe: return "OpCommitWritePipe";
        case OpIsValidReserveId: return "OpIsValidReserveId";
        case OpGetNumPipePackets: return "OpGetNumPipePackets";
        case OpGetMaxPipePackets: return "OpGetMaxPipePackets";
        case OpGroupReserveReadPipePackets: return "OpGroupReserveReadPipePackets";
        case OpGroupReserveWritePipePackets: return "OpGroupReserveWritePipePackets";
        case OpGroupCommitReadPipe: return "OpGroupCommitReadPipe";
        case OpGroupCommitWritePipe: return "OpGroupCommitWritePipe";
        case OpEnqueueMarker: return "OpEnqueueMarker";
        case OpEnqueueKernel: return "OpEnqueueKernel";
        case OpGetKernelNDrangeSubGroupCount: return "OpGetKernelNDrangeSubGroupCount";
        case OpGetKernelNDrangeMaxSubGroupSize: return "OpGetKernelNDrangeMaxSubGroupSize";
        case OpGetKernelWorkGroupSize: return "OpGetKernelWorkGroupSize";
        case OpGetKernelPreferredWorkGroupSizeMultiple: return "OpGetKernelPreferredWorkGroupSizeMultiple";
        case OpRetainEvent: return "OpRetainEvent";
        case OpReleaseEvent: return "OpReleaseEvent";
        case OpCreateUserEvent: return "OpCreateUserEvent";
        case OpIsValidEvent: return "OpIsValidEvent";
        case OpSetUserEventStatus: return "OpSetUserEventStatus";
        case OpCaptureEventProfilingInfo: return "OpCaptureEventProfilingInfo";
        case OpGetDefaultQueue: return "OpGetDefaultQueue";
        case OpBuildNDRange: return "OpBuildNDRange";
        case OpImageSparseSampleImplicitLod: return "OpImageSparseSampleImplicitLod";
        case OpImageSparseSampleExplicitLod: return "OpImageSparseSampleExplicitLod";
        case OpImageSparseSampleDrefImplicitLod: return "OpImageSparseSampleDrefImplicitLod";
        case OpImageSparseSampleDrefExplicitLod: return "OpImageSparseSampleDrefExplicitLod";
        case OpImageSparseSampleProjImplicitLod: return "OpImageSparseSampleProjImplicitLod";
        case OpImageSparseSampleProjExplicitLod: return "OpImageSparseSampleProjExplicitLod";
        case OpImageSparseSampleProjDrefImplicitLod: return "OpImageSparseSampleProjDrefImplicitLod";
        case OpImageSparseSampleProjDrefExplicitLod: return "OpImageSparseSampleProjDrefExplicitLod";
        case OpImageSparseFetch: return "OpImageSparseFetch";
        case OpImageSparseGather: return "OpImageSparseGather";
        case OpImageSparseDrefGather: return "OpImageSparseDrefGather";
        case OpImageSparseTexelsResident: return "OpImageSparseTexelsResident";
        case OpNoLine: return "OpNoLine";
        case OpAtomicFlagTestAndSet: return "OpAtomicFlagTestAndSet";
        case OpAtomicFlagClear: return "OpAtomicFlagClear";
        case OpImageSparseRead: return "OpImageSparseRead";
        case OpSizeOf: return "OpSizeOf";
        case OpTypePipeStorage: return "OpTypePipeStorage";
        case OpConstantPipeStorage: return "OpConstantPipeStorage";
        case OpCreatePipeFromPipeStorage: return "OpCreatePipeFromPipeStorage";
        case OpGetKernelLocalSizeForSubgroupCount: return "OpGetKernelLocalSizeForSubgroupCount";
        case OpGetKernelMaxNumSubgroups: return "OpGetKernelMaxNumSubgroups";
        case OpTypeNamedBarrier: return "OpTypeNamedBarrier";
        case OpNamedBarrierInitialize: return "OpNamedBarrierInitialize";
        case OpMemoryNamedBarrier: return "OpMemoryNamedBarrier";
        case OpModuleProcessed: return "OpModuleProcessed";
        case OpExecutionModeId: return "OpExecutionModeId";
        case OpDecorateId: return "OpDecorateId";
        case OpSubgroupBallotKHR: return "OpSubgroupBallotKHR";
        case OpSubgroupFirstInvocationKHR: return "OpSubgroupFirstInvocationKHR";
        case OpSubgroupAllKHR: return "OpSubgroupAllKHR";
        case OpSubgroupAnyKHR: return "OpSubgroupAnyKHR";
        case OpSubgroupAllEqualKHR: return "OpSubgroupAllEqualKHR";
        case OpSubgroupReadInvocationKHR: return "OpSubgroupReadInvocationKHR";
        default: return "";
    }
}
#endif

}  // end namespace spv

#endif  // #ifndef spirv_strings_HPP

