// Auto-generated file. Do not edit!
//   Template: src/f16-vsqrt/fp16arith-sqrt.c.in
//   Generator: tools/xngen
//
// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>
#include <math.h>

#include <arm_fp16.h>

#include <xnnpack/common.h>
#include <xnnpack/vunary.h>


void xnn_f16_vsqrt_ukernel__fp16arith_sqrt_x1(
    size_t n,
    const void* input,
    void* output,
    const union xnn_f16_sqrt_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(n != 0);
  assert(n % sizeof(float16_t) == 0);
  assert(input != NULL);
  assert(output != NULL);

  const float16_t* i = (const float16_t*) input;
  float16_t* o = (float16_t*) output;
  do {
    float16_t vacc = *i++;
    vacc = vsqrth_f16(vacc);
    *o++ = vacc;
    n -= sizeof(float16_t);
  } while (n != 0);
}
