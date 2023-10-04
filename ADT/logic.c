#include <stdio.h>
#include "array.c"
int main(){
    array k;
    int n = 5;
    init(&k, n);
    append(&k, 69);
    append(&k, 96);

    append(&k, 619);
    display(k);
    insertAtIndex(&k,1,17);
    display(k);
    removeAtIndex(&k, 2);
    display(k);

    removeAtIndex(&k, 2);
    display(k);
    reverse(&k);
    display(k);

    return 0;
}