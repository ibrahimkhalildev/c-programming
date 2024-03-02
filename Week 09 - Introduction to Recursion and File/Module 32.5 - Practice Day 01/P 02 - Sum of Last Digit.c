#include <stdio.h>

int sum_of_last_digit(int n, int arr[])
{
    if (n == 0)
        return 0;
    else
    {
        int sum_of_last_digits = arr[n - 1] % 10;
        return sum_of_last_digits + sum_of_last_digit(n-1, arr);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int summ = sum_of_last_digit(n, arr);

    printf("%d\n", summ);

    return 0;
}
