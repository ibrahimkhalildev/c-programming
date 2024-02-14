#include <stdio.h>

int global = 7; //Global Variable

void add_them()
{
    int a, b;
    int global = 25; //Local Varialbel
    printf("Input Two Numbers: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;

    printf("Value of global Variable: %d\n", global);
    printf("Sum of Two Numbers: %d\n", sum);
    {
        extern int global;
        printf("Global Variable in Local Scope: %d\n", global);
    }

    global = 7*2;
}

int main()
{
    add_them();
    printf("Global Variable: %d\n", global);

    return 0;
}
