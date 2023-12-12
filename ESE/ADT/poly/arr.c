#include <stdlib.h>
#include <limits.h>

typedef struct term{
    int degree;
    int coeff;
} term;
typedef struct array
{
    term *data;
    int size;
    int length;
} array;

void init(array *arr, int size)
{
    arr->data = (term *)malloc(sizeof(term) * size);
    if (!arr->data)
        return;
    arr->length = 0;
    arr->size = size;
    return;
}

void append(array *arr, int deg, int coeff)
{
    if (arr->length >= arr->size)
        return;
    printf("\n|%d %d|\n", deg, coeff);
    arr->data[arr->length].degree = deg;
    arr->data[arr->length].coeff = coeff;
    arr->length++;
    traverse(*arr);
    return;
}

void traverse(array arr)
{
    printf("\n[ ");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d x^%d", arr.data[i].coeff,arr.data[i].degree );
    }
    printf(" ]\n");
}
