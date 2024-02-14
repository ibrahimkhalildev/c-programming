#include <stdio.h>
int main()
{
    int N = 5;
    int arr[N];
    int i;
    printf("Enter 5 Numbers: \n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The max Number is %d", max);

    return 0;
}
