#include <stdio.h>
int isPrime(int k)
{
    int r = 1;
    if (k == 1)
        r = 0;
    for (int i = 2; i < k; i++)
    {
        if (k % i == 0)
            r = 0;
    }

    return r;
}
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}