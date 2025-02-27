/* { dg-do compile } */
/* { dg-options "-march=rv32e_zcmp -mabi=ilp32e -O2" } */

void foo2 (int a, int b, int c, int d);

int foo1(int a, int b, int c, int d)
{ 
    if (b < a)
    {
        foo2(a, b, c, d);
        foo1(a, b, c, d);
    }
    return 0;
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0-s1},-32" } } */
/* { dg-final { scan-assembler "cm.popretz\t{ra,s0-s1},32" } } */
