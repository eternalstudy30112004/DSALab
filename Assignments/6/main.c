#include <stdio.h>
#include "List.c"
void readMatrix(char filename[], list *matrix, int *rows, int *cols)
{
    FILE *file;
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file !! \n");
        return;
    }

    fscanf(file, "%d", rows);
    fscanf(file, "%d", cols);

    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            int d;
            fscanf(file, "%d", &d);
            if (d != 0)
                insert_end(matrix, d, i, j);
        }
    }
    fclose(file);
}
void writeMatrix(char filename[], list *mat, int row, int col)
{
    FILE *file;
    file = fopen(filename, "w");
    int prevRow = 0;
    node *p = *mat;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            prevRow != p->row &&fprintf(file, "\n");
            if (p->row == i && p->column == j)
            {
                fprintf(file, "%d ", p->data);
                prevRow = p->row;
                if (p->next)
                    p = p->next;
            }
            else
            {
                fprintf(file, "0 ");
            }
        }
    }
    fclose(file);
}
list *addMatrix(list *m1, list *m2, int r1, int c1, int r2, int c2)
{
    list *add = (list *)malloc(sizeof(list *));
    init(add);
    if (r1 != r2 || c1 != c2)
        return NULL;
    node *p = *m1;
    node *q = *m2;
    int a, b;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (p->row == i && p->column == j)
            {
                a = p->data;
                if (p->next)
                    p = p->next;
            }
            else
            {
                a = 0;
            }

            if (q->row == i && q->column == j)
            {
                b = q->data;
                if (q->next)
                    q = q->next;
            }
            else
            {
                b = 0;
            }

            if (a + b)
                insert_end(add, a + b, i, j);
        }
    }
    return add;
}

list *diffMatrix(list *m1, list *m2, int r1, int c1, int r2, int c2)
{
    list *add = (list *)malloc(sizeof(list *));
    init(add);
    if (r1 != r2 || c1 != c2)
        return NULL;
    node *p = *m1;
    node *q = *m2;
    int a, b;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (p->row == i && p->column == j)
            {
                a = p->data;
                if (p->next)
                    p = p->next;
            }
            else
            {
                a = 0;
            }

            if (q->row == i && q->column == j)
            {
                b = q->data;
                if (q->next)
                    q = q->next;
            }
            else
            {
                b = 0;
            }

            if (a + b)
                insert_end(add, a - b, i, j);
        }
    }
    return add;
}

int main()
{
    list matrix1, matrix2;
    int row1, col1, row2, col2;
    init(&matrix1);
    init(&matrix2);
    readMatrix("Matrix1.txt", &matrix1, &row1, &col1);
    readMatrix("Matrix2.txt", &matrix2, &row2, &col2);
    printf("Matrix A: \n");
    traverse(matrix1, row1, col1);
    printf("Matrix B: \n");
    traverse(matrix2, row2, col2);
    list *add = addMatrix(&matrix1, &matrix2, row1, col1, row2, col2);
    list *sub = diffMatrix(&matrix1, &matrix2, row1, col1, row2, col2);
  
    printf("Sum: \n");
    traverse(*add, row1, col1);
    printf("Differnce: \n");
    traverse(*sub, row2, col2);

    writeMatrix("MatrixSum.txt", add, row1, col1);
    writeMatrix("MatrixDiff.txt", sub, row1, col1);

    return 0;
}