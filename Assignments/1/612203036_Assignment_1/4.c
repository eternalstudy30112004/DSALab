#include <stdio.h>
double dearnessAllowance(long int salary)
{
    short percent = 0;
    if (salary >= 10000 && salary <= 20000)
        percent = 10;
    else if (salary <= 50000 && salary > 10000)
        percent = 15;
    else if (salary <= 100000 && salary > 50000)
        percent = 20;
    return (float)(salary)*percent / 100;
}
int main()
{
    long int salary;
    scanf("%ld", &salary);

    double da = dearnessAllowance(salary);
    printf("Dearness Allowance is : %f\n", da);
    printf("Total Salary Becomes is : %f", da + salary);
    return 0;
}