#include <stdio.h>
#include <stdlib.h>
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
    int c[100], d[100];
    for (short i = 0; i < 100; i++)
    {
        c[i] = rand() % 1000 + 1;
    }
    printf("The randomly generated array is as follows : \n");
    printArray(c, 100);
    int pos = 0;
    for (short i = 0; i < 100; i++)
    {
        if (c[i] % 8 == 0 || c[i] % 15 == 0)
            d[pos++] = c[i];
    }

    printf("The array of elements divisible by 8 or 15 are : \n");
    printArray(d, pos);

    return 0;
}