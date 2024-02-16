#include <stdio.h>

int sum_of_nums_at_ends_zero(int arr[], int N);

int main()
{
    int N;
    printf("Input a Number: ");
    scanf("%d", &N);

    int arr[N];
    printf("Input Array Elements: \n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sum_of_nums_at_ends_zero(arr, N);
    printf("Sum is %d\n", result);

    return 0;
}

int sum_of_nums_at_ends_zero(int arr[], int N)
{
    int summ = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 10 == 0)
            summ += arr[i];
    }
    return summ;
}
