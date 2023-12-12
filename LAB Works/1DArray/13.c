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
    int a[] = {45, 50, 70, 85, 90};
    int b[] = {30, 40, 60, 75, 80};
    int c[10];
    int m = 0, n = 0;
    for (short i = 0; i < 10; i++)
    {
        if (m == 5)
            c[m + n] = b[n++];

        else if (n == 5)
            c[m + n] = a[m++];

        else if (a[m] < b[n])
            c[m + n] = a[m++];

        else
            c[m + n] = b[n++];
    }
    printf("The merged and shorted array is : \n");
    printArray(c, 10);

    return 0;
}