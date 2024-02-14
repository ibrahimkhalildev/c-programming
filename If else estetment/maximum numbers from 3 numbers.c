#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter 3 Numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a>c)
    {
        printf("A is Large.");
    }
    else if (b > a && b > c)
    {
        printf("B is Large.");
    }
    else
    {
        printf("C is Large.");
    }

    return 0;
}