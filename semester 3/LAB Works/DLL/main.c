#include "dll.c"
int main() {
    ASCII L1;

    init_ASCII(&L1);
    ASCII_of(&L1, 'A');
    printf("Linked List representing ASCII value: ");
    traverse(&L1);

    destroy(&L1.digitsList);
    printf("Linked List after destruction: ");
    traverse(&L1);

    return 0;
}
