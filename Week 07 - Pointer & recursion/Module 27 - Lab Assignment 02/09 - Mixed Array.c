#include <stdio.h>

float Even_average(int *arr, int size);
int is_prime(int num);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int prime_counter = 0;
    float average_of_Even = Even_average(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (is_prime(arr[i]))
            prime_counter++;
    }

    printf("\nPrime Numbers: %d\n", prime_counter);
    printf("Average of all even integers: %0.2f\n", average_of_Even);

    return 0;
}

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

float Even_average(int *arr, int n)
{
    float sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    return sum / count;
}