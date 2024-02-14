#include <stdio.h>

void ptrint_divisors(int num)
{
    printf("Divisors of %d are = ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main(void)
{
    int N;
    printf("Input an Integer Number: \n");
    scanf("%d", &N);
    if (N <= 0)
    {
        printf("%d is not a non negative integer Number!", N);
        return 1;
    }
    ptrint_divisors(N);
}
