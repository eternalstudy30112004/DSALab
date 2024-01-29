#include <stdio.h>

int main()
{
    unsigned int n, sum = 0;
    printf("Enter n to calculate sum upto n natural numbers : ");
    scanf("%d", &n);

    printf("The sum of first %d Natural numbers is : ", n);
    while (n > 0)
    {
        sum += n--;
    }
    printf("%d\n", sum);
    return 0;
}