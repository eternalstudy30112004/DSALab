#include <stdio.h>
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
int length(char str[])
{
    int counter = 0;
    int i = 0;
    while (str[i++] != '\0')
        counter++;
    return counter;
}

void frequencyCount(char str[])
{
    int counter, j, i = 0;
    char uniqueString[100];
    copy(uniqueString, str);
    int n = length(uniqueString);
    char temp;
    i = 0;
    while (uniqueString[i] != '\0')
    {
        char elementToFind = uniqueString[i];
        for (int j = i + 1; j < n; j++)
        {
            char elm = uniqueString[j];
            if (elm == elementToFind || elm == ' ')
            {
                for (int k = j; k < n - 1; k++)
                {
                    temp = uniqueString[k];
                    uniqueString[k] = uniqueString[k + 1];
                    uniqueString[k + 1] = temp;
                }

                uniqueString[n] = '\0';
                j--;
                n--;
            }
        }
        i++;
    }
    i = 0;
    printf("Unique Characters : %s", uniqueString);

    while (uniqueString[i] != '\0')
    {
        char c = uniqueString[i];
        j = i;
        counter = 0;
        while (str[j] != '\0')
        {
            if (str[j] == c)
                counter++;

            j++;
        }
        printf("The frequency of character %c is %d\n", c, counter);

        i++;
    }
}
int main()
{
    char string[100];
    printf("Enter a string : ");
    scanf("%[^\n]", string);
    printf("String: %s\n", string);
    frequencyCount(string);

    return 0;
}