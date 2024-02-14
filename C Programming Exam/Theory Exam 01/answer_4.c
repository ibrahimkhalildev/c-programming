#include <stdio.h>

int main()
{
    int number, mod;
    int sum = 0;
    printf("Input a number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        mod = number % 10;
        sum = sum + mod;
        number = number / 10;
    }
    printf("%d", sum);

    return 0;
}
