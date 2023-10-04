#include <stdio.h>
#include <stdlib.h>

typedef struct entry
{
    double x;
    struct entry *e;
} entry;
entry e, *ep, *eq;

entry *f(entry **epp)
{
    entry *ep = *epp;
    *epp = (entry *)malloc(sizeof(entry));

    (ep->e) = NULL;
    (ep->x) = 1.2;
    return *epp;
}
int main()
{
    ep = &e;
    e.e = (entry *)malloc(sizeof(entry));
    printf("E.e: %p\n", e.e);
    entry *temp = e.e;
    eq = f(&(e.e));
    printf("%f", temp->x);
    printf("E: %p\n", &e);
    printf("E.e: %p\n", e.e);
    printf("Ep: %p\n", ep);
    printf("Eq: %p\n", eq);
    e.x = eq->x;
    return 0;
}