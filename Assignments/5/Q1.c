#include <stdio.h>
#include <stdlib.h>
typedef struct entry
{
    double x;
    struct entry *e;
} entry;
entry *f(entry **epp)
{
    entry *ep = *epp;
    ep = (entry *)malloc(sizeof(entry));
    ep->e = NULL;
    ep->x = 1.2;
    return ep;
}
void print(char *mess, entry e)
{
    printf("%s\n", mess);
    printf("Double x: %f\n", e.x);
    printf("Entry* e: %p\n\n", e.e);
}
int main()
{
    entry e, *ep, *eq;
    ep = &e;
    print("e : ", e);
    print("ep*", *ep);
    e.e = (entry *)malloc(sizeof(entry));
    // e.x = 5;
    print("e : ", e);
    print("ep*", *ep);
    eq = f(&(e.e));
    printf("------");
    print("e : ", e);
    print("ep*", *ep);
    print("eq*", *eq);
    e.x = eq->x;
    print("e : ", e);
    print("ep*", *ep);
    print("eq*", *eq);
    printf("%p", *e.e);
}