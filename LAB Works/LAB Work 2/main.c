#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int p = a * b;
    printf("\n%d\n\n", a + b);
    printf("%d\n\n", a - b);
    printf("%d\n\n", a * b);
    printf("%d\n\n", a / b);
    printf("%d\n", a % b);

    return 0;
}