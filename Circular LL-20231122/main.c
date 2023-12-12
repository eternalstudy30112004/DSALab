#include "circular.c"

int main()
{
    clist l;
    init(&l);

    insert_end(&l, 100);
    insert_end(&l, 200);
    insert_beg(&l, 300);
    insert_beg(&l, 400);
    traverse(l);

    del_beg(&l);
    del_end(&l);
    traverse(l);
    printf("exit");
    return 0;
}
