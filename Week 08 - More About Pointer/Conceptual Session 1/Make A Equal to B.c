// https://codeforces.com/problemset/problem/1736/A
#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, z1 = 0, z2 = 0, o1 = 0, o2 = 0;
        scanf("%d", &n);

        int a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            int in;
            scanf("%d", &in);
            a[i] = in;
            if (in == 0)
                z1++;
            else
                o1++;
        }
        for (int i = 1; i <= n; i++)
        {
            int in;
            scanf("%d", &in);
            b[i] = in;
            if (in == 0)
                z2++;
            else
                o2++;
        }
        int ans = max(z1 - z2, o1 - o2);
        // printf("%d\n", ans);
        int res = ans;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != b[i])
                res--;
        }
        if (res < 0)
            printf("%d\n", ans + 1);
        else
            printf("%d\n", ans);
    }
    return 0;
}
