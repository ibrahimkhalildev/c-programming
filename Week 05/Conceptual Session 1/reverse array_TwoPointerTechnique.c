#include <stdio.h>
#include <limits.h>

int main()
{
    int size, i, j;
    scanf("%d", &size);

    int a[size];

    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for ( i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
