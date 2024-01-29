#include <stdio.h>
void printArray(int arr[], int n)
{
	for (short i = 0; i < n; i++)
	{
		printf("Element at %hd index is : %d\n", i, arr[i]);
	}
}

void shift(int arr[], int shiftBy, int n)
{
	int temp;
	for (short j = 0; j < (shiftBy > 0 ? shiftBy : -shiftBy); j++)

	{
		for (int i = 0; i < n - 1; i++)
		{
			temp = arr[i];
			if (shiftBy > 0)
			{
				arr[i] = arr[n - 1];
				arr[n - 1] = temp;
			}
			else
			{
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	printf("\nThe shifted array is as follows : ");
	printArray(arr, n);
}

int main()
{

	int n, shiftBy;
	printf("Enter number of elements in array : ");
	scanf("%d", &n);
	int arr[n];
	for (short i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("The array you entered is as follows : ");
	printArray(arr, n);

	printf("Enter number of location to shift all elements of an array by n locations [positive to shift to right and negative to do a left shift] : ");
	scanf("%d", &shiftBy);

	shift(arr, shiftBy, n);

	return 0;
}
