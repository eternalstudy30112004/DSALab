
#include <stdio.h>
typedef struct entry
{
    int k;
    int *p;
    struct entry *x;
} entry;
void printEntry(entry ent)
{
    printf("Printing entry object at %p &%p\n", &ent, ent);
    printf("ent.k: %d Address: %p\n", ent.k, &ent.k);
    printf("ent.p: %p Address: %p\n", ent.p, &ent.p);
    printf("ent.k*: %p Address: %p\n", ent.x, &ent.x);

    printf("---\n");
}

int main()
{

    entry ent, *p;
    printEntry(ent);
    return 0; // Indicated executed sucess
}
