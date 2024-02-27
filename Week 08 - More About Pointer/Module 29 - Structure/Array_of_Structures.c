#include <stdio.h>

struct Student
{
    double weight;
    int roll;
};

int main()
{
    struct Student s[10];

    for (int i = 0; i < 10; i++)
    {
        s[i].roll = 11 + i;
        s[i].weight = 62.516 + i * 3;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Roll = %d\nWeight = %0.3lf\n", s[i].roll, s[i].weight);
    }

    // s[0].roll = 11;
    // s[0].weight = 65.14;

    // s[1].roll = 05;
    // s[1].weight = 79.43;

    // s[2].roll = 17;
    // s[2].weight = 55.17;

    // printf("%d");

    return 0;
}
