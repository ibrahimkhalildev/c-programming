#include <stdio.h>

int main()
{
    int N, i, j, k, sum = 0;

    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i] %10;
    }

    printf("Sum = %d", sum);
    return 0;
}
