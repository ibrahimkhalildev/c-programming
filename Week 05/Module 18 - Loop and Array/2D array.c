#include <stdio.h>

int main()
{
    int i, j;
    int marks[3][3];

    // marks[0][4] = 55;
    // marks[1][2] = 31;
    // marks[1][6] = 27;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
