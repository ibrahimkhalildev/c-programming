#include <stdio.h>

int main()
{
    int i, j, sum;
    sum = 0;

    // for loop
    for (i = 0; i < 20; i+=2)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // for (i = 0; i < 50; i++)
    // {
    //     if (i % 2 == 0)
    //         sum += pow(-i, 2);
    //     else
    //         sum += pow(+i, 2);
    // }
    // printf("%d %d\n", i, sum);
    // while loop
    // while (i<10)
    // {
    //     printf("[%d] Allah, I love you.\n", i);
    //     i++;
    // }
    // printf("Vlue of i is = %d", i);

    return 0;
}
