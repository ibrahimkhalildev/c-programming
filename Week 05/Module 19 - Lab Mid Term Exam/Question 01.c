#include <stdio.h>
// https://www.hackerrank.com/contests/lab-mid-term-exam-batch-02/challenges/divide-again
int main()
{
    //Divide Again!
    int N;
    scanf("%d", &N);

    if (N % 3 == 0)
    {
        printf("%d\n", N / 3);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
