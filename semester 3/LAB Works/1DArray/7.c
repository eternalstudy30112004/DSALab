#include <stdio.h>
void printArray(int arr[], int n)
{
    for (short i = 0; i < n; i++)
    {
        printf("Element at %hd index is : %d\n", i, arr[i]);
    }
}

void deleteDuplicates(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        int elementToFind = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int elm = arr[j];
            if (elm == elementToFind)
            {
                for (int k = j; k < n - 1; k++)
                {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
                n--;
            }
        }
    }
    printf("After removing the duplicates and shifting the array : ");
    printArray(arr, n);
}
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 3, 6, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array %d\n", n);
    printArray(arr, n);

    deleteDuplicates(arr, n);
    return 0;
}