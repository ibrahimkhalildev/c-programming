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

    int cnt = 0;
    for (i = 1; i <= largest; i += 1)
    {
        if (arr[i] == 1)
        {
            cnt += 1;
        }
        if (cnt == 4)
        {
            printf("The 4th Minimum value is %d\n", i);
            break;
        }
    }

    return 0;
}