#include <stdio.h>
int sumOfSquares(int arr[], int n){
	int sum;
	for(int i = 0; i < n; i++){
		sum += arr[i] * arr[i];
	}
	return sum;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int squaredSum = sumOfSquares(arr, sizeof(arr)/sizeof(arr[0]));
	printf("Sum of squares of elements of array is %d\n", squaredSum);
	
	return 0;
}
