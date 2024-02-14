#include <stdio.h>

// function prototype
void sorting_Machine(int arr[], int N);
int largest(int arr[], int N, int k);
int smallest(int arr[], int N, int k);

int main()
{
    int N;
    printf("Input Array Size: ");
    scanf("%d", &N);

    printf("Input Array: ");
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter k'th position: ");
    scanf("%d", &k);

    sorting_Machine(arr, N);

    int kth_largest_elemement = largest(arr, N, k);
    int kth_smallest_element = smallest(arr, N, k);

    printf("\n%dth largest element = %d\n", k, kth_largest_elemement);
    printf("%dth smallest element = %d\n", k, kth_smallest_element);

    return 0;
}

void sorting_Machine(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
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

int largest(int arr[], int N, int k)
{
    return arr[N - k];
}

int smallest(int arr[], int N, int k)
{
    return arr[k - 1];
}
