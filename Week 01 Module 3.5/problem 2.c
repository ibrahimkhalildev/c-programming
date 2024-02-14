#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter A, B
     and C: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("A is Bigger.");
    }
    else if(b>a && b>c)
    {
        printf("B is Bigger.");
    }
    else
    {
        printf("C is Bigger.");
    }
    return 0;
}