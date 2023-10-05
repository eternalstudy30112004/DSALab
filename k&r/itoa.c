
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
char *it(int n)
{
    char sign;

    if (n < 0)
        sign = '-', n = -(n + 1);

    char *l = (char *)malloc(100);
    int i = 0;
    do
    {
        *(l + i++) = '0' + (n % 10);
    } while ((n /= 10) > 0);
    l[i++] = sign;

    for (int temp, j = 0; j < i / 2; j++)
    {
        temp = l[j];
        l[j] = l[i - 1];
        l[i - 1] = temp;
    }
    l[i] = '\0';

    // reverse(l);
    return l;
}
int main()
{
    printf("%s", it(INT_MIN));
    return 0;
}