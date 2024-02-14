#include <stdio.h>

int main() {
    int N, M;
    
    // Input the size of matrices
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    // Input the first matrix
    int matrix1[N][M];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the second matrix
    int matrix2[M][N];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the result matrix
    int result[N][N];
    
    // Perform matrix multiplication
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < M; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Result Matrix (NxN) after multiplication:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

