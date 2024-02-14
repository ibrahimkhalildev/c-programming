#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter Two Number: \n");
    scanf("%d %d", &x, &y);

    //Checking 
    if (x > y)
    {
        printf("X is Greater than Y.");
    }
    else
    {
        if (y > x)
            printf("Y is Greater than X");
        else
        {
            printf("Both are Equal.");
        }
    }
    return 0;
}