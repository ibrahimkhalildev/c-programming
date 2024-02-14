#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5, b = 10;
    printf("a = %d, b = %d\n", a, b);
    int temp;

    // temp = a;
    // a = b;
    // b = temp;

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
    return 0;
}
