#include <stdio.h>

void print_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int i;
    for(i=1; i<=5; i++)
    print_pattern(i);

    return 0;
}
