#include <stdio.h>
void displayStat(int arr[], short n)
{
    int positive = 0, negative = 0, zeroes = 0, odd = 0, even = 0;
    for (short i = 0; i < n; i++)
    {
        int elm = arr[i];
        if (elm > 0)
            positive++;
        else if (elm < 0)
            negative++;
        else
            zeroes++;
        if (elm % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Number of positive numbers %d\n", positive);
    printf("Number of negative numbers %d\n", negative);
    printf("Number of odd numbers %d\n", odd);
    printf("Number of even numbers %d\n", even);
    printf("Number of zeroes %d\n", zeroes);
}
int main()
{
    int n = 20;
    printf("Enter 20 elements in array\n");

    int arr[n];
    for (short i = 0; i < n; i++)
    {
        printf("Enter element number %hd : ", i + 1);
        scanf("%d", &arr[i]);
    }
    displayStat(arr, n);
    return 0;
}