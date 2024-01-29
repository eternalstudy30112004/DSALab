#include <stdio.h>

int main()
{
    char a, b;

    printf("Enter an alphabet: ");
    scanf("%c", &a);

    if (a >= 'a' && a <= 'z')
        b = a - 'a' + 'A';

    else
        b = a - 'A' + 'a';

    printf("Original character: %c\n", a);
    printf("Converted character: %c\n", b);

    return 0;
}
