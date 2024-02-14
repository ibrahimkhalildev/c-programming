#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Value of A and B: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("A (%d) and B (%d) both are Equal.", a, b);
    else if (a > b)
        printf("A (%d) is Greater than B (%d).\n ", a, b);
    else
        printf("B is Greater than A.\n");
}
