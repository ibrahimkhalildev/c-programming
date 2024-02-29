#include <stdio.h>
#include <stdlib.h>

// Function to compare for sorting in ascending order
int compare_asc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

// Function to compare for sorting in descending order
int compare_desc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    int N;
    scanf("%d", &N); // Read the size of the arrays

    int array1[N], array2[N];
    int differences[N];

    // Read the first array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array1[i]);
    }

    // Read the second array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array2[i]);
    }

    // Step 2: Sort array1 in ascending order
    qsort(array1, N, sizeof(int), compare_asc);

    // Step 3: Sort array2 in descending order
    qsort(array2, N, sizeof(int), compare_desc);

    // Step 4: Calculate differences
    for (int i = 0; i < N; i++)
    {
        differences[i] = array1[i] - array2[i];
    }

    // Step 5: Print differences
    for (int i = 0; i < N; i++)
    {
        printf("%d ", differences[i]);
    }

    return 0;
}
