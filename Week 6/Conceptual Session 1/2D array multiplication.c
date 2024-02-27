#include <stdio.h>

int main()
{
    int i, j, row = 3, col = 3;
    int a[row][col], b[row][col], ans[row][col];

    printf("Input 1St Matrix = \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input 2nd Matrix = \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Matrix Multiplication Process
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            ans[i][j] = 0;

            for (int k = 0; k < row; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication Result = \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
