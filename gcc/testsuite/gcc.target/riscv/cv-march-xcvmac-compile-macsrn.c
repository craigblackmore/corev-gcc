/* { dg-do compile } */
/* { dg-require-effective-target cv_mac } */
/* { dg-options "-march=rv32i_xcvmac1p0 -mabi=ilp32" } */

extern int d;
extern int e;
extern int f;

void foo(int a, int b, int c)
{
  d = __builtin_riscv_cv_mac_macsRN (a, b, c, 0);
  e = __builtin_riscv_cv_mac_macsRN (a, b, c, 7);
  f = __builtin_riscv_cv_mac_macsRN (a, b, c, 31);
}

/* { dg-final { scan-assembler-times "cv\.macsRN\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),0" 1 } } */
/* { dg-final { scan-assembler-times "cv\.macsRN\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),7" 1 } } */
/* { dg-final { scan-assembler-times "cv\.macsRN\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),31" 1 } } */
