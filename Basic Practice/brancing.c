#include<stdio.h>
int main()
{
    int x;
    printf("Please enter any Number: ");

    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Your given Input Number is Even.\n");
    }
    else
    {
        printf("Your given Input Number is Odd.\n");
    }

    return 0;
}

