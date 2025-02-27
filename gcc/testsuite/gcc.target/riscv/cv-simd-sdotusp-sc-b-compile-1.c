/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b, int c)
{
	return __builtin_riscv_cv_simd_sdotusp_sc_b(a, b, c);
}

int foo2 (int a, int b)
{
	return __builtin_riscv_cv_simd_sdotusp_sc_b(a, -32, b);
}

int foo3 (int a, int b)
{
	return __builtin_riscv_cv_simd_sdotusp_sc_b(a, 0, b);
}

int foo4 (int a, int b)
{
	return __builtin_riscv_cv_simd_sdotusp_sc_b(a, 31, b);
}

/* { dg-final { scan-assembler-times "cv\\.sdotusp\\.sc\\.b" 1 } } */
/* { dg-final { scan-assembler-times "cv\\.sdotusp\\.sci\\.b" 3 } } */
