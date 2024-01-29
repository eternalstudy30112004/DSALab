#include <stdio.h>
unsigned long int factorial(int n)
{
    return ((n == 0) ? 1 : n * factorial(n - 1));
}
int main()
{
    for (int i = 1; i <= 5; i++)
        printf("The factorial of %d is %ld\n", i, factorial(i));
    return 0;
}