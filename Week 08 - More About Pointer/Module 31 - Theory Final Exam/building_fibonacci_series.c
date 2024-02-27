#include "stdio.h"

int main()
{
    int n;
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int next;

    printf("%d %d", a, b);
    for (int i = 3; i <= n; ++i)
    {
        next = a + b;
        printf(", %d", next);

        a = b;
        b = next;
    }

    return 0;
}
