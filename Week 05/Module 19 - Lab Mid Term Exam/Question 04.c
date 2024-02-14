#include <stdio.h>

// https://www.hackerrank.com/contests/lab-mid-term-exam-batch-02/challenges/binary-pairs
int main()
{
    int T, i;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        char S[N + 1];
        scanf("%s", S);

        int count = 0;

        for (i = 0; i < N - 1; i++)
        {
            if ((S[i] == '0' && S[i + 1] == '1') || (S[i] == '1' && S[i + 1] == '0'))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
