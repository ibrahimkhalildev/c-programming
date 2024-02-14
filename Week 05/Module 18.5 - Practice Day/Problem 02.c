#include <stdio.h>

int main()
{
    int N, i, j;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        // Print " " Space
        for (j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= N; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
