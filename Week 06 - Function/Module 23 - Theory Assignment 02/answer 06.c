#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double ratio_maker(int num1, int num2)
{
    unsigned long long fact1 = factorial(num1);
    unsigned long long fact2 = factorial(num2);

    if (num2 == 0)
    {
        printf("Not Possible!\n");
        return -1;
    }
    return (double)fact1 / (double)fact2;
}

int main()
{
    int num1, num2;
    printf("Enter two Integers: \n");
    scanf("%d %d", &num1, &num2);

    double ratio = ratio_maker(num1, num2);
    if (ratio != -1)
    {
        printf("Ration is: %.6lf\n", ratio);
    }

    return 0;
}
