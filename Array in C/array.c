#include <stdio.h>

int main()
{
    int ary[20];

    ary[0] = 91;
    ary[1] = 9;
    ary[2] = ary[0] + ary[1];
    ary[3] = 50;
    ary[17] = 55;
    ary[18] = 55;
    ary[19] = ary[17] * ary[18];

    printf("%d\n", ary[0]);
    printf("%d\n", ary[1]);
    printf("%d\n", ary[2]);
    printf("%d\n", ary[3]);
    printf("%d\n", ary[17]);
    printf("%d\n", ary[18]);
    printf("%d", ary[19]);
    return 0;
}
