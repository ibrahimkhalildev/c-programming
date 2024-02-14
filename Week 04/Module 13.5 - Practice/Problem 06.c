#include <stdio.h>

int main()
{
    int N, M;

    // Input matrix dimensions
    printf("Enter the number of rows (N) and columns (M): ");
    scanf("%d %d", &N, &M);

    int matrix[N][M];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transpose of the matrix
    printf("Transpose matrix:\n");
    for (int j = 0; j < M; ++j)
    {
        for (int i = 0; i < N; ++i)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
