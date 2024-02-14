#include <stdio.h>

void find_max_min(int ara[], int size, int *p, int *q)
{
    *p = ara[0];
    *q = ara[0];
    int i;
    for (i = 0; i < size; i++)
    {
        if (ara[i] > *p)
            *p = ara[i];
        if (ara[i] < *q)
            *q = ara[i];
    }
}

int main()
{
    int ara[] = {10, 66, 99, 61, 40, 3, 2, 88};
    int size_of_array = sizeof(ara) / sizeof(int);

    int maxx, minn;
    find_max_min(ara, size_of_array, &maxx, &minn);

    printf("%d %d\n", maxx, minn);

    return 0;
}
