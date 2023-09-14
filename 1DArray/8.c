#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n)
{
    for (short i = 0; i < n; i++)
    {
        printf("Element at %hd index is : %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[10], num;
    printf("Ten random numbers in [1,100]\n");

    for (short i = 0; i < 10; i++)
    {
        num = rand() % 50 + 50;
        arr[i] = num;
    }
    printArray(arr, 10);
    return 0;
}