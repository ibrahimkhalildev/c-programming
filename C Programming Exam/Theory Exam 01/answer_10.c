#include <stdio.h>
int main()
{
    int a, b, c = 0;
    printf("Input a number: ");
    scanf("%d", &b);
    for (a = 1; a <= b; a++)
    {
        if (b % a == 0)
            c = c + 1;
    }
    if (c != 2)
        printf("Composite");

    else
        printf("Prime");
    return 0;
}
