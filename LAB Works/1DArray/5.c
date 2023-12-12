#include <stdio.h>

 
int main(){
	int a[] = {60,700,80,900,10};
	short n = sizeof(a)/sizeof(a[0]);
	printf("Number of elements in integer array is %hd\n", n);
	
	return 0;
}
