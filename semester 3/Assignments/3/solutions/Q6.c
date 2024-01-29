#include <stdio.h>
int trace(int matrix[][3], short m, short n)
{
    int sum = 0;
    for (short i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }
    return sum;
}
int main()
{
    short m = 3, n = 3;
    int matrix[m][n];
    printf("Enter elements of matrix A [3x3] : \n");
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {
            printf("Enter element a[%hd][%hd] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe sum of diagonal elements is %d", trace(matrix, m, n));
    return 0;
}