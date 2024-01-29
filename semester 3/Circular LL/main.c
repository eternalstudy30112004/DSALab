#include "circular.c"

int main()
{
    circular l;
    init(&l);
    insert_end(&l, 1);
    insert_end(&l, 4);
    insert_beg(&l, 9);
    insert_beg(&l, 16);
    traverse(l);

    del_beg(&l);
    del_end(&l);
    traverse(l);

    return 0;
}
