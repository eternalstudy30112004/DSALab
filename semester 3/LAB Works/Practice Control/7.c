#include <stdio.h>

void checkVowelConsonant(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkVowelConsonant(ch);
    return 0;
}
