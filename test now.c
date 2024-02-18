#include <stdio.h>

int calculateSum(int N)
{
    int sum = 0;
    int num = 1;
    int count = 0;
    int sign = 1;

    for (int i = 1; i <= N; i++)
    {
        sum += sign * num;
        num++;
        count++;

        if (count == 3)
        {
            count = 0;
            sign = -sign;
        }
    }

    return sum;
}

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = calculateSum(N);

    printf("Sum of the %dth element: %d\n", N, sum);

    return 0;
}
