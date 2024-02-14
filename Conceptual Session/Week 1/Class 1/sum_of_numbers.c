#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d b = %d c = %d\n", a, b, c);

    // printf("%d %d %d\n", a + b + c);

    int sum = a + b + c;
    printf("%d", sum);
    return 0;
}