#include <stdio.h>
#include <stdlib.h>
typedef struct test
{
    struct test **a;
} test;
test *f(test ***ppp)
{
    test *p, **pp;  
    pp = *ppp;
    p = *pp;
    *pp = (test *)malloc(2 * sizeof(test));
    printf("Value of m %u: \n", *(pp + 1));

    return pp[1];
}
int main()
{

    test *m;
    int i;
    printf("tst %d stpointer %d %d\n",sizeof(test),sizeof(test*),sizeof(test**));
    m = (test *)malloc(sizeof(test));
    printf("Address of m %u:%u \n", &m, m);
    m->a = (test **)malloc(sizeof(test *) * 3);
    printf("Address of m->a %u VAlue %u: \n", &m->a, m->a);
    for (i = 0; i < 2; i++)
    {
        m->a[i] = (test *)malloc(sizeof(test));
        printf("Address of m->a[i] %u Value at %u: \n", &m->a[i], m->a[i]);
    }
    m->a[2] = (test *)malloc(3 * sizeof(test));
    printf("Address of m->a[i] %u Value at %u: \n", &m->a[2], m->a[2]);
    m = f(&(m->a));
    printf("Value of m %u: \n", m);
}
