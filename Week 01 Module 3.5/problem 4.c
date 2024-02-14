#include <stdio.h>

int main() {
    // Write C code here
    printf("Please Enter the Subject Number: \n");
    int a;
    scanf("%d", &a);

    if(a <=32 )
    {
        printf("F");
    }
    else if(a <= 39 )
    {
        printf("D");
    }
    else if(a <= 49)
    {
        printf("C");
    }
    else if(a <= 59)
    {
        printf("B");
    }
    else if(a <= 69)
    {
        printf("A-");
    }
    else if(a <= 79)
    {
        printf("A");
    }
    else if(a <= 100)
    {
        printf("A+");
    }
    else
    {
        printf("Enter the correct marks!");
    }
    return 0;
}