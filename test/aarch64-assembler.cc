// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <xnnpack/aarch64-assembler.h>
#include <xnnpack/allocator.h>
#include <xnnpack/common.h>

#include <gtest/gtest.h>

namespace xnnpack {
namespace aarch64 {

TEST(AArch64Assembler, Initialization) {
  xnn_code_buffer b;
  xnn_allocate_code_memory(&b, XNN_DEFAULT_CODE_BUFFER_SIZE);
  Assembler a(&b);
  ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&b));
}

}  // namespace aarch64
}  // namespace xnnpack