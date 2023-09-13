#include <stdio.h>
double toCelcius(double fahr)
{
    return (fahr - 32) * 5 / 9;
}
int main()
{
    double f = 98.5;
    double celcius = toCelcius(f);
    printf("%f degree fahrenheit ==> %f degree celcius", f, celcius);
    return 0;
}