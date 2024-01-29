
#include <stdio.h>
#include "array.c"
int main()
{
    int n = 40;
    array a;

    init(&a, n);
    append(&a, 1);
    insertAtIndex(&a, 0, 0);
    insertAtIndex(&a, a.length, 0);
    displayF(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a.length - 1; j++)
        {
            /* code */
            a.address[j] = a.address[j] + a.address[j + 1];
        }

        insertAtIndex(&a, 0, 0);
        displayF(a);
    }
    displayF(a);
    return 0;
}