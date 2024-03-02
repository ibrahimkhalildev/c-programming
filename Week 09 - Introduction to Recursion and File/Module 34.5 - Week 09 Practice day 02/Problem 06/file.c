#include <stdio.h>

int is_Leap_Year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    FILE *input_File = fopen("input.txt", "r");
    FILE *log_File = fopen("log.txt", "a");
    if (input_File == NULL)
    {
        printf("File not foud!\n");
        return 0;
    }

    int year;

    while (fscanf(input_File, "%d", &year) != EOF)
    {
        if (is_Leap_Year(year))
        {
            fprintf(log_File, "%d-->Yes\n", year);
        }
        else
        {
            fprintf(log_File, "%d-->No\n", year);
        }
    }

    return 0;
}
