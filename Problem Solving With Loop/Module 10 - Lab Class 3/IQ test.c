#include <stdio.h>
int main()
{
    int ara[105];
    int n, i, ans;
    int even_counter = 0, odd_counter = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ara[i]);
    }

    // printf("%d", ara[4]);

    for (i = 1; i <= n; i++)
    {
        if (ara[i] % 2 == 0)
        {
            even_counter++;
        }
        else
        {
            odd_counter++;
        }
    }

    // printf("Even %d, Odd %d", even_counter, odd_counter);

    if (even_counter == 1)
    {
        for (i = 1; i <= n; i++)
        {
            if (ara[i] % 2 == 0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (ara[i] % 2 != 0)
            {
                ans = i;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
