#include <stdio.h>
struct Employee
{
    char ename[20];
    int ssn;
    float salary;
    struct date
    {
        int day;
        int month;
        int year;
    } doj;
} emp = {"Pritesh", 1000, 1000.50, {22, 6, 1990}};
int main()
{
    struct date p = {10,15,12};
    printf("%d %d %d", p);

    return 0;
}