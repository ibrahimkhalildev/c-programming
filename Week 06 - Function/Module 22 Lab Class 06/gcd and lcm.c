#include <stdio.h>
// https://phitron.io/ph232/video/ph232-22-5-practice-problem-5
int gcd(int m, int n)
{
    int i;
    for (i = m; i >= 1; i--)
    {
        if (m % i == 0 && n % i == 0)
            return i;
    }
}
int lcm(int m, int n)
{

    return (m*n) / gcd(m,n);
    // int i;
    // for (i=m;; i++)
    // {
    //     if (i%m == 0 && i%n == 0)
    //         return i;
    // }
}

int main()
{
    int a, b; // a=7, b=14
    scanf("%d %d", &a, &b);
    int i, ans, ans2;
    ans = gcd(a, b);
    ans2 = lcm(a, b);
    printf("GCD is %d\n", ans);
    printf("LCM is %d\n", ans2);
    return 0;
}

// /
// /
// /
// /
// /
// /
// /

// /
// /
// /
// /

// /
// /
// /

// #include <stdio.h>

// int main()
// {
//     int a, b; // a=7, b=14
//     scanf("%d %d", &a, &b);
//     int i, gcd;

//     //for (i = 1; i <= a; i++)
//     for (i = a; i >= 1; i--)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             gcd = i;
//             break;
//         }
//     }
//     printf("GCD is %d", gcd);

//     return 0;
// }
