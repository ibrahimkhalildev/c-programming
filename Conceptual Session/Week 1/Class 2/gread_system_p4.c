#include <stdio.h>
int main()
{
    int marks;
    printf("Input your Marks here: ");
    scanf("%d", &marks);

    // Main condition is starting from here.
    if (marks >= 0 && marks <= 32)
        printf("F");

    else if (marks >= 33 && marks <= 39)
        printf("D");

    else if (marks >= 40 && marks <= 49)
        printf("C");

    else if (marks >= 50 && marks <= 0)
        printf("B");

    else if (marks >= 60 && marks <= 69)
        printf("A-");

    else if (marks >= 70 && marks <= 79)
        printf("A");
    else if (marks>=80 && marks<=100)
        printf("A+");
    else
    printf("Wront Entry! Enter between 0 to 100.");


    return 0;
}
