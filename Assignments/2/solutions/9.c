#include <stdio.h>
#define PI 3.1415926
double pow(double x, double y)
{
    if (y == 0)
        return 1;

    double r = 1;
    for (int i = 0; i < y; i++)
    {
        r *= x;
    }
    return r;
}
double toRadians(double degrees)
{
    double radians = degrees * PI / 180;
    return radians;
}
unsigned long int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
double powerCos(double radians, int n)
{
    double sum = 0;
    for (short i = 0; i < n * 2; i += 2)
    {
        sum += pow(-1, (double)i / 2) * pow(radians, (double)i) / factorial(i);
    }
    return sum;
}
double powerSine(double radians, int n)
{
    double sum = 0;
    for (short i = 1; i < n * 2; i += 2)
    {
        sum += pow(-1, (double)(i / 2)) * pow(radians, (double)i) / factorial(i);
    }
    return sum;
}
double powerE(double x, int n)
{
    double sum = 0;
    for (short i = 0; i < n; i += 1)
    {
        sum += pow(x, (double)i) / factorial(i);
    }
    return sum;
}

int main()
{
    double degrees = 30;
    double x = 1.0;
    int n = 7;
    double cosineSum = powerCos(toRadians(degrees), n);
    double sineSum = powerSine(toRadians(degrees), n);
    double eSum = powerE(x, n);
    printf("Value of cosine(%f): %f\n", degrees, cosineSum);
    printf("Value of sine(%f): %f\n", degrees, sineSum);
    printf("Value of exp(%f): %f\n", x, eSum);
    return 0;
}