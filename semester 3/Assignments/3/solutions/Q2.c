#include <stdio.h>
void printArray(int arr[], int n)
{
    for (short i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    short n;
    int arr[n];
    printf("Enter number of elements in array : ");
    scanf("%hd", &n);
    for (short i = 0; i < n; i++)
    {
        printf("Enter element number %d: ", i);
        scanf("%d", &arr[i]);
    }
    int temp;
    printArray(arr, n);
    for (short i = 0; i <= n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("The reversed array is \n");
    printArray(arr, n);
    return 0;
}