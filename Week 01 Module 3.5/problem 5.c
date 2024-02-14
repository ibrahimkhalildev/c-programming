
#include <stdio.h>

int main() {
    printf("Please Enter the Subject Number: \n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //Tringle 
    if(a && b && c != 0 && a + b > c  && b + c > a)
    {
        printf("Yes");
    }
    else
    {
         printf("No");   
    }   
    return 0;
}