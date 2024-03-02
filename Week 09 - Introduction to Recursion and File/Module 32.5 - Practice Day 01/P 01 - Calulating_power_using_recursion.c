#include <stdio.h>

int power(int n, int m);
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int result = power(n, m);

    printf("%d", result);

    return 0;
}

int power(int n, int m)
{
    if (m == 0)
        return 1;
    else
    {
        return n* power(n, m-1);
    }
}