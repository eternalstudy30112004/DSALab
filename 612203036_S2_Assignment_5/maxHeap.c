#include <stdio.h>
#include "maxHeap.h"
void swap(int* a, int* b);
void initMaxHeap(MaxHeap* h){
    for(int i = 0; i < MAX_SIZE; i++){
        h->arr[i] = -1;
    }
    h->size = 0;
    printf("Max heap initialized successfully.\n");
}

void insertMaxHeap(MaxHeap* h, int data){
    if(h->size == MAX_SIZE) {
        printf("Heap overflow! Cannot insert element.\n");
        return;
    }

    int index = h->size++;
    h->arr[index] = data;
    int parent = ((index % 2) == 0) ? (index - 2) / 2 : (index - 1) / 2;
    while(parent >= 0 && h->arr[parent] < h->arr[index]){
        swap(&(h->arr[parent]), &(h->arr[index]));
        index = parent;
        parent = ((index % 2) == 0) ? (index - 2) / 2 : (index - 1) / 2;
    }
    printf("Element %d inserted into the max heap.\n", data);
}

void deleteMaxHeap(MaxHeap* h){
    if(h->size == 0){
        printf("Heap underflow! Cannot delete element.\n");
        return;
    }
    int temp = h->size - 1;
    swap(&(h->arr[0]), &(h->arr[temp]));
    h->size--;
    maxHeapify(h, 0);
    printf("Maximum element deleted from the heap.\n");
}

void printMaxHeap(MaxHeap h){
    printf("Elements of the max heap[levelWise Traversal]: ");
    for(int i = 0; i < h.size; i++){
        printf("%d ", h.arr[i]);
    }
    printf("\n");
}

void maxHeapSort(MaxHeap* h){
    int temp = h->size;
    while(h->size > 1){
        int high = h->size - 1;
        int low = 0;
        swap(&(h->arr[low]), &(h->arr[high]));
        h->size--;
        maxHeapify(h, low);
    }
    h->size = temp;
    printf("Heap sorted successfully.\n");
}

void maxHeapify(MaxHeap* h, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < h->size && h->arr[largest] < h->arr[left]){
        largest = left;
    }
    if(right < h->size && h->arr[largest] < h->arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(&(h->arr[largest]), &(h->arr[i]));
        maxHeapify(h, largest);
    }
}

void processMaxHeap(MaxHeap *heap) {
    
    initMaxHeap(heap);

    int num;
    printf("Enter number of integers you want to insert: ");
    scanf("%d", &num);

    printf("Enter %d integers:\n", num);
    for (int i = 0; i < num; i++) {
        int data;
        printf("Enter integer number %d:", i+1);
        scanf("%d", &data);
        printf("\n");
        insertMaxHeap(heap, data);
    }

    printf("Heap before sorting:\n");
    printMaxHeap(*heap);
    printf("\n");

    maxHeapSort(heap);

    printf("Heap after sorting:\n");
    printMaxHeap(*heap);
    printf("\n");

    return;
}
