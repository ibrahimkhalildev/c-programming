#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed!");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d th Postition => %d\n", i, *(ptr + i));
        }
        // ptr = realloc(ptr, (n+5)*sizeof(int)); // Memory re Allocation

        free(ptr);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d th position => %d\n", i, arr[i]);
    // }

    return 0;
}
