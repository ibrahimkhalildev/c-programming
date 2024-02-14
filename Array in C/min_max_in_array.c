#include <stdio.h>
int main()
{
    int N = 6;
    int ara[N];
    int i;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }
    int max = ara[0];
    for (i = 0; i < N; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
    }
    printf("The Max Array is %d", max);
    return 0;
}
