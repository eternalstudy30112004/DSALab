#include <stdio.h>

void checkCharType(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special Character\n");
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkCharType(ch);
    return 0;
}
