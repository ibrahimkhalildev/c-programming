#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int summ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        summ += a;
    }
    printf("%d", summ);
    return 0;
}