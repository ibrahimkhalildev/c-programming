#include <stdio.h>
// https://docs.google.com/document/d/1wFv0Hv5pvqf2VGm4DG_Q6chRI4mVKFlR/edit

int sum_of_three_args(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int num1, num2;

    printf("Input No. one: \n");
    scanf("%d", &num1);
    printf("Input No. two: \n");
    scanf("%d", &num2);

    int result = sum_of_three_args(num1, num2, 5);

    printf("Sum of a, b and c is %d.", result);

    return 0;
}
