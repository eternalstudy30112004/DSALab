#include <stdio.h>

int main()
{
    int x = 10;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    printf("Value of i j k: %d %d %d", i, j, k);
                }
            }
        }
    }

    return 0;
}