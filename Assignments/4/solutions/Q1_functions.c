#include "Q1_functions.h"

void displayDistance(char *mess, struct distance d)
{
    printf("%s %d Km %d m\n", mess, d.kms, d.m);
}
void getDistanceData()
{
    printf("Enter data for distance 1 km and meters seperated by a space : ");
    scanf("%d%d", &d1.kms, &d1.m);
    printf("Enter data for distance 2 km and meters seperated by a space : ");
    scanf("%d%d", &d2.kms, &d2.m);
}
void displayMenu()
{
    printf("---------------MENU------------------\n");
    printf("Enter 1 to Read the distances\n");
    printf("Enter 2 to Display the distances\n");
    printf("Enter 3 to Add the distances \n");
    printf("Enter 4 to Subtract the distances \n");
    printf("Enter 5 to EXIT \n");
}
struct distance addDist()
{
    struct distance d;
    d.kms = d1.kms + d2.kms;
    d.m = d1.m + d2.m;
    if (d.m >= 1000)
    {
        d.kms += 1;
        d.m -= 1000;
    }
    return d;
}
struct distance subDist()
{
    struct distance d;
    d.kms = d1.kms - d2.kms;
    d.m = d1.m - d2.m;
    if (d.m < 0)
    {
        d.kms -= 1;
        d.m = 1000 + d.m;
    }
    return d;
}