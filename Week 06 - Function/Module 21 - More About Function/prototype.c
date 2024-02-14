#include <stdio.h>

float max_of_three(float x, float y, float z);

int main()
{
    float a, b, c, i, m;

    for ( i = 0; i < 3; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        m = max_of_three(a, b, c);
        printf("The maximum value is %0.2f\n", m);
    }

    return 0;
}

float max_of_three(float x, float y, float z)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}
