#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();
char *ltrim(char *);
char *rtrim(char *);
char **split_string(char *);

int parse_int(char *);

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(int arr_rows, int arr_columns, int **arr)
{
    int l = (arr_rows - 2) * (arr_columns - 2);
    int *k = malloc(l * sizeof(int));
    int sum;
    int max;
    for (int i = 0; i < arr_rows - 2; i++)
    {
        for (int j = 0; j < arr_columns - 2; j++)
        {
            sum = arr[i + 1][j + 1];
            for (int a = 0; a < 3; a++)
            {
                sum += arr[i][j + a];
                sum += arr[i + 2][j + a];
            }
            printf("SUM : %d\n", sum);
            if (max < sum)
                max = sum;
        }
    }
    printf("MAX: %d\n", max);
    return max;
}

int main()
{
    FILE *fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int **arr = malloc(6 * sizeof(int *));

    for (int i = 0; i < 6; i++)
    {
        *(arr + i) = malloc(6 * (sizeof(int)));

        char **arr_item_temp = split_string(rtrim(readline()));

        for (int j = 0; j < 6; j++)
        {
            int arr_item = parse_int(*(arr_item_temp + j));

            *(*(arr + i) + j) = arr_item;
        }
    }

    int result = hourglassSum(6, 6, arr);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char *readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char *data = malloc(alloc_length);

    while (true)
    {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line)
        {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
        {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data)
        {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n')
    {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data)
        {
            data = '\0';
        }
    }
    else
    {
        data = realloc(data, data_length + 1);

        if (!data)
        {
            data = '\0';
        }
        else
        {
            data[data_length] = '\0';
        }
    }

    return data;
}

char *ltrim(char *str)
{
    if (!str)
    {
        return '\0';
    }

    if (!*str)
    {
        return str;
    }

    while (*str != '\0' && isspace(*str))
    {
        str++;
    }

    return str;
}

char *rtrim(char *str)
{
    if (!str)
    {
        return '\0';
    }

    if (!*str)
    {
        return str;
    }

    char *end = str + strlen(str) - 1;

    while (end >= str && isspace(*end))
    {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char **split_string(char *str)
{
    char **splits = NULL;
    char *token = strtok(str, " ");

    int spaces = 0;

    while (token)
    {
        splits = realloc(splits, sizeof(char *) * ++spaces);

        if (!splits)
        {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char *str)
{
    char *endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0')
    {
        exit(EXIT_FAILURE);
    }

    return value;
}