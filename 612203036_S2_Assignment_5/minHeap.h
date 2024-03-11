#ifndef MIN_HEAP_H
#define MIN_HEAP_H

#define MAX_SIZE 100

typedef struct MinHeap {
    int arr[MAX_SIZE];
    int size;
} MinHeap;


void initMinHeap(MinHeap* h);

void insertMinHeap(MinHeap* h, int data);

void deleteMinHeap(MinHeap* h);

void printMinHeap(MinHeap h);

void minHeapify(MinHeap* h, int i);

void minHeapSort(MinHeap* h);
void processMinHeap(MinHeap* h);

#endif 
