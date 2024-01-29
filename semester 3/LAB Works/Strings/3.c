#include <stdio.h>
char *longestSubsequence(char *, char *);
int test(char *i1, char *i2, char *expected)
{
    char *r = longestSubsequence(i1, i2);
    printf("r : %d", r);
    return r == expected;
}
char *longestSubsequence(char *string, char *origin)
{
    int maximumCount = 0;
    int temp = 0;
    char *sub = origin;
    char *position = NULL;
    while (*string != '\0')
    {

        while (*sub != '\0')
        {

            if (*sub == *string)
            {
                while (*sub == *string)
                {

                    temp++;
                    string++;
                    if (temp > maximumCount)
                    {
                        maximumCount = temp;
                        position = string - temp;
                    }
                }
            }
            else
            {
                temp = 0;
            }
            sub++;
        }
        sub = origin;

        string++;
    }
    return (char *)(position + maximumCount);
}
int main()
{

    char *count = longestSubsequence("odaoas", "adonodas");
    printf("Address : %u\n", count);
    printf("Value :%c", *count);
    return 0;
}