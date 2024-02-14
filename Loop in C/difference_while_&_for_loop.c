#include <stdio.h>
int main()
{

    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (n > 1)
    {
        printf("-->%d\n", n);
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }

    printf("----->%d\n", n);

    // // For Loop Start from here
    // int i;
    // for (i = 1; i <= 50; i +=10)
    // {
    //     printf("%d Nos. For Loop\n",i);
    // }

    return 0;
}
