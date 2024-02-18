#include <stdio.h>

// function prototypes
int total_count_divisible_by_3_and_5(int n, int arr[]);
int is_divisible_of_3(int num);
int is_divisible_of_5(int num);

int main()
{
    int n;
    printf("Input Array Size: \n");
    scanf("%d", &n);
    printf("Input Array Elements: \n");

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = total_count_divisible_by_3_and_5(n, arr);
    printf("%d\n", count);

    return 0;
}

int is_divisible_of_3(int num)
{
    return num % 3 == 0;
}
int is_divisible_of_5(int num)
{
    return num % 5 == 0;
}
int total_count_divisible_by_3_and_5(int n, int arr[])
{
    int count_of_divisible_by_3 = 0;
    int count_of_divisible_by_5 = 0;

    for (int i = 0; i < n; i++)
    {
        if (is_divisible_of_3(arr[i]) && is_divisible_of_5(arr[i]))
            count_of_divisible_by_3++;
        else if (is_divisible_of_3(arr[i]))
            count_of_divisible_by_3++;
        else if (is_divisible_of_5(arr[i]))
            count_of_divisible_by_5++;
    }
    int total_count = count_of_divisible_by_3 + count_of_divisible_by_5;
    if (total_count == 0)
        return -1;
    else
        return total_count;
}