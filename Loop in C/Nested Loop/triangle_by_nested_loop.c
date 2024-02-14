#include <stdio.h>
int main()
{
    int a, b;

    for (a = 1; a <= 50; a++)
    {
        // Print 5 Stars
        // printf("%d", a);
        for (b = 1; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
