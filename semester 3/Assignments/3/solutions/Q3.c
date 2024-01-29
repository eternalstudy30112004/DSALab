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
    int arr[10] = {1, 2, 4, 5, 6, 7, 8, 9};
    short n = sizeof(arr) / sizeof(arr[0]);
    short positionToInsert = 2;
    int elementToInsert = 3;
    int temp;
    printf("Array before insertion : \n");
    printArray(arr, n);

    for (int i = positionToInsert; i < n - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = temp;
    }

    arr[positionToInsert] = elementToInsert;
    printf("Array after insertion : \n");
    printArray(arr, n);
    return 0;
}