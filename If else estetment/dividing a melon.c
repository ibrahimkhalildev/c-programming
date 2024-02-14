#include <stdio.h>
int main()
{
    int w;
    printf("Enter the weight of Melon: \n");
    scanf("%d", &w);
    
    // if(w%2 == 4) // if need to even and equal
    if(w%2 == 0 && w!=2 && w!= 0)
    {
        printf("Possible.");
    }
    else
    {
        printf("Impossible.");
    }
}