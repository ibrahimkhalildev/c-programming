#include <stdio.h>

void Consecutive_Even_Numbers(int N);

int main()
{
    int i;
    scanf("%d", &i);
    while (i--)
    {
        int N;
        scanf("%d", &N);
        Consecutive_Even_Numbers(N);
    }
    return 0;
}

void Consecutive_Even_Numbers(int N)
{
    int four_nums = N / 4 - 3;
    printf("%d %d %d %d\n", four_nums, four_nums + 2, four_nums + 4, four_nums + 6);
}