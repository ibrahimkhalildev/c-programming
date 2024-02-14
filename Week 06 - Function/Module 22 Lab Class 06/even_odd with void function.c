#include <stdio.h>


void find_parity(x)
{
    if (x%2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    find_parity(n);
}
