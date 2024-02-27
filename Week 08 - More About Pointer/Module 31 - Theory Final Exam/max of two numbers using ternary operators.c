#include "stdio.h"

int main()
{
    int num1, num2;
    int max;

    printf("Input First Number: ");
    scanf("%d", &num1);
    printf("Input Second Number: ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("Both are Equal!\n");
    else
    {
        max = (num1 > num2) ? num1 : num2;
        printf("Maximum of Two Numbers is %d\n", max);
    }


    return 0;
}
