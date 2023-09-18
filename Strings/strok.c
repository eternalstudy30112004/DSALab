#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is a sample string";
    char *token;
    token = strtok(str, " ");

    while (token != NULL)
    {
        printf("Token: %s\n", token);
        printf("String %s\n", str + 5);
        token = strtok(NULL, " ");
    }

    return 0;
}
