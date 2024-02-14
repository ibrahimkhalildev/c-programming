#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter Exam and Bonus Marks: ");
    scanf("%d %d", &a, &b);

    int totalMarks = (a + b);

    if (totalMarks >= 100)
    {
        printf("YES");
    }
    else
    {
        printf("I got %d Number in my Exam.",totalMarks);
    }

    return 0;
}
