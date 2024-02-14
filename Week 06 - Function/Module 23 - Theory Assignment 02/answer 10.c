#include <stdio.h>

char grade_claculator(int mark)
{
    char grade;
    if (mark >= 80 && mark <= 100)
        grade = 'A';
    else if (mark >= 60 && mark <= 79)
        grade = 'B';
    else if (mark >= 40 && mark <= 59)
        grade = 'C';
    else if (mark >= 0 && mark <= 39)
        grade = 'F';
    else
    {
        printf("Mark Should be 0 - 100! \n");
        return;
    }

    return grade;
}

int main()
{
    int mark;
    char grade;

    printf("Enter Student Mark: \n");
    scanf("%d", &mark);

    grade = grade_claculator(mark);
    if (grade != ' ')
    {
        printf("Grade: %c", grade);
    }
}