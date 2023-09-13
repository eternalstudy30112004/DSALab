#include <stdio.h>
void printArray(int arr[], short n){
	for(short i = 0; i < n;i++){
		printf("Element at %hd index is : %d\n", i, arr[i]);
	}
}
 
int main(){
	int k;
	scanf("%d", &k);
	int a[k];
	int k = 3;
	for(short i = 0; i < k; i++){
		scanf("%d", &a[i]);
	}
	for(short i = 0; i < k; i++){
		a[i + k] = a[i + k];
	}
	
	printf("Number of elements in integer array is %hd\n", n);
	
	return 0;
}
