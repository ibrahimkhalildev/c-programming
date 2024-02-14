#include <stdio.h>
#include <limits.h>

int main()
{
    int i, j;
    int a[8] = {5, 4, 5, 7, 2, 1, 4, 7};
    int max = INT_MIN;

    for (i = 0; i < 8; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    // printf("Array Max Element = %d", max);
    int freq[max + 1];

    for (i = 0; i <= max; i++)
        freq[i] = 0;
    // The Question is here. How increasing freq[a[i]]++ without condition!
    for (i = 0; i < 8; i++)
        freq[a[i]]++;

    for (i = 0; i <= max; i++)
    {
        // if(freq[i] != 0)
        //     printf("Index = %d & Value = %d\n",i, freq[i]);

        // if (freq[i] != 0)
        //     printf("%d ", i);

        if (freq[i] != 0)
            for (j = 1; j <= freq[i]; j++)
            {
                printf("%d ", i);
            }
    }

    return 0;
}
