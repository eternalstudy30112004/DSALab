#include <stdio.h>
#include "Q1_functions.c"
int isActive = 1;

int main()
{
    do
    {
        displayMenu();
        printf("Enter your choice : ");
        scanf("%d", &isActive);
        switch (isActive)
        {
        case 1:
            getDistanceData();
            break;
        case 2:
            displayDistance("Distance 1: ", d1);
            displayDistance("Distance 2: ", d2);

            break;
        case 3:
            displayDistance("Sum is: ", addDist());
            break;
        case 4:
            displayDistance("Differnce is: ", subDist());
            break;
        case 5:
            isActive = 0;
            break;
        }

        printf("-------------------------------------\n");
    } while (isActive);

    return 0;
}
