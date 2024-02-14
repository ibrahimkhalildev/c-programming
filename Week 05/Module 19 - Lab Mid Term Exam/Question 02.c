#include <stdio.h>

// https://www.hackerrank.com/contests/lab-mid-term-exam-batch-02/challenges/operator-3
int main()
{
    char S[20];

    int a, b, i, sum = 0;

    scanf("%s", S);
    scanf("%d %d", &a, &b);

    for (i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == '+')
        {
            sum += a + b;
        }
        else if (S[i] == '*')
        {
            sum += a * b;
        }
    }
    printf("%d", sum);

    return 0;
}
