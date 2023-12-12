#include "clist.c"
int main(){
    clist p;
    init(&p);
    char inputChar = 'a';
    printf("Enter characters (Ctrl-D to end input):\n");

    insert_end(&p, inputChar);
    
    traverse(p);
inputChar = 'b';
    insert_end(&p, inputChar);
    
    traverse(p);
inputChar = 'c';
    insert_end(&p, inputChar);
    
    traverse(p);
  
return 0;
    }