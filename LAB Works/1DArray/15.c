#include <stdio.h>
int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    for (short i = 0; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    int second = arr[0];
    for (short i = 0; i < n; i++)
    {
        if (second < arr[i] && arr[i] != largest)
            second = arr[i];
    }
    return second;
}
int main()
{
    short n;
    printf("Enter length of array : ");
    scanf("%hd", &n);
    int arr[n];
    for (short i = 0; i < n; i++)
    {
        printf("Enter element number %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Second largest element in the array is %d", secondLargest(arr, n));

    return 0;
}