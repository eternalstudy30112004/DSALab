#include <stdio.h>

#include <string.h>

int main()
{
    char str[] = "Hello World !";
    char str2[25];

    printf("The string[str] : %s\n", str);
    printf("The length of given string is %d\n", strlen(str));
    strcpy(str2, str);
    printf("Copied str to str2 we get [str2] =  %s\n", (str2));
    printf("Comparing str with str2 now yields %d\n", strcmp(str, str2));
    printf("Comparing str with 'Aditya' yields %d\n", strcmp(str, "Hello"));
    printf("Concatenating str2 with 'Aditya' gives ");
    strcat(str2, "Aditya");
    printf("%s\n", str2);
    strrev(str);
    printf("Reversing str : %s\n", str);
    char sub[] = "ello";
    char *result = strstr(str2, sub);

    if (result != NULL)
        printf("Substring found at position: %d\n", result - str2);
    else
        printf("Substring not found\n");

    return 0;
}