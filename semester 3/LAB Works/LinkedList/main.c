
#include<stdio.h>
#include "list.c"

int main(){
    SLL L1, L2;
    init_SLL(&L1);
    //{1, 2, 8, 9,12,16,18,11,14,13}
    append(&L1, 1);
    append(&L1, 2);
    append(&L1, 8);
    append(&L1, 9);
    append(&L1, 12);
    append(&L1, 16);
    append(&L1, 18);
    append(&L1, 11);
    append(&L1, 14);
    append(&L1, 13);

    append(&L2, 1);
    append(&L2  , 2);
    append(&L2, 3);
    append(&L2, 2);
    append(&L2, 1);

    traverse(L2);
    printf("\n");
    printf("\n%d\n",is_palindrome(&L2) );
    traverse(L1);
    printf("\n");
    reverse_even(&L1);
     traverse(L1);
    printf("\n");

   
    return 0;
}
