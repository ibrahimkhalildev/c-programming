#include <stdio.h>

int main()
{
    int a = 9;
    int *p;
    int *q;

    p = &a;
    printf("%d\n", a);
    *p = 15;
    q = p;

    *q = 13;

    printf("%d\n", a);

    return 0;
}
