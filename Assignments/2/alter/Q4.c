#include <stdio.h>

int main()
{
    int a, b = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &a);

    while (a > 0)
    {
        if (a % 2 == 1)
        {
            b++;
        }
        a /= 2;
    }

    printf("Number of 1's in binary: %d\n", b);

    return 0;
}
