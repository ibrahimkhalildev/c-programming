#include <stdio.h>

int sum_machine(int n1, int n2)
{
    int sum = n1 + n2;

    return sum;
}

void prinf_worker(int num)
{
    printf("%d\n", num);
}
int main()
{
    int a = 10;
    int b = 3;

    int sum = sum_machine(a, b);
    prinf_worker(sum);

    int sum_another = sum_machine(250, 250);
    prinf_worker(sum_another);

    // printf("%d", sum);
    // return sum;
}
