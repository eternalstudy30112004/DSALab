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
    int arr[] = {1, 2, 3, 4, 3, 6, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int posToDelete;
    printf("Original Array\n");
    printArray(arr, n);
    printf("Enter index to delete element at : ");
    scanf("%d", &posToDelete);
    int temp;
    for (int k = posToDelete; k < n - 1; k++)
    {
        temp = arr[k];
        arr[k] = arr[k + 1];
        arr[k + 1] = temp;
    }
    n--;
    printf("Array after deletion and shifting [deleted element at index %d]\n", posToDelete);
    printArray(arr, n);

    return 0;
}