
#include <stdio.h>
unsigned long int factorial(int k)
{
    return (k == 0) ? 1 : k * factorial(k - 1);
}
unsigned long int ncr(int n, int r)
{
    if (n == r)
        return 1;
    else if (r == 1)
        return n;
    return factorial(n) / (factorial(n - r) * factorial(r));
}
void printSpaces(short space)
{
    for (short i = 0; i < space; i++)
    {
        printf(" ");
    }
}
void pascalPattern(short n)
{
    short total_spaces = (2 * n + 1) * 2;
    for (short i = 0; i < n; i++)
    {
        printSpaces(total_spaces / 2 - 2 * (i));
        printSpaces(i);
        for (short j = 0; j <= i; j++)
        {
            printf("%ld ", ncr(i, j));
        }
        printSpaces(total_spaces / 2);
        printf("\n");
    }
}
int main()
{
    short n;
    scanf("%hd", &n);
    pascalPattern(n);
    return 0;
}