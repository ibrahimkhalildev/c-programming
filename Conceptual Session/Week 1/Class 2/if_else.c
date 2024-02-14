#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of A and B: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("A and B both are equal.\n");
    else if (a > b)
        printf("A is greater than B.");
    else
        printf("B is greater tha A");

    return 0;
}