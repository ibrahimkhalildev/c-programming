#include <stdio.h>

int main()
{
    int n, i, w;
    int sum = 0;
    printf("Enter Passenger Numbers: ");

    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        scanf("%d", &w);
        sum += w;
        i++;
    }
    printf("Total sum of weight is %d", sum);
    return 0;
}
