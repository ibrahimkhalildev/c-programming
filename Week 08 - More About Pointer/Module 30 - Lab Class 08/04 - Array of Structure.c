#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    double marks;
};
void input_student(int n, struct student s)
{
    scanf("%d", &s.roll);
    scanf("%s", s.name);
    scanf("%lf", &s.marks);
}
void print_student(int n, struct student s)
{
    printf("\nInformation of Student %d\n", n);
    printf("Roll = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %lf\n", s.marks);
}
int main()
{
    struct student cls[5];

    for (int i = 1; i <= 5; i++)
    {
        input_student(i, cls[i]);
    }
    double summ = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (cls[i].roll % 2 == 0)
            print_student(i, cls[i]);
        summ += cls[i].marks;
    }
    printf("Total Marks %0.2lf\n", summ);
    return 0;
}

/*
12
Rakib
98

26
Rehana
78

11
Jelal
73

42
Tamanna
67

31
Litonn
41

*/
