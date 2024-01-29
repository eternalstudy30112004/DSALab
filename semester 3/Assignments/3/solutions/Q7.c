#include <stdio.h>
void rowSum(int matrix[][3], short m, short n)
{
    int sum;
    for (short i = 0; i < m; i++)
    {
        sum = 0;
        for (short j = 0; j < n; j++)
        {

            sum += matrix[i][j];
        }
        printf("\nSum of row %d is %d", i + 1, sum);
    }
}
void colSum(int matrix[][3], short m, short n)
{
    int sum;
    for (short i = 0; i < m; i++)
    {
        sum = 0;
        for (short j = 0; j < n; j++)
        {

            sum += matrix[j][i];
        }
        printf("\nSum of column %d is %d", i + 1, sum);
    }
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
    printf("");
    rowSum(matrix, m, n);
    colSum(matrix, m, n);

    return 0;
}
