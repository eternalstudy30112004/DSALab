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
    int arr[] = {5, 15, 17, 19, 3, 2, 5, 6, 13, 11};

    return 0;
}