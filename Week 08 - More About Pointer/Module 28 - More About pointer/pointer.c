#include <stdio.h>

void func(int *p)
{
    *p = 25;
}
int main()
{
    int a = 5;
    func(&a);

    printf("%d", a);
}
