#include <stdio.h>
int evenSum(int k)
{
    int sum = 0;
    int pos = 0;
    while (k > 0)
    {
        if (pos++ % 2 == 0)
            sum += k % 10;
        k /= 10;
    }
    return sum;
}
int main()
{
    int k;
    printf("Enter a number to get sum of digits at even locations : ");
    scanf("%d", &k);
    printf("The sum of digits at even position is : %d", evenSum(k));
    return 0;
}