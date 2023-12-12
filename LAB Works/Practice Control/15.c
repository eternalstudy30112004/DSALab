#include <stdio.h>

void calculateGrossSalary(float basicSalary) {
    float hra, da;

    if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } else {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }

    float grossSalary = basicSalary + hra + da;
    printf("Gross Salary: %.2f\n", grossSalary);
}

int main() {
    float basicSalary;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    calculateGrossSalary(basicSalary);
    return 0;
}
