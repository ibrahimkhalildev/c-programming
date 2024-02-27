#include <stdio.h>

void add_Matrix(int mat1[][100], int mat2[][100], int result[][100], int N, int M);
void print_Matrix(int mat[][100], int N, int M);
int main()
{
    int N, M;
    int mat1[100][100], mat2[100][100], result[100][100];
    printf("Input the Row and Col of Matrix: \n");
    scanf("%d %d", &N, &M);

    printf("Input Element of 1st Matrix: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Input Element of 2nd Matrix: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    add_Matrix(mat1, mat2, result, N, M);
    print_Matrix(result, N, M);

    return 0;
}

// Matrix Addition
void add_Matrix(int mat1[][100], int mat2[][100], int result[][100], int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
// Matrix Print on console
void print_Matrix(int mat[][100], int N, int M)
{
    printf("Result: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
