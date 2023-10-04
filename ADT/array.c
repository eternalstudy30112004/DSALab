#include "array.h"
#include <stdlib.h>
#include <limits.h>
void init(array *arr, int size){
    arr->address = (int *)malloc(size * sizeof(int));
    arr->size = size;
    arr->length = 0;
}
void append(array *arr, int element){
    if(arr->length < arr->size)
        arr->address[arr->length++] = element;
    
    return;
}
void insertAtIndex(array *arr, int pos, int element){
    if(arr-> length >= arr->size)
        return;
    int temp;
    for (int i = pos; i < arr->length; i++)
    {
        temp = arr->address[i];
        arr->address[i] = arr->address[arr->length];
        arr->address[arr->length]= temp;

    }
    arr->address[pos] = element;

    ++arr->length;
    return ;
}

void removeAtIndex(array *arr, int pos){
    for (int i = pos; i < arr->length - 1 ; i++)
    {
        arr->address[i] = arr->address[i+1];
    }
    --arr->length;
    return ;
}

void display(array arr){
    printf("Array[%d]: Size: %d\n",arr.length, arr.size);
    for (int i = 0; i < arr.length; i++)
    {
        printf("Element at index %d: %d\n",i, arr.address[i]);
    }
    
}

int max(array *arr){
    int max = INT_MIN;
    for (int i = 0; i < arr->length; i++)
    {
        if(max < arr->address[i])
            max = arr->address[i];
    }
    return max;
}

int min(array *arr){
    int min = INT_MAX;
    for (int i = 0; i < arr->length; i++)
    {
        if(min > arr->address[i])
            min = arr->address[i];
    }
    return min;
}
 void reverse(array *arr){
    int temp;
    for (int i = 0; i < arr->length/2; i++)
    {
        temp = arr->address[i];
        arr->address[i] = arr->address[arr->length - 1];
        arr->address[arr->length - 1] = temp;

    }
    
 }