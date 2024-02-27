#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    struct student new_student;
    new_student.roll = 50;
    new_student.marks = 98;

    struct student *ptr_student;
    ptr_student = &new_student;
    ptr_student->roll = 22;
    ptr_student->marks = 88;

    printf("Struct Info Usint Dot\n");
    printf("Student Roll = %d\nStudent Number = %d\n\n", new_student.roll, new_student.marks);
    printf("Struct Info Using Dash and Arrow Sign (->)\n");
    printf("Student Roll = %d\nStudent Number = %d\n", new_student.roll, new_student.marks);
    return 0;
}
