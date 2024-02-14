#include <stdio.h>
int main()
{
    int i,j;

    i=0;
    while(i<13)
    {
        // Print 5 Stars
        // printf("*****");

        j = 0;
        while(j<8)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i ++;
    }

    return 0;
}
