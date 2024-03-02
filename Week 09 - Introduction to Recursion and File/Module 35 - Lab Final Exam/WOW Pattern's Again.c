#include <stdio.h>
//https://www.hackerrank.com/contests/batch-02-course-02-lab-final-exam/challenges/wow-patterns-again

void pattern_Maker(int row)
{
    char symbol;
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            symbol = '^';
        }
        else
        {
            symbol = '*';
        }
        for (int j = 0; j < row - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    pattern_Maker(N);

    return 0;
}
