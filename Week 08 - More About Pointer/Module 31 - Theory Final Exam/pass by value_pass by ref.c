#include <stdio.h>

void pass_by_value(int x, int y);
void pass_by_reference(int *x, int*y);

int main()
{
    int a = 9;
    int b = 16;
    printf("Default Value of A = %d and B %d\n", a, b);
    pass_by_value(a, b);
    printf("After Pass by value A = %d and B = %d\n", a, b);
    pass_by_reference(&a, &b);
    printf("After Pass by Reference A = %d and B = %d\n", a, b);

    return 0;
}

void pass_by_value(int x, int y)
{
    int swap = x;
    x = y;
    y = swap;
}

void pass_by_reference(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
