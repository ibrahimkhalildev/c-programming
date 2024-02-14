#include<stdio.h>

int main()
{

    int arr[5],i,sum=0;
    //int arr[5] = {1, 2, 3, 4, 5, 6}
    for(i=1; i<=5; i+=1)
    {
        arr[i-1]=i;
    }

    printf("%d\n",sum); //sum = 0 output
    for(i=1; i<=5; i+=1)
    {

        sum+=arr[i-1]; //sum = (0 + 1) = (1 + 2) = 3 + 3 = 6 + 4 = 10 + 5 = 15

    }
   // sum = 15;
printf("%d\n",sum);
    return 0;
}
