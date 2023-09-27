#include <stdio.h>
#include <limits.h>
int main()
{
    printf("The range of unsigned char is [0, %d] \n", UCHAR_MAX);

    printf("The range of signed char is [%d, %d] \n", SCHAR_MIN, SCHAR_MAX);
    printf("The range of short int is [%d, %d] \n", SHRT_MIN, SHRT_MAX);
    printf("The range of unsigned short int is [0, %d] \n", USHRT_MAX);

    printf("The range of int is [%d, %d] \n", INT_MIN, INT_MAX);
    printf("The range of unsigned int is [0, %u] \n", UINT_MAX);

    printf("The range of long int is [%ld, %ld] \n", LONG_MIN, LONG_MAX);
    printf("The range of unsigned long int is [0, %lu] \n", ULONG_MAX);

    printf("The range of long long int is [%lld, %lld] \n", LLONG_MIN, LLONG_MAX);
    printf("The range of unsigned long long int is [0, %llu] \n", ULLONG_MAX);
    printf("The size of long double is %d \n", __SIZEOF_LONG_DOUBLE__);
    printf("The size of double is %d \n", __SIZEOF_DOUBLE__);
    printf("The size of float is %d \n", __SIZEOF_FLOAT__);

    return 0;
}
