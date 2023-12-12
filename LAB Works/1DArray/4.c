#include <stdio.h>
void pattern(int arr[],short n){
	short index = -1;
	for(short i = 0; i < n;i++){
		for(short j = 0; j < i+1;j++){
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}
 
int main(){
	int a[] = {60,700,80,900,10};
	short n = sizeof(a)/sizeof(a[0]);
	pattern(a, n);
	
	return 0;
}
