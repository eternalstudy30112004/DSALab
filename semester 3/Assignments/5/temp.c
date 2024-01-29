#include <stdio.h>

typedef struct entry
{
    double x;
    struct entry *e;
} entry;
typedef entry *seq;
int i;
int main()
{

gundi:
{
    printf("Hello");
    if (++i == 5)
        goto ex;
    goto gundi;
}
ex:
{
    printf("saf");
}
    printf("Value of sizeof(int *) %x: \n", sizeof(int ***));
}