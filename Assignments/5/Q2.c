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
    printf("%d\n", *ep);
    *epp = (entry *)malloc(sizeof(entry));
    printf("%d", *epp);
    (ep->e) = NULL;
    (ep->x) = 1.2;
    return *epp;
}
int main()
{
    ep = &e;
    e.e = (entry *)malloc(sizeof(entry));
    printf("%d\n", e.e);
    entry *temp = e.e;
    eq = f(&(e.e));

    e.x = eq->x;
    return 0;
}