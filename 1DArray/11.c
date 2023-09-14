#include <stdio.h>
void printArray(int arr[], int n)
{
    for (short i = 0; i < n; i++)
    {
        printf("Element at %hd index is : %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {10, 45, 3216, 88};
    short n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array : \n");
    printArray(arr, n);

    for (short i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Array after reversing : \n");
    printArray(arr, n);

    return 0;
}