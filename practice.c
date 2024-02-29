#include <stdio.h>

// Function to check if the given year is a FIFA year or not
char* is_fifa_year(int year)
{
    if (year % 400 == 0)
    {
        return "Yes";
    }
    else if (year % 100 == 0)
    {
        return "No";
    }
    else if (year % 4 == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int year;

    // Taking input from the user
    printf("Enter the year: ");
    scanf("%d", &year);

    // Checking if the year is a FIFA year or not
    char* result = is_fifa_year(year);

    // Printing the result
    printf("%s\n", result);

    return 0;
}
