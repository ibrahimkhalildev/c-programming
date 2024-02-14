#include <stdio.h>

void sortArray(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void)
{
    int N;
    printf("Input Array Size = ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d positive Integer = ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, N);

    printf("Short Array in ascending Order: ");
    for(int i =0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}