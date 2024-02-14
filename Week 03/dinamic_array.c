#include <stdio.h>
int main()
{
    int N = 5;
    int arr[N];
    int i;

    printf("Enter 5 Numbers: \n");
    for( i = 0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for( i = 0; i<N; i++)
    {
        printf("%d th positin array value = %d\n", i, arr[i]);
    }

    return 0;
}
