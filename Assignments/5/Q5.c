#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data
{
    char name[8];
    char *address;
    unsigned long mobile;
    struct data **p;
} data;

int main()
{

    data d;
    int k;
    char *greeting = "hi";
    char address[8];
    while (scanf("%s%s%ul", &d.name, address, &d.mobile) != EOF)
    {
        d.address = malloc(strlen(address) + 1);
        strcpy(d.address, address);
        strcat(d.name, " ");
        strcat(d.name, greeting);
        k = d.mobile % 4;
        d.p = (data **)malloc(sizeof(data *) * k);
        int i;
        for (i = 1; i < k + 1; i++)
        {
            d.p[i - 1] = (data *)malloc(sizeof(data) * i);
            d.p[i - 1][0] = d;
            memcpy(d.p[i - 1], &d, sizeof(d));
        }
    }
    printf("%u", d.mobile);
}