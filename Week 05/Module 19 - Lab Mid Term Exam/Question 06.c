#include <stdio.h>

// https://www.hackerrank.com/contests/lab-mid-term-exam-batch-02/challenges/plus-minus-7-1/problem
int main()
{
    int n;
    scanf("%d", &n);

    char signs[n + 1];  // +1 for the null terminator
    scanf("%s", signs);

    int max_sign = 0;
    int current_sign = 0;

    for (int i = 0; i < n; i++)
    {
        if (signs[i] == '+')
        {
            current_sign++;
        }
        else
        {
            current_sign = 0;
        }

        if (current_sign > max_sign)
        {
            max_sign = current_sign;
        }
    }

    printf("%d\n", max_sign);

    return 0;
}
