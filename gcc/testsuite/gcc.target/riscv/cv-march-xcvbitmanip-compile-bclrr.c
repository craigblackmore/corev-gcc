/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip1p0 -mabi=ilp32" } */

#include <stdint.h>
#include <stdio.h>

extern uint32_t res1;

uint32_t
foo (uint32_t a, uint16_t b)
{
  res1 = __builtin_riscv_cv_bitmanip_bclr (a, b);

  return res1;
}

/* { dg-final { scan-assembler-times "cv\.bclrr\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
