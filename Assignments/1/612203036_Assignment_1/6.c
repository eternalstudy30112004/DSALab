#include <stdio.h>
#define PI 3.14159265
double area(int r)
{
    return PI * r * r;
}
double circumfernce(int r)
{
    return PI * 2 * r;
}
int main()
{
    int r;
    scanf("%d", &r);
    printf("Area of circle with given r is %f sq. units\n", area(r));
    printf("Circumfernce of circle with given r is %f units", circumfernce(r));
    return 0;
}