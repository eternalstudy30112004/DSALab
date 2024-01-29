#include <stdio.h>

short isSameInReverse(int arr[], short n)
{
    short isSame = 1;
    for (short i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isSame = 0;
            break;
        }
    }
    return isSame;
}
int main()
{
    short n;
    printf("Enter number of elemets in array : ");
    scanf("%hd", &n);
    int arr[n];
    for (short i = 0; i < n; i++)
    {
        printf("Enter element number %hd : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("%hd", isSameInReverse(arr, n));
    return 0;
}