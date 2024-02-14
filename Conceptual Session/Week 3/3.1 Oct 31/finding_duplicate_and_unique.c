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

    int largest = input[0];
    for (i = 1; i < n; i += 1)
    {
        if (input[i] > largest)
        {
            largest = input[i];
        }
    }

    int arr[largest + 1];

    for (i = 0; i <= largest; i += 1)
    {
        arr[i] = 0;
    }

    for (i = 0; i < n; i += 1)
    {
        arr[input[i]] += 1;
    }

    int duplicate = 0, unique = 0;
    for (i = 1; i <= largest; i += 1)
    {
        if (arr[i] == 1)
            unique += 1;
        else if (arr[i] > 1)
            duplicate += 1;
    }
    printf("Total Duplicate elements found = %d\n", duplicate);
    printf("Total Unique elements found = %d\n", unique);
    return 0;
}
