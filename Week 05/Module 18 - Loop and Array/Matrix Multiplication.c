#include <stdio.h>

int main()
{
    int i, j,k, sum;
    int mat1[3][3], mat2[3][3];
    int ans[3][3];

    printf("First Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Second Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Multiplicatin Result is = \n");
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         // Loop use kore calculation korte hobe.
    //         // Result ta kono ekta variable e rakhte hobe.
    //         // ans[i][j] = result;
    //         ans[i][j] = mat1[i][0] * mat2[0][j] + mat1[i][1] * mat2[1][j] + mat1[i][2] * mat2[2][j];
    //     }
    // }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Multiplication Result is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
