/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b, int c)
{
	return __builtin_riscv_cv_simd_cplxmul_r(a, b, c, 2);
}

/* { dg-final { scan-assembler-times "cv\\.cplxmul\\.r\\.div4" 1 } } */
