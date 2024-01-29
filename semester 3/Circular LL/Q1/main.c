#include "circular.c"

int main()
{
    circular l;
    char c;
    init(&l);
    printf("Enter characters as input[q to quit] \n");
    scanf("%c", &c);
    while(c!='q'){
        insert_end(&l, c);
        printf("%c", c);
        traverse(l);
    }
    printf("asdf");
    traverse(l);
    printf("asdf");
    return 0;
}
