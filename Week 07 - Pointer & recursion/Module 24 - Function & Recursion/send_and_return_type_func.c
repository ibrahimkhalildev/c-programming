#include <stdio.h>

int take_radius()
{
    int r;
    printf("Enter the radius of a Circle: ");
    scanf("%d", &r);
    return r;
}

float calculate_area(int r)
{
    float ans = 3.14159*r*r;
    printf("Area of the circle is %f\n", ans);
    
}

int main()
{
    int r;
    r = take_radius();

    calculate_area(r);
    
    return 0;
}
