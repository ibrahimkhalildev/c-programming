#include <stdio.h>
int main()
{
    int N;
    printf("Please enter a Number: \n");
    scanf("%d", &N);
    int ara[100];
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }

    int even_counter = 0;
    int odd_counter = 0;

    for(i = 0; i< N; i++)
    {
        if(ara[i] %2== 0)
        {
            even_counter ++;
        }
        else
        {
            odd_counter ++;
        }
    }
    printf("Total even number = %d \n", even_counter);
    printf("Total odd number = %d \n", odd_counter);

    return 0;
}
