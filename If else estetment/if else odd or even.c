#include <stdio.h>
int main()
{
    int x;
    printf("Enter a Number: \n");
    scanf("%d", &x);
    // Detecting Even or Odd Number.
    if(x%2==0)
    {
        printf("The Number (%d) is Even.", x);
    }
    else
    {
        printf("The Number(%d) is Odd.", x);
    }
    return 0;
}