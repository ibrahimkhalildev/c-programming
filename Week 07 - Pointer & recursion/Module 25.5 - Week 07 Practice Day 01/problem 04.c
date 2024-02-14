#include <stdio.h>

void backword_number_by_recursive(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        backword_number_by_recursive(n - 1);
    }
}

int main()
{
    backword_number_by_recursive(4);
    printf("\n");

    return 0;
}
