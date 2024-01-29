#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = rand();
    printf("size: %d\n", n);
    int *p = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    return 0;
}