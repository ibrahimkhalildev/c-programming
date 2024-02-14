#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter A, B and C: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("A is Bigger.");
    }
    else if (b > a && b > c)
    {
        printf("B is Bigger.");
    }
    else if(c>a && c>b)
    {
        printf("C is Bigger.");
    }

    else if (a && b > c)
    {
        printf("A and B both are bigger.");
    }
    else if (b && c > a)
    {
        printf("B and C both are bigger.");
    }
    else if(a && c > b)
    {
        printf("A and C both are bigger.");
    }
    else
    {
        printf("All are Equal!");
    }

    return 0;
}
