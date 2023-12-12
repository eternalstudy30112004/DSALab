#include <stdio.h>

void triangleType(int side1, int side2, int side3) {
    if (side1 == side2 && side2 == side3)
        printf("Equilateral Triangle\n");
    else if (side1 == side2 || side2 == side3 || side1 == side3)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
}

int main() {
    int side1, side2, side3;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    triangleType(side1, side2, side3);
    return 0;
}
