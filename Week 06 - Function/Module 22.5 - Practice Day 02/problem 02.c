#include <stdio.h>
#include <string.h>

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

int get_next_prime(int current)
{
    int next_num = current + 1; // Next time see it.
    while (!is_prime(next_num))
    {
        next_num++;
    }
    return next_num;
}

void print_pattern(int n)
{
    int prime = 2;
    for(int i =0; i<n; i++)
    {
        int num = prime;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num);
            prime = get_next_prime(prime);
            num = prime;
        }
        printf("\n");
    }
}

int main(void)
{
    int n;
    printf("Input a Number: \n");
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}