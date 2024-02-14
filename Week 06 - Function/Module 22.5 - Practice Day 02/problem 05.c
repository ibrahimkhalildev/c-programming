#include <stdio.h>

void matrix_multiply(int mat1[][100], int mat2[][100], int res[][100], int row1, int col1, int row2, int col2)
{
    if (col1 != row2)
    {
        printf("Matrix Multiplication not possible!");
        return;
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            res[i][j];
            for (int k = 0; k < col1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int row1, col1, row2, col2;

    scanf("%d %d", &row1, &col1);
    row2 = row1;
    col2 = col1;

    int mat1[100][100], mat2[100][100];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int res[100][100];

    matrix_multiply(mat1, mat2, res, row1, col1, row2, col2);

    for (int i = 0; i < row1; i++)
    {
        for (int  j = 0; j < col2; j++)
        {
           printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}