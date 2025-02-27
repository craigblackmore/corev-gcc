/* { dg-do compile } */
/* { dg-require-effective-target cv_mac } */
/* { dg-options "-march=rv32i_xcvmac1p0 -mabi=ilp32" } */

int foo(int a, int b, int c)
{
  return __builtin_riscv_cv_mac_mac (a, b, c);
}

/* { dg-final { scan-assembler-times "cv\.mac\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 1 } } */
