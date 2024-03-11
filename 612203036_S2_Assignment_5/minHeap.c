#include <stdio.h>
#include "minHeap.h"
void swap(int* a, int* b);

void initMinHeap(MinHeap* h){
    for(int i = 0; i < MAX_SIZE; i++){
        h->arr[i] = -1;
    }
    h->size = 0;
    printf("Minimum heap initialized successfully.\n");
}

void insertMinHeap(MinHeap* h, int data){
    if(h->size == MAX_SIZE) {
        printf("Heap overflow! Cannot insert element.\n");
        return;
    }

    int index = h->size++;
    h->arr[index] = data;
    int parent = (index - 1) / 2;
    while(parent >= 0 && h->arr[parent] > h->arr[index]){
        swap(&(h->arr[parent]), &(h->arr[index]));
        index = parent;
        parent = (index - 1) / 2;
    }
    printf("Element %d inserted into the minimum heap.\n", data);
}

void deleteMinHeap(MinHeap* h){
    if(h->size == 0){
        printf("Heap underflow! Cannot delete element.\n");
        return;
    }
    int temp = h->size - 1;
    swap(&(h->arr[0]), &(h->arr[temp]));
    h->size--;
    minHeapify(h, 0);
    printf("Minimum element deleted from the heap.\n");
}

void printMinHeap(MinHeap h){
    printf("Elements of the minimum heap[levelWise Traversal]: ");
    for(int i = 0; i < h.size; i++){
        printf("%d ", h.arr[i]);
    }
    printf("\n");
}

void minHeapSort(MinHeap* h){
    int temp = h->size;
    while(h->size > 1){
        int high = h->size - 1;
        int low = 0;
        swap(&(h->arr[low]), &(h->arr[high]));
        h->size--;
        minHeapify(h, low);
    }
    h->size = temp;
    printf("Heap sorted successfully[Descending as its a minHeap].\n");
}

void minHeapify(MinHeap* h, int i){
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < h->size && h->arr[smallest] > h->arr[left]){
        smallest = left;
    }
    else if(right < h->size && h->arr[smallest] > h->arr[right]){
        smallest = right;
    }
    
    if(smallest != i){
        swap(&(h->arr[smallest]), &(h->arr[i]));
        minHeapify(h, smallest);
    }
}

void processMinHeap(MinHeap *heap) {
    
    initMinHeap(heap);

    int num;
    printf("Enter number of integers you want to insert: ");
    scanf("%d", &num);

    printf("Enter %d integers:\n", num);
    for (int i = 0; i < num; i++) {
        int data;
        printf("Enter integer number %d:", i+1);
        scanf("%d", &data);
        printf("\n");
        insertMinHeap(heap, data);
    }

    printf("Heap before sorting:\n");
    printMinHeap(*heap);
    printf("\n");

    minHeapSort(heap);

    printf("Heap after sorting:\n");
    printMinHeap(*heap);
    printf("\n");

    return;
}
