#include <stdio.h>
int main()
{
    int n, i, w, sum=0;

    printf("Enter Passanger Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &w);
        sum= sum+w;
    }
    printf("Total weight is %d Kg", sum);
    return 0;
}