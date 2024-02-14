#include <stdio.h>

int main()
{
    int N = 8;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_ara[8];
    int i, j, temp;

    for (i = 0; i < 8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    for (j = 0; j < N; j++)
    {
        for (i = 0; i < (N - 1); i++)
        {
            // Compare korbo ara[i] and ara[i+1]
            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1]; // for swapping
                ara[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    return 0;
}
