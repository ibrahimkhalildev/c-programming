#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Input a Number: ");
    scanf("%d", &n);
    for(row = n; row>=1; row--)
    {
        for(col = 1; col<= row; col++)
        {
            printf("%d ", col); //col % 2 = 1/0
        }
        printf("\n");
    }


    return 0;
}