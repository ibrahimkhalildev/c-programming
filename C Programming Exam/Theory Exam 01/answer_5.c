#include <stdio.h>
int main()
{

    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (n > 1)
    {
        printf("%d, ", n);
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n - 1;
        }
    }
    printf("%d\n", n);

    return 0;
}
