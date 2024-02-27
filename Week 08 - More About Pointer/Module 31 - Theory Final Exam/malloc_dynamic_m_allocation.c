#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Input Element Number: ");
    scanf("%d", &N);
    printf("\n");

    int *ptr;
    ptr = (int *)malloc(N * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation Failed!\n");
    }
    else
    {
        printf("Input Array Elements: \n");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &ptr[i]);
        }
    }
    printf("\nElements of Array: \n");
    for (int i = 0; i < N; i++)
    {
            printf("%d \n", ptr[i]);
    }
    return 0;
    printf("\n");
}
