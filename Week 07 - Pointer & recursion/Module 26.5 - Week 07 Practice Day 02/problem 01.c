#include <stdio.h>

void average_making_machine(int a, int b, float *avg)
{
    *avg = (float)(a+b) /2;
}

int main()
{
    int a, b;
    float avg;

    printf("Input two Integers: ");
    scanf("%d %d", &a, &b);


    average_making_machine(a, b, &avg);

    printf(" Average: %.3f\n", avg);

    return 0;
}
