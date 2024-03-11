#include <stdio.h>
#include "minHeap.h"
#include "maxHeap.h"
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int choice;
    printf("Choose the type of heap:\n");
    printf("1. Minimum Heap\n");
    printf("2. Maximum Heap\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        MinHeap minHeap;
        processMinHeap(&minHeap);
    }
    else if(choice == 2) {
        MaxHeap maxHeap;
        processMaxHeap(&maxHeap);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
