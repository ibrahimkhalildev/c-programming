#include <stdio.h>
int main()
{
    int row, col, i;

    for (row = 1; row <= 10; row++)
    {
        for(col = 1; col<=row; col++)
        {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
