#include <stdio.h>

void recursive_function(int n); //Function prototype

int main()
{
    recursive_function(4);
    printf("\n");
    return 0;
}

void recursive_function(int n)
{
    if(n>0)
    {
        recursive_function(n-1);
        printf("%d ", n);
    }
}
