#include <stdio.h>
int main()
{
    int i, x, N;
    int ara[200000];
    //printf("Please enter a length of Array: \n");
    scanf("%d", &N);
    for (i = 1; i < N; i++)
    {
        scanf("%d\n", &x);
        ara[x] = 1;
    }

    for (i = 1; i <= N; i++)
    {
        // printf("%d ---> %d\n", i,ara[i]);
        if (ara[i] == 0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}
