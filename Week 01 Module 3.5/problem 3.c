#include <stdio.h>
int main()
{
    int a;

    printf("Please input a number: \n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}