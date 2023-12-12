#include <stdio.h>

void calculateGrade(float physics, float chemistry, float biology, float mathematics, float computer) {
    float percentage = (physics + chemistry + biology + mathematics + computer) / 5;
    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else if (percentage >= 40)
        printf("Grade E\n");
    else
        printf("Grade F\n");
}

int main() {
    float physics, chemistry, biology, mathematics, computer;
    printf("Enter marks in Physics, Chemistry, Biology, Mathematics, and Computer: ");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);
    calculateGrade(physics, chemistry, biology, mathematics, computer);
    return 0;
}
