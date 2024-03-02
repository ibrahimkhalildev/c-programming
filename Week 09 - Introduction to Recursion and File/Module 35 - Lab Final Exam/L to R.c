#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_prime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void prime_Between(int L, int R)
{
    if (L == 1)
    {
        printf("1 ");
        L++;
    }
    for (int num = L; num <= R; num++)
    {
        if (is_prime(num))
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int L, R;
        scanf("%d %d", &L, &R);
        prime_Between(L, R);
    }

    return 0;
}