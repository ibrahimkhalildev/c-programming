#include <stdio.h>

int mySum_Machine(int x, int y)
{
    printf("Summig two Numbers....\n");

    return x + y;
}

int main()
{
    // myFunction(10);
    int a, b;
    a = mySum_Machine(10, 20);
    printf("%d\n", a);

    b = mySum_Machine(30, 29);
    printf("%d\n", b);
    return 0;
}
