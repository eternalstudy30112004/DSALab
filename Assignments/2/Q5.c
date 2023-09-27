#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character : \n");
    scanf("%c", &c);
    if (c >= 65 && c <= 65 + 26)
        printf("Changed case : %c", c + 26 + 6);
    else if (c >= 97 && c <= 97 + 26)
        printf("Changed case : %c", c - 26 - 6);
    else
        printf("Character not a alphabet : %c", c);
    return 0;
}