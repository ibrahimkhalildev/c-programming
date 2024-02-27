#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    // scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("%p\n", ptr);
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed. \n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d, \n", *(ptr + i));
        }
    }
    n = 10;
    ptr = realloc(ptr, n * sizeof(int));
    printf("%p\n", ptr);
    if (ptr == NULL)
    {
        printf("Memory Allocatin Falied!");
    }
    else
    {
        for (int i = 5; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d, ", *(ptr + i));
        }
    }
    free(ptr);
    return 0;
}
