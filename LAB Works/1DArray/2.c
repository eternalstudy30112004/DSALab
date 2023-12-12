#include <stdio.h>
void displayReverse(int arr[], int n){
	for(int i = n - 1; i >= 0; i--){
		printf("%d\n	", arr[i]);
	}
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	displayReverse(arr, sizeof(arr)/sizeof(arr[0]));
	
	
	return 0;
}
