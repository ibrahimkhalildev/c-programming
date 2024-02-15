#include <stdio.h>

int num = 1;

void print_one_to_n(int n)
{
    if(num> n)
    {
        return;
    }
    printf("%d ", num);//1
    num++;
    print_one_to_n(n);
}

int main()
{
    int n;
    printf("Input a Nubmer: ");
    scanf("%d", &n);

    print_one_to_n(n);

    return 0;
}
