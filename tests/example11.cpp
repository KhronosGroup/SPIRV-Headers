// Copyright (c) 2016-2024 The Khronos Group Inc.
// SPDX-License-Identifier: MIT
//
// MODIFICATIONS TO THIS FILE MAY MEAN IT NO LONGER ACCURATELY REFLECTS
// KHRONOS STANDARDS. THE UNMODIFIED, NORMATIVE VERSIONS OF KHRONOS
// SPECIFICATIONS AND HEADER INFORMATION ARE LOCATED AT
//    https://www.khronos.org/registry/

#include <spirv/unified1/GLSL.std.450.h>
#include <spirv/unified1/OpenCL.std.h>
#include <stdio.h>

#include <spirv/unified1/spirv.hpp11>

namespace {

const GLSLstd450 kSin = GLSLstd450Sin;
const OpenCLLIB::Entrypoints kNative_cos = OpenCLLIB::Native_cos;
const spv::Op kNop = spv::Op::OpNop;

}  // anonymous namespace

#define CHECK(got, expect)                                  \
  {                                                         \
    if (static_cast<int>(got) != (expect)) {                \
      printf("error: for " #got ", got %d instead of %d\n", \
             static_cast<int>(got), expect);                \
      err_count++;                                          \
    }                                                       \
  }

int main() {
  int err_count = 0;
  CHECK(kNop, 0);
  CHECK(kNative_cos, 81);
  CHECK(kSin, 13);
  return err_count ? 1 : 0;
}
