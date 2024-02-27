#include <stdio.h>
struct Student
{
    float weight;
    int roll;
    int age;
};

int main()
{
    struct Student s = {.roll = 12, .weight = 81.93, .age = 15};
    struct Student s2 = {.roll = 15, .weight = 74.58, .age = 18};

    struct Student *sp;
    struct Student *sp2;

    sp = &s;
    sp2 = &s2;
    printf("Roll = %d\nWeight = %0.2lf\nAge = %d\n\n", sp->roll, sp->weight, sp->age);
    printf("Roll = %d\nWeight = %0.2lf\nAge = %d\n\n", sp2->roll, sp2->weight, sp2->age);

    // printf("%d\n\n", sizeof(struct Student));
    // printf("%p\n%p\n", sp2, &s2);

    return 0;
}
