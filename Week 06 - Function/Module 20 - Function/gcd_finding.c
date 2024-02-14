#include <stdio.h>

int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ans = my_gcd(a,b);
    printf("The gcd is = %d\n", ans);
    return 0;
}
