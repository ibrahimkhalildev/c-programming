#include <stdio.h>

int main()
{
    int R;

    // Input the number of rooks
    printf("Enter the number of rooks: ");
    scanf("%d", &R);

    int chessboard[3][3] = {0}; // Initialize the chessboard with 0 (empty)

    // Input the positions of the rooks and mark them on the chessboard
    printf("Enter the positions of the rooks (row, column):\n");
    for (int i = 0; i < R; ++i)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        chessboard[x - 1][y - 1] = 1; // Mark the rook position as 1 (occupied)
    }

    // Count and print the empty cells and their positions
    int emptyCount = 0;

    // int emptyCount = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (chessboard[i][j] == 0)
            {
                // printf("(%d, %d)\n", i + 1, j + 1);
                emptyCount++;
            }
        }
    }
    printf("Total empty cells - %d\n", emptyCount);

    printf("Empty cells (row, column):\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (chessboard[i][j] == 0)
            {
                printf("%d %d\n", i + 1, j + 1);
                emptyCount++;
            }
        }
    }

    return 0;
}
