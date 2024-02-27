#include <stdio.h>

int main()
{

    int a = 7;
    double b = 5.95;

    int *pi;
    double *pd;

    pi = &a;
    pd = (double *)pi;

    printf("%d - %lf\n", a, b);
    printf("%p - %p\n", &a, &b);
    printf("%p - %p\n", pi, pd);

    // int a = 10;
    // double b = 5.95;
    // char c = 'a';

    // a = c;
    // b = c;
    // c= 97;
    //  b = (double)25/4;

    // printf("%d - %lf - %c", a, b, c);

    return 0;
}
