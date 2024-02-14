#include <stdio.h>

int main()
{
    int a;
    int b;
    a = 19;
    b = 99;
    int *p, *q, *r;
    p = &a;
    q = &b;
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%d\n", *q);

    int ara[3] = {99, 103, 166};
    printf("%p\n", (ara+6));

    return 0;
}
