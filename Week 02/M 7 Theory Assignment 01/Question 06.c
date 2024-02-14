#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first Number: ");
    scanf("%d", &num1);
    printf("Enter the second Number: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0)
    {
        printf("The First Number is Divisible by Second Number.");
    }
    else if (num2 % num1 == 0)
    {
        printf("The Second Number is Divisible by First Number.");
    }
    else
    {
        printf("None of them are divisible by the other.");
    }
    return 0;
}
