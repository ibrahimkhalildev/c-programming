#include <stdio.h>

void sum_by_pointer(int *a, int *b, int *c, int *result)
{
    *result = *a + *b + *c;
}

int main()
{
    int a, b, c, result;

    printf("Input 3 Integers: \n");
    scanf("%d %d %d", &a, &b, &c);

    sum_by_pointer(&a, &b, &c, &result);

    printf("Sum: %d\n", result);
}
