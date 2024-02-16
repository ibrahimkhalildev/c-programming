#include <stdio.h>

float area_Calculator(float radius);

int main()
{
    float radius;
    printf("Input Radius of Circle: ");
    scanf("%f", &radius);

    if (radius < 0)
    {
        printf("Radius must be negative!\n");
        return 1;
    }
    float area = area_Calculator(radius);
    printf("Area of circle is: %0.6f\n", area);

    return 0;
}

float area_Calculator(float radius)
{
    float PI = 3.141592;
    float area = PI * radius * radius;
    return area;
}
