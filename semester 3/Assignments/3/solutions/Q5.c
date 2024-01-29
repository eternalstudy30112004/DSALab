#include <stdio.h>
void printMatrix(int mat[3][3], short m, short n)
{
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("\n");
}
void matrixAdd(int matrixA[3][3], int matrixB[3][3], short m, short n)
{
    int sum[m][n];
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    printf("Sum of A and B gives \n");
    printMatrix(sum, m, n);
}
void matrixMul(int matrixA[3][3], int matrixB[3][3], short m, short n, short p, short q)
{
    int product[m][q];
    if (n != q)
    {
        printf("Matrix multiplication cannot be done. Invalid order\n");
        return;
    }
    int temp;
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < q; j++)
        {
            temp = 0;
            for (short k = 0; k < m; k++)
            {
                temp += matrixA[i][k] * matrixB[k][j];
            }

            product[i][j] = temp;
            temp = 0;
        }
    }
    printMatrix(product, m, n);
}
void matrixSub(int matrixA[3][3], int matrixB[3][3], short m, short n)
{
    int diff[m][n];
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {
            diff[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    printf("Difference of A and B gives \n");
    printMatrix(diff, m, n);
}

int main()
{
    int m = 3, n = 3, p = 3, q = 3;
    int matrixA[m][n];
    printf("Enter elements of matrix A [3x3] : \n");
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {
            printf("Enter element a[%hd][%hd] : ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter elements of matrix B [3x3] : \n");

    int matrixB[p][q];
    for (short i = 0; i < m; i++)
    {
        for (short j = 0; j < n; j++)
        {
            printf("Enter element b[%hd][%hd] : ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    int condition = 1;
    char input;
    printf("hello");
    do
    {
        printf("You have entered two matrices\nNow choose the operation you need to perform on these matrices\n1 for Addition\n2 for Subtraction\n3 for Multiplication\ninput any other DIGIT to quit\n");
        printf("Matrix A : \n");
        printMatrix(matrixA, m, n);
        printf("Matrix B : \n");
        printMatrix(matrixB, m, n);
        fflush(stdin);
        scanf("%c", &input);
        switch (input)
        {
        case '1':
            matrixAdd(matrixA, matrixB, m, n);
            break;
        case '2':
            matrixSub(matrixA, matrixB, m, n);
            break;
        case '3':
            matrixMul(matrixA, matrixB, m, n, p, q);
            break;
        default:
            condition = 0;
            break;
        }
    } while (condition);

    return 0;
}