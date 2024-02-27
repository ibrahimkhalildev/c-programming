#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[100];
    int age;
    float weight;
};
int main()
{

    struct Student s1;
    s1.roll = 35;
    strcpy(s1.name, "Ibrahi Khalil"); // Use of String copy method.
    s1.age = 30;
    s1.weight = 64.54;

    struct Student s2 = {14, "Kalif Mamun", 34, 54.56};

    printf("Student 1 Info: \n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %0.2f\n\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("Student 2 Info: \n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %0.2f\n\n", s2.roll, s2.name, s2.age, s2.weight);


    return 0;
}
