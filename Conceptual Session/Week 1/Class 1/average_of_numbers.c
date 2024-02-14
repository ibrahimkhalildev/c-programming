#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Input 3 Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("1st Number is = %d, 2nd Number is = %d and 3rd Number is = %d \n", a, b, c);

    int sum = a + b + c;
    printf("The sum is %d\n", sum);

    float average = (float)sum / 3;
    printf("The everage is %f", average);

    return 0;
}