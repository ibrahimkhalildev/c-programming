#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int input[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    printf("The result %d",input[i]);
    return 0;
}
