typedef struct array
{
    int *address;
    int size;
    int length;
} array;
void init(array *arr, int size);
void append(array *arr, int element);
void removeAtIndex(array *arr, int pos);
void insertAtIndex(array *arr, int pos, int element);
void display(array arr);
int max(array *arr);
int min(array *arr);
void reverse(array *arr);
int merge(array *arr1, array *arr2);
