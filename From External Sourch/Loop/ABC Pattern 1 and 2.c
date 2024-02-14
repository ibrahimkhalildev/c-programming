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
            printf("%c", row+64); //col+64 [For Capital Latter 64 and for the  small latter 96]
        }
        printf("\n");
    }


    return 0;
}