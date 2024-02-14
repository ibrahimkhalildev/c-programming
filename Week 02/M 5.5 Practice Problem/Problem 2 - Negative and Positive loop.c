#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    if (n <= 1)
    {
        for (i = 1; i >= n; i--)
        {
            printf("%d ", i);
        }
    }
    else if (n >= 1)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
