#include <stdio.h>
#include <math.h>
#include 
float f(int a, int b);
int absolute(int x);

int main()
{
    int x, y, z;

    x = 12;
    y = 7;
    float ans;
    ans = f(x, y);

    printf("%f\n", ans);

    return 0;
}

float f(int a, int b)
{
    // int tempans = absolute(a - 3) + square(b + 4);
    int tempans = absolute(a - 3) + (b + 4) * (b + 4);
    return sqrt(tempans);
}
int absolute(int x)
{
    if (x >= 0)
        return x;
    else
        return (-1 * x);
}
