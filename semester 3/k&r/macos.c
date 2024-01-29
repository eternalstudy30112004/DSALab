#include <stdio.h>

// Define a macro to create a function with a unique name
#define pi 3.14159

#define PROD(type, a, b) \
    void prod_##type() { printf((#type)"%lf", num *pi); }

int main()
{
    PI(2);
    pi_2();
}