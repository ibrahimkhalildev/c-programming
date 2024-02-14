#include <stdio.h>

float GET_PI(void)
{
    return 3.1416;
}

int main(void)
{
    float PI = GET_PI();
    printf("%f", PI);
}
