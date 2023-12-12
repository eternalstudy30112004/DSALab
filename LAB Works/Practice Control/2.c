#include <stdio.h>

void checkNumber(int num) {
    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkNumber(num);
    return 0;
}
