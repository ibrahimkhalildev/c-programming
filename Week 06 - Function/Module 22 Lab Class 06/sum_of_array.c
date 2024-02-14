#include <stdio.h>
//https://phitron.io/ph232/video/ph232-22-4-practice-problem-4
int sum_the_array(int n, int nums[])
{
    int summ =0;
    for (int i = 0; i < n; i++)
    {
        summ+= nums[i];
    }
    return summ;
}

int main()
{

    int ara[] = {154, 544, 454, 175, 65, 415, 41, 88, 44};

    int summ = sum_the_array(9, ara);

    printf("Sum of Array elements = %d\n", summ);

    return 0;
}
