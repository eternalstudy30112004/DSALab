#include <stdio.h>
#define MAX_HEAP_LENGTH 100

typedef struct minHeap{
    int length;
    int arr[MAX_HEAP_LENGTH];
} minHeap;

void init(minHeap *h){
    h->length = 0;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int floor(double x){
    
}
void insert(minHeap *h, int val){
    h->arr[h->length++] = val;
    if(h->length == 1)return;
    int parent = (h->length - 1)/2;
    int current = h->length - 1;
    while (parent >= 0)
    {
        if(h->arr[parent] < h->arr[current]){
            break;
        }else{
            swap(h->arr + parent, h->arr + current);
        }
        current = parent;
        parent = floor((parent - 1)/2);
    }
    
}
void print(minHeap *h){
    for(int i = 0;i < h->length;i++ ){
        printf("%d ", h->arr[i]);
    }
    printf("\n");
}

int main(){
    minHeap h;
    init(&h);
    insert(&h, 5);
    print(&h);
    insert(&h, 6);
    print(&h);

    insert(&h, 3);
    print(&h);

    insert(&h, 2);
    print(&h);

    insert(&h, 1);
    print(&h);



    return 0;
}