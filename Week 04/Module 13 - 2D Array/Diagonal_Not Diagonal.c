#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (row == col)
    {
        int ans = 1, x=a[0][0];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; col < j; j++)
            {
                if (i == j)
                {
                    // continue;
                    //Special Checking
                    if(a[i][j]!=x)
                    {
                        ans=0;
                    }
                }
                if (a[i][j] != 0)
                {
                    ans = 0;
                    // return 0;
                }
            }
        }
        if (ans == 1)
        {
            printf("Diagonal\n");
        }
        else
        {
            printf("Not Diagonal\n");
        }
    }
    else
    {
        printf("Not Diagonal\n");
    }
    return 0;
}
