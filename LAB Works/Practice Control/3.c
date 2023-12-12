
#include <stdio.h>

void checkDivisibility(int num) {
    if (num % 5 == 0 && num % 11 == 0)
        printf("Divisible by 5 and 11\n");
    else
        printf("Not divisible by 5 and 11\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkDivisibility(num);
    return 0;
}
