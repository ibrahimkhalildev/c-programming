#include <stdio.h>

int main()
{
    int i, j, sum;
    int mat1[2][2], mat2[2][2];

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &mat1[i][j]);
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &mat2[i][j]);
    for (i = 0; i < 2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d", mat1[i][j] + mat2[i][j]);
            //sum of all 2d array values;
            sum += ("%d ", mat1[i][j] + mat2[i][j]);
        }
    }
    printf("\n");
    printf("%d", sum);

    return 0;
}
