#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Adiya";
    printf("%x", strchr(a, 'A') - a);
    return 0;
}