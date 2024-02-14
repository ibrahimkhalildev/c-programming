#include <stdio.h>

void input_Matrix(int mat[3][3])
{
    printf("Enter a 3x3 Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void making_transpose(int mat[3][3], int transpose[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j] = mat[j][i];
        }
    }
}

void print_Marrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[3][3];
    int transpose[3][3];

    input_Matrix(mat);
    making_transpose(mat, transpose);

    printf("\nGiven Matrix: \n");
    print_Marrix(mat);

    printf("\nTranspose Matrix: \n");
    print_Marrix(transpose);

    return 0;
}
