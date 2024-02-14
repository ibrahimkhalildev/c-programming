#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Values.");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf(a, "is greater than %d", b);
    }
    else
    {
        printf(b, "is lessthan %d", a);
    }

    return 0;
}
