#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

// int binarySearch(int arr[], int size, int element){
//     int low, mid, high;
//     low = 0;
//     high = size-1;
//     // Keep searching until low <= high
//     while(low<=high){
//         mid = (low + high)/2;
//         if(arr[mid] == element){
//             return mid;
//         }
//         if(arr[mid]<element){
//             low = mid+1;
//         }
//         else{
//             high = mid -1;
//         }
//     }
//     return -1;

// }

int binarySearch(int arr[], int size, int key)
{
    int mid, low = 0;
    int high = size - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            if (key == arr[mid])
            {
                return mid;
            }
        }
    }
    return -1;
}
int recursiveBinary(int arr[],int size, int low, int high, int key){
    printf("%d",size);
    if(size == 1){
        if (key == arr[0])
        return low;
        else{
            return -1;
        }
    }
    int mid = (low + high)/2;
    if(key > arr[mid]){
    size = high - mid ;
        return recursiveBinary(arr, size, mid+1, high, key);
    }else if(key < arr[mid]){
    size = mid-low ;
        
        return recursiveBinary(arr, size, low, mid - 1, key);
    
    }else{
        return (key == arr[mid] ? mid: -1);
    }
}
int main()
{
    // Unsorted array for linear search
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    // int size = sizeof(arr)/sizeof(int);

    // Sorted array for binary search
    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = sizeof(arr) / sizeof(int);
    int element = 44;
    int searchIndex = recursiveBinary(arr, size, 0, size-1, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}
