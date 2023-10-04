#include <stdio.h>

int main()
{
    int userChoice = 1;

    struct Distance
    {
        int kilometers;
        int meters;
    } distance1, distance2;

    do
    {
        printf("********** CUSTOM MENU **********\n");
        printf("Enter 1 to Input distance data\n");
        printf("Enter 2 to Display distances\n");
        printf("Enter 3 to Calculate total distance\n");
        printf("Enter 4 to Calculate difference\n");
        printf("Enter 5 to EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:
            printf("Enter data for the first distance (km and meters separated by a space): ");
            scanf("%d%d", &distance1.kilometers, &distance1.meters);
            printf("Enter data for the second distance (km and meters separated by a space): ");
            scanf("%d%d", &distance2.kilometers, &distance2.meters);
            break;
        case 2:
            printf("Distance 1: %d Km %d m\n", distance1.kilometers, distance1.meters);
            printf("Distance 2: %d Km %d m\n", distance2.kilometers, distance2.meters);
            break;
        case 3:
        {
            int totalKm = distance1.kilometers + distance2.kilometers;
            int totalMeters = distance1.meters + distance2.meters;
            if (totalMeters >= 1000)
            {
                totalKm += 1;
                totalMeters -= 1000;
            }
            printf("Total distance is: %d Km %d m\n", totalKm, totalMeters);
            break;
        }
        case 4:
        {
            int diffKm = distance1.kilometers - distance2.kilometers;
            int diffMeters = distance1.meters - distance2.meters;
            if (diffMeters < 0)
            {
                diffKm -= 1;
                diffMeters += 1000;
            }
            printf("Difference is: %d Km %d m\n", diffKm, diffMeters);
            break;
        }
        case 5:
            userChoice = 0;
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

        printf("**********************************\n");
    } while (userChoice);

    return 0;
}
