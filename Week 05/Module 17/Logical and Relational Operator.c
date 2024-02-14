#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;

    a = 5;
    b = 9;
    d = 5;
    c = (a<b)+(a==d);

    printf("Result = %d", c);
    return 0;
}
