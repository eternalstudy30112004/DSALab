#include <stdio.h>
double largestTwoAverage(int arr[], short n)
{
    int largest = arr[0];
    for (short i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    int second = arr[0];
    for (short i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] != largest)
            second = arr[i];
    }

    return (double)(largest + second) / 2;
}
int main()
{
    short n;
    int arr[n];
    printf("Enter number of elements in array to calculate average of two largest numbers: ");
    scanf("%hd", &n);
    for (short i = 0; i < n; i++)
    {
        printf("Enter element number %d: ", i);
        scanf("%d", &arr[i]);
    }
    double avg = largestTwoAverage(arr, n);
    printf("The average of two largest number is : %f", avg);
    return 0;
}