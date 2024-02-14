#include <stdio.h>
int main()
{
    int radius;

    printf("Enter a Radius of a Circle: ");
    scanf("%d",&radius);

    float area;
    area = 3.14159*radius*radius;
    printf("The area of the circle is %f,",area);
    return 0;
}
