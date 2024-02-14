#include <stdio.h>

void recursive_function(int n);

int main()
{
    recursive_function(10);
    return 0;
}

void recursive_function(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        recursive_function(n - 1);
    }
}
