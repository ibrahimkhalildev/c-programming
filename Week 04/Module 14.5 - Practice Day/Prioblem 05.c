#include <stdio.h>

// Chess Board Problem 05 - Module 14.5 (Practice Day Problem)
int main()
{
    int row = 8, col = 8;

    int chess[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            chess[i][j] = 0;
    }

    int input_num;
    scanf("%d", &input_num);
    // for (int i = 0; i < input_num; i++)
    while (input_num--)
    {
        // printf("%d ");
        int r, c;
        scanf("%d %d", &r, &c);
        chess[r][c] = 1;
    }
    for (int i = 0; i < row; i++)
    {
        int count = 0;
        for (int j = 0; j < col; j++)
        {
            if (chess[i][j] == 1)
                count++;
        }
        if (count > 1)
        {
            for (int j = 0; j < col; j++)
                chess[i][j] = 0;
        }
    }
    printf("--------------------\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (chess[i][j] != 0)

                printf("%d %d\n", i, j);
        }
    }

    return 0;
}
