#include <stdio.h>
int main()
{
    int long long number;
    int count = 0;

    printf("Please input a Number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    printf("%d digits", count);
    return 0;
}
