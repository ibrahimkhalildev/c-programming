#include <stdio.h>

void pattern_machine(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int row_num;
    printf("Input Row Number:\n");
    scanf("%d", &row_num);

    pattern_machine(row_num);
    return 0;
}
