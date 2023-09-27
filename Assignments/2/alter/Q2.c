#include <stdio.h>

int main()
{
    char a;

    printf("ASCII values of all alphabets (both lower and upper case):\n");

    for (a = 'a'; a <= 'z'; a++)
        printf("%c: %d\n", a, (int)a);

    for (a = 'A'; a <= 'Z'; a++)
        printf("%c: %d\n", a, (int)a);

    return 0;
}
