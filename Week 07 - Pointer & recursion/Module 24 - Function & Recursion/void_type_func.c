#include <stdio.h>

void solve()
{
    int a, b;
    scanf("%d %d", &a,&b);
    int sum = a+b;
    printf("Sum of Two Number:  %d\n", sum);
}

int main()
{

    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
