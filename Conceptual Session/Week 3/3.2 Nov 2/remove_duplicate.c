#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d\n", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int unique_array[n];
    int unique_array_index = 0;

    for (i = 0; i < n; i++)
    {
        int select = arr[i];
        int found = 0;

        for (j = 0; j < n; j++)
        {
            /* code */
            if (unique_array[j] == arr[i])
                found = 1;
        }
        if (found == 0)
        {
            unique_array[unique_array_index] = select;
            unique_array_index++;
        }
    }

    for (i = 0; i < unique_array_index; i++)
    {
        printf("%d ", unique_array[i]);
    }

    return 0;
}

