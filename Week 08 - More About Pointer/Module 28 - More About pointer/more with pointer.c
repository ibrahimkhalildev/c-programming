#include <stdio.h>

void func(int a, int b, int *p, int *q)
{

    *p = a>b?a:b;
    *q = a<b?a:b;
    // if(a>b)
    // {
    //     *p = a;
    //     *q = b;
    // }
    // else
    // {
    //     *p = b;
    //     *q = a;
    // }
}

int main()
{
    int a = 50;
    int b = 9000;
    int *maxx;
    int *minn;
    //printf("Max = %d \nMin = %d\n", maxx, minn);
    func(a, b, &maxx, &minn);

    printf("Max = %d \nMin = %d\n", maxx, minn);

    return 0;
}
