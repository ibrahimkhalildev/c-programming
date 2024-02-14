#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);

    if(a%3 == 0 && a%10 ==5)
    printf("The Number %d is Beatiful", a);
    else
    printf("The Number %d in Not!", a);

    return 0;
}
