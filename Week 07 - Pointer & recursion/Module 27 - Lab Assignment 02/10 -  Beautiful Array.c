#include <stdio.h>
#include <math.h>

char *check_beautiful_or_ugly(int n, int arr[]);

int main()
{
    int n;
    printf("Input Size of Array: \n");
    scanf("%d", &n);

    printf("Input Array Elements: \n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    char *resul = check_beautiful_or_ugly(n, arr);
    printf("%s\n", resul);

    return 0;
}

char *check_beautiful_or_ugly(int n, int arr[])
{
    int count = 0;
    for (int *ptr = arr; ptr < arr + n; ptr++)
    {
        int num = *ptr;
        while (num > 0)
        {
            if (num % 10 == 7)
            {
                count++;
                break;
            }
            num /= 10;
        }
    }
    if (count >= ceil((float)n / 2))
    {
        return "Beautiful";
    }
    else
    {
       return "Ugly";
    }
}