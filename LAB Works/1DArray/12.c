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
    short k;
    int arr[] = {5, 15, 17, 19, 3, 2, 5, 6, 13, 11};
    int big, small;
    short n = sizeof(arr) / sizeof(arr[0]);

    printf("Array : \n");
    printArray(arr, n);
    printf("Enter a position to get greatest element and smallest element near to it : ");
    scanf("%d", &k);
    big = findGreatestNear(arr, n, k);
    small = findSmallestNear(arr, n, k);
    printf("Largest element ")

        return 0;
}