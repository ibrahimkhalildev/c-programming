#include <stdio.h>

int main()
{
    int N, i, j;
    scanf("%d", &N);

    int A[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int max_Even = 0;

    for (i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0 && A[i] > max_Even)
        {
            max_Even = A[i];
        }
        for (j = i + 1; j < N; j++)
        {
            int sum = A[i] + A[j];
            if (sum % 2 == 0 && sum > max_Even)
            {
                max_Even = sum;
            }
        }
    }
    printf("%d\n", max_Even);

    return 0;
}