#include <stdio.h>
int main()
{
    int row, col, i, j, N = 15;

    // for (row = 1; row <= N; row++)
    // {
    //     printf("#");
    // }
    // printf("\n");
    for (row = 1; row <= (N - 2); row++)
    {
        printf("#");
        for (col = 1; col <= (N - 2); col++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    // for (row = 1; row <= N; row++)
    // {
    //     printf("#");
    // }

    // printf("\n");
    return 0;
}