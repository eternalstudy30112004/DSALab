#include <stdio.h>

void checkAlphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Alphabet\n");
    else
        printf("Not an Alphabet\n");
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkAlphabet(ch);
    return 0;
}
