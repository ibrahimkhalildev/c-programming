#include <stdio.h>
int main()
{
    int row, col, n;

    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        // Printing space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // Printing Star (*)
        for (col = 1; col <= 2 * row - 1; col++)
        {
            //printf("*"); //Printing Star(*)
            //printf("%d", col); //Printing Number sequence (1.2.3.4....)
            //printf("%d", row); //Printing Number 111 - 22222 -333333
            printf("%c", col+64);
        }

        printf("\n");
    }
}
