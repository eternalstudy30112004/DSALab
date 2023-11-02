#include <stdio.h>

int main()
{
    int a, b = {2}, *p, *q;
    p = &a;
    p = p + 1;
    q = &b;
    q = q - b;
    a = &b - q;
    printf("Value of a: %x\n", &a); // ? mem_location(b);
    printf("Value of b: %x\n", &b); // ? mem_location(a) - 1;
    printf("Value of p: %x\n", p);  // ? mem_location(b);
    printf("Value of q: %x\n", q);  // ? mem_location(a) - 1;
    printf("Value of a: %d\n", a);  // 2
    return 0;
}
