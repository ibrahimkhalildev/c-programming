#include <stdio.h>
int main()
{
    int a;
    printf("Input a Number to check Even or Odd: ");
        scanf("%d", &a);

    if (a % 2 == 0)
        printf("The number is Even");
    else
    printf("The number is Odd. ");

return 0;
}
