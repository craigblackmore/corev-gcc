/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_dotusp_b(a, b);
}

/* { dg-final { scan-assembler-times "cv\\.dotusp\\.b" 1 } } */
