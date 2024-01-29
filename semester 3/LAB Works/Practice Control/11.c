#include <stdio.h>

void isValidTriangle(int angle1, int angle2, int angle3) {
    if (angle1 + angle2 + angle3 == 180)
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");
}

int main() {
    int angle1, angle2, angle3;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    isValidTriangle(angle1, angle2, angle3);
    return 0;
}
