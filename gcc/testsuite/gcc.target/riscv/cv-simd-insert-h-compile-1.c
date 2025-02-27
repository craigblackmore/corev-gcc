/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_insert_h(a, b, -32);
}

int foo2 (int a, int b)
{
	return __builtin_riscv_cv_simd_insert_h(a, b, 0);
}

int foo3 (int a, int b)
{
	return __builtin_riscv_cv_simd_insert_h(a, b, 31);
}

/* { dg-final { scan-assembler-times "cv\\.insert\\.h" 3 } } */
