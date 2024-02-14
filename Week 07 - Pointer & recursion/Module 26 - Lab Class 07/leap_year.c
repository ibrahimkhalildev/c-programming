#include <stdio.h>

int leap_year(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int is_distinct(int n)
{
    int ld;
    int count_digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (n > 0)
    {
        ld = n % 10;
        count_digit[ld]++;
        n /= 10;
    }
    int i;
    for(i= 0; i<10; i++)
    {
        if(count_digit[i]>1)
        return 0;
    }
    return 1;
}

int main()
{
    int year;
    printf("Input a Year: ");
    scanf("%d", &year);

    int is_leap = leap_year(year);
    if (leap_year(year) == 1 && is_distinct(year) == 1)
        printf("Beautiful Leap Year.\n");

    else if (is_leap == 1 && is_distinct(year) != 1)
        printf("Ugli Leap Year!\n");
    else
        printf("Not Leap Year!\n");

    // is_distinct(5425542331);
    return 0;
}
