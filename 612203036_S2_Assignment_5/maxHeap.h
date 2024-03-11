#ifndef MAX_HEAP_H
#define MAX_HEAP_H

#define MAX_SIZE 100

typedef struct MaxHeap {
    int arr[MAX_SIZE];
    int size;
} MaxHeap;


void initMaxHeap(MaxHeap* h);

void insertMaxHeap(MaxHeap* h, int data);

void deleteMaxHeap(MaxHeap* h);

void printMaxHeap(MaxHeap h);

void maxHeapify(MaxHeap* h, int i);

void maxHeapSort(MaxHeap* h);

void processMaxHeap(MaxHeap* h);

#endif 
