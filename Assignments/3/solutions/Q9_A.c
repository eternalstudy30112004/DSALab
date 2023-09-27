#include <stdio.h>
int length(char str[])
{
    int counter = 0;
    int i = 0;
    while (str[i++] != '\0')
        counter++;
    return counter;
}
void copy(char str1[], char str2[])
{
    int i = 0;

    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}
int compare(char str1[], char str2[])
{
    int i = 0;
    int r = -1;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] > str2[i])
        {
            r = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            r = -1;
            break;
        }
        else
        {
            r = 1;
        }
        i++;
    }
    return r;
}

void concat(char str1[], char str2[])
{
    int i = 0;
    int l1 = length(str1);
    while (str2[i] != '\0')
    {
        str1[l1 + i] = str2[i];
        i++;
    }
    str1[l1 + i] = '\0';
}
void reverse(char str1[])
{
    int i = 0;
    int l1 = length(str1);
    int temp;
    for (short i = 0; i <= l1 / 2; i++)
    {
        temp = str1[i];
        str1[i] = str1[l1 - i - 1];
        str1[l1 - i - 1] = temp;
    }
}
char *subString(char str1[], char sub[])
{
    int i = 0;
    int consecutive = 0;
    int l2 = length(sub);
    int j = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] == sub[j])
            consecutive++, j++;
        else
            consecutive = 0, j = 0;
        if (consecutive == l2)
        {
            return &str1[i] - l2;
        }
        i++;
    }
}
int main()
{
    char str[] = "Hello World !";
    char str2[25];

    printf("The string : \n%s", str);
    printf("The length of given string is %d\n", length(str));
    copy(str2, str);
    printf("Copied str to str2 :  %s\n", (str2));
    printf("Comparing str with str2 now yields %d\n", compare(str, str2));
    printf("Comparing str with 'Aditya' yields %d\n", compare(str, "Hello"));
    concat(str2, "Aditya");
    printf("Concatenating str2 with 'Aditya' gives ");
    printf("%s\n", str2);
    reverse(str);
    printf("Reversing str : %s\n", str);
    char sub[] = "ello";
    char *result = subString(str2, sub);

    if (result != NULL)
        printf("Substring found at position: %d\n", result - str2 + 1);
    else
        printf("Substring not found\n");

    return 0;
}