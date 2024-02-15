#include <stdio.h>

int main()
{
    int *a = 10;
    int *b = &a;

    *b = 350;

    printf("%d \n%d\n", a, *b);

    return 0;
}
