#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Input a Number: ");
    scanf("%d", &n);
    for(row = 1; row<=n; row++)
    {
        for(col = 1; col<= row; col++)
        {
            printf("%d", col); // by "col" print '12345 --n' by "row" will print 1, 22, 33 and so one
        }

        printf("\n");
    }


    return 0;
}