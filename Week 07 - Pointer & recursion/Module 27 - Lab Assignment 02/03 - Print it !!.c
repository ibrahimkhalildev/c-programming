#include <stdio.h>

void assign_value_to_pointer(int x, int y, int *strX, int *strY);

int main()
{
    int x, y;
    int *ptrX, *ptrY;

    printf("Enter 2 Integers: \n");
    scanf("%d %d", &x, &y);

    ptrX = &x;
    ptrY = &y;

    assign_value_to_pointer(x, y, ptrX, ptrY);

    printf("%d %d\n", *ptrX, *ptrY);

    return 0;
}

void assign_value_to_pointer(int x, int y, int *strX, int *strY)
{
    *strX = x;
    *strY = y;
}