/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd1p0 -mabi=ilp32" } */

int foo1 (int a)
{
	return __builtin_riscv_cv_simd_cplxconj(a);
}

/* { dg-final { scan-assembler-times "cv\\.cplxconj" 1 } } */
