#include <stdio.h>
int main()
{
    printf("Please take 4 distinct integers as input:\n");

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int min_num, max_num;

    min_num = a;
    max_num = a;



    if (a != b && a != c && a != d && b != a && b != c && b != d && c != a && c != b && c != d)
    {
        if (min_num > b)
            min_num = b;
        else if (max_num < b)
            max_num = b;
        if (min_num > c)
            min_num = c;
        else if (max_num < c)
            max_num = c;
        if (min_num > d)
            min_num = d;
        else if (max_num < d)
            max_num = d;
        printf("Largest = %d\n", max_num);
        printf("Smallest = %d\n", min_num);
    }
    else
        printf("Wrong input! Please take 4 distinct integers as input.");
    return 0;
}
