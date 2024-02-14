#include <stdlib.h>

int main()
{

    // https://www.hackerrank.com/contests/lab-mid-term-exam-batch-02/challenges/xoss-pattern/problem
    int N;
    scanf("%d", &N);

    if (N == 1)
    {
        printf("1\n");
        return 0;
    }

    for (int i = 1; i <= N; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    for (int i = 2; i < N; i++)
    {
        printf("%d", i);

        for (int j = 1; j <= N; j++)
        {
            if (i == N || j == N)
            {
                printf("%d", N);
            }
            else
            {
                if (j == 2)
                {
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }


    for (int i = 1; i <= N; i++)
    {
        printf("%d", N);
    }
    printf("\n");
    return 0;
}
