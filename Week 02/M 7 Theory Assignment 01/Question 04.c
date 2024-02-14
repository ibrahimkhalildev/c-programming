#include <stdio.h>
int main()
{
    int n, mod;
    int sum = 0;

    printf("Please enter a Number: \n");
    scanf("%d", &n);

    while (n > 0)
    {
        mod = n % 10;
        sum = sum + mod;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}
