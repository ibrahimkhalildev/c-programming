#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void is_FIFA_year(int year, char result[])
{
    if (year % 400 == 0)
    {
        strcpy(result, "Yes");
    }
    else if (year % 100 == 0)
    {
        strcpy(result, "No");
    }
    else if (year % 4 == 0)
    {
        strcpy(result, "Yes");
    }
    else
    {
        strcpy(result, "No");
    }

}

int main()
{
    int year;
    char result[4];

    scanf("%d", &year);

    is_FIFA_year(year, result);

    printf("%s\n", result);

    return 0;
}

