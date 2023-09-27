#include <stdio.h>
int getOnesBinary(int decimal)
{
    int digit = 0, counter = 0;
    while (decimal > 0)
    {
        digit = decimal % 2;
        if (digit == 1)
            counter += digit;
        decimal /= 2;
    }
    return counter;
}
int main()
{
    int decimal;
    printf("Enter a number to get number of ones in its binary format : ");
    scanf("%d", &decimal);
    printf("The number of ones are : %d", getOnesBinary(decimal));
    return 0;
}