#include <stdio.h>

void swap(int *arr, int L, int R);

int main()
{

    int n, Q, L, R;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++)
    {
        scanf("%d %d", &L, &R);
        swap(arr, L, R);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int *arr, int L, int R)
{
    int  temp = arr[L-1];
    arr[L-1] = arr[R-1];
    arr[R-1] =temp;
}
