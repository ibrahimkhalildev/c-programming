#include <stdio.h>

int main()
{
    int i, j, sum;

    int arry[10];
    for(i=0; i<10; i++)
    {
        scanf("%d",&arry[i]);
    }
    //Finding max element from Array
    int maxx=arry[0];
    for(i=1; i<10; i++)
    {
        if(arry[i] > maxx)
            maxx= arry[i];
    }
    printf("The Max Value is = %d",maxx);

        // 10 25 45 33 25 541 99 33 54 66

        // int arry[6] = {0, 0, 0, 0, 0,0};
        // arry[1] = 50;
        // arry[4] = arry[1]+9;

        // for(i=0; i<6; i++)
        // {
        //     printf("%d ", arry[i]);
        // }

        return 0;
}
