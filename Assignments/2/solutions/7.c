#include <stdio.h>
int gcd(int m, int n)
{
    int min = m > n ? n : m;
    int r = 1;
    for (int i = 2; i <= min; i++)
    {
        if (m % i == 0 && n % i == 0)
            r = i;
    }
    return r;
}
int lcm(int m, int n)
{
    int min, max;
    if (m > n)
    {
        max = m;
        min = n;
    }
    else
    {
        max = n;
        min = m;
    }
    int multiple = max;
    int r = 1;
    while (r == 1)
    {
        if (multiple % min == 0)
            r = multiple;
        multiple += max;
    }
    return r;
}
int main()
{
    int m = 26;
    int n = 65;
    printf("gcd %d\n", gcd(m, n));
    printf("lcm %d\n", lcm(m, n));

    return 0;
}