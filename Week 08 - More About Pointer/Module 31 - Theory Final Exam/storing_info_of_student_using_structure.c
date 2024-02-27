#include <stdio.h>
struct student
{
    char name[60];
    int roll_number;
    int marks;
};

int main()
{
    struct student new_student;

    printf("Enter Student Information: \n");
    printf("Enter Name: ");
    scanf("%s", &new_student.name);
    printf("Enter Roll Number: ");
    scanf("%d", &new_student.roll_number);
    printf("Enter Marks: ");
    scanf("%d", &new_student.marks);

    printf("\n\nDisplaying Information: \n");
    printf("Name: %s\nRoll number: %d\nMarks: %d\n", new_student.name, new_student.roll_number, new_student.marks);
    return 0;
}
