#include <stdio.h>

void quadraticRoots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
        printf("Roots are real and different\n");
    else if (discriminant == 0)
        printf("Roots are real and same\n");
    else
        printf("Roots are complex\n");
}

int main() {
    float a, b, c;
    printf("Enter coefficients (a, b, c) of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    quadraticRoots(a, b, c);
    return 0;
}
