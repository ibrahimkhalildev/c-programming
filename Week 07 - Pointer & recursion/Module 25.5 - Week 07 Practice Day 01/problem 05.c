#include <stdio.h>

int series(int n)
{
    if (n == 1)
        return 1;
    else
        return series(n - 1) + n;
}

int main()
{
    int n;
    printf("Input a Number: ");
    scanf("%d", &n);

    int i;
    int summ = series(n);
    printf("Sum of Numbers = %d\n", summ);
    return 0;
}
