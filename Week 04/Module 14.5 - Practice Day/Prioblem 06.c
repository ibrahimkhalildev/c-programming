/*

You are given a matrix of size NxN where N is the row and column number. Now first line of the input will contain the
value of N , and the next line will contain the matrix.
Now print the matrix in the following way –
>> 1st row and 1st column and skip the common value of them
>> 2nd row and 2nd column and skip the common value of them
>> nth row and nth column and skip the common value of them
See the sample output for more clarification

Sample Input:
3

1 2 3
4 5 6
7 8 9

Sample Output:
row-1 and column-1 = 2 3 4 7
row-2 and column-2 = 4 6 2 8
row-3 and column-3 = 7 8 3 6

*/
// The answer is wrong!
#include <stdio.h>

int main()
{
    int N;

    // Input the size of the matrix
    printf("Enter the size of the matrix (N): ");
    scanf("%d", &N);

    // Input the matrix
    int matrix[N][N];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the modified matrix
    printf("Modified Matrix:\n");
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i == j)
            {
                printf("%d ", matrix[i][j]);
            }
            else
            {
                printf("%d ", matrix[i][j] - matrix[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
