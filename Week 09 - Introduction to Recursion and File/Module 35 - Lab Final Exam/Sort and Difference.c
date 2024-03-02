#include <stdio.h>

void sort_array_asce(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort_array_desc(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j +1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int arr1[N], arr2[N];
    int difference[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr2[i]);
    }

    sort_array_asce(arr1, N);
    sort_array_desc(arr2, N);

    for (int i = 0; i < N; i++)
    {
        difference[i] = arr1[i]- arr2[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("%d ", difference[i]);
    }
    

    return 0;
}
