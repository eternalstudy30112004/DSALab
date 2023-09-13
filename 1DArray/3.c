#include <stdio.h>
int findElement(float arr[],float elm, short n){
	short index = -1;
	for(short i = 0; i < n;i++){
		if (arr[i] == elm){
			index = i;
			break;
		}
	}
	return index;
}
 
void printArray(float arr[], short n){
	for(short i = 0; i < n;i++){
		printf("Element at %hd index is : %f\n", i, arr[i]);
	}
}
void displayIndex(short index){
	if (index == -1)
		printf("\nNot Found");
	else
		printf("\nElement found at Index: %hd", index);	
}
int main(){
	float element;
	float arr[50];
	short n = sizeof(arr)/sizeof(arr[0]);
	for(short i = 0;i < n;i++){
		arr[i] = (float)10 * (i+1)/50;
	}
	scanf("%f", &element);
	printArray(arr, n);
	
	short index = findElement(arr,element, n);
	displayIndex(index);
	
	
	return 0;
}
