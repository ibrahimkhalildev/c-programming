#include <stdio.h>

int sum_odd_odd_even_even(int n, int arr[]);

int main()
{
    int n;
    printf("Input array size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Input array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sum_odd_odd_even_even(n, arr);
    printf("Output = %d\n", result);
    return 0;
}
int sum_odd_odd_even_even(int n, int arr[])
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 == 1 && arr[i - 1] % 2 == 1) || i % 2 == 0 && arr[i - 1] % 2 == 0)
        {
            sum+=i + arr[i-1];
        }
    }
    return sum;
}
