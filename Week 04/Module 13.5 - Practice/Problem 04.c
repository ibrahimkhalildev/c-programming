#include <stdio.h>

int main()
{
    int N, M;

    // Input matrix dimensions
    printf("Enter the number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

    int matrix1[N][M], matrix2[N][M], result[N][M];

    // Input first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix addition
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
