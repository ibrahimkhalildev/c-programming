#include <stdio.h>
int main()
{
    int n, w, i;
    int sum = 0;
    printf("Enter the number of Passengers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &w);
        sum += w;
    }
    printf("Total Sum of weights = %d", sum);

    return 0;
}
 
