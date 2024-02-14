#include <stdio.h>

int median_array(int arr[], int n)
{
    int sorted[n];
    for (int i = 0; i < n; i++)
    {
        sorted[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (sorted[j] > sorted[j + 1])
            {
                int temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
        return (sorted[n/2-1] + sorted[n/2]) /2.0;
    }
    else
    {
        return sorted[n/2];
    }
}

int main()
{
    int arr[] = {14, 29, 56, 12, 13, 21, 23, 23, 23, 23, 5, 40, 7, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    float median = median_array(arr, n);

    printf("Median value of the Array is %.2f\n", median);
}
