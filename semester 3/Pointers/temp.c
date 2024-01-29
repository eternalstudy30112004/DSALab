#include <stdio.h>
#include <limits.h>
int g;
static int t = 20;
int f(int a, int b)
{
    int x, y;
    static int s = 10;
    x = a + b + 5 + g + s;
    return x;
}
int main()
{
    int i, j, k;
    unsigned long long int *p;
    g = 10;
    i = 20;
    j = 30;
    p = malloc(LLONG_MAX - 2);
    k = f(i, j);
    printf("%d", k);
}