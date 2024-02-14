// Online C compiler to run C program online


#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter two Number: \n");
    scanf("%d %d", &x, &y);
    //Detecting Grater or Lessthan Number :
    if(x>y)
    {
        printf("X (%d) is Greater than Y (%d).", x, y);
    }
    else if(x<y)
    {
        printf("Y (%d) is Greater than X (%d).", y, x);
    }
    else
    {
        printf("Both X (%d) and Y(%d) are Equal.", y, x);
    }

    return 0;

}
