#include <stdio.h>

int sum(int n);
int main()
{
    printf("%d\n", sum(6));

    return 0;
}
int sum(int n)
{
    if(n>0)
    {
        return sum(n-1)+n;
    }
    return 0;
}
