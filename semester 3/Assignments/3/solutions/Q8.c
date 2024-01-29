#include <stdio.h>
void upperTriangular(int matrix[][3], short m, short n)
{

    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {

            if (i > j)
                printf("0 ");
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void lowerTriangular(int matrix[][3], short m, short n)
{
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {

            if (i < j)
                printf("0 ");
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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
    printf("\nThe upper triangular form of given square matrix is : \n");
    upperTriangular(matrix, m, n);
    printf("The lower triangular form of given square matrix is : \n");
    lowerTriangular(matrix, m, n);
    return 0;
}