#include <stdio.h>

int main()
{
    int N = 8;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_ara[8];
    int i;

    for (i = 0; i < 8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    int min, min_index;

    for (int j = 0; j < N; j++)
    {
        min = ara[0];
        min_index = 0;
        for (i = 0; i < 8; i++)
        {
            if (ara[i] < min)
            {
                min = ara[i];
                min_index = i;
            }
        }
        sorted_ara[j] = min;
        ara[min_index] = 9999;

        // for (i = 0; i < 8; i++)
        // {
        //     printf("%d ", ara[i]);
        // }
        // printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", sorted_ara[i]);
    }

    return 0;
}
