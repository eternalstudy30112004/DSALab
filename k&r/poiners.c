#include <stdio.h>

int main()
{
    int *k, p = 4;
    k = &p;
    int y = *k;

    printf("%d", y);
    p = 9;
    printf("%d", y);
    return 0;
}