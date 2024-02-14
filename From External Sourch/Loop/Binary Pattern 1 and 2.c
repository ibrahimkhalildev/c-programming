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
            printf("%d", row%2); //col % 2 = 1/0
        }
        printf("\n");
    }


    return 0;
}