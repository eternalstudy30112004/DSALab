#include <stdio.h>

void checkCase(char ch) {
    if (ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else
        printf("Not an alphabet\n");
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkCase(ch);
    return 0;
}
