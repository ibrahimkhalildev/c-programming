#include <stdio.h>
int main()
{
    int N = 5;
    int arr[N];
    int i;

    printf("Please enter 5 Numbers: \n");
    for(i=0; i<N; i++)
    { 
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(i = 0; i< N; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The minimum value is %d", min);
    return 0;
}