#include <stdio.h>

int calculating_series(int N);

int main()
{
    int N;
    printf("Input an Integer: ");
    scanf("%d", &N);

    int sum = calculating_series(N);
    printf("Sum of %dth element: %d\n", N, sum);
    return 0;
}

int calculating_series(int N)
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
