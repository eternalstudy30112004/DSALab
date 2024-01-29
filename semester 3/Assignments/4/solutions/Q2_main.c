#include <stdio.h>
#include "Q2_functions.c"
int main()
{
    short i = 0;
    while (i < 5)
    {
        getStudentDetails(i);
        i++;
    }
    for (short i = 0; i < 5; i++)
    {
        displayInfo(students[i]);
        printf("\n");
    }

    return 0;
}