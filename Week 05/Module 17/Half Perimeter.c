#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    printf("Print the three side of a triangle: \n");
    scanf("%d %d %d", &a, &b, &c);

    float s;
    s = (a + b + c) / 2.0;
    printf("Half Perimeter: =%f", s);
    double area;
    area = s * (s - a) * (s - b) * (s - c);
    area = sqrt(area);

    printf("\nArea = %lf", area);

    return 0;
}
