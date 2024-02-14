#include <stdio.h>
int main()
{
    int n, i, w, sum = 0;
    printf("Enter the Number of Passanger: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &w);
        sum += w;
        // printf("Total weight is %d kg", sum);
    }
    printf("Total weight is %d kg", sum);
}