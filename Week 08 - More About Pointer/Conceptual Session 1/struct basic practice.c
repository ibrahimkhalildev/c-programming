#include <stdio.h>
struct person
{
    int id;
    // char name[50];
    float slary;
};

void display(struct person p)
{
    printf("ID -> %d\nSalary -> %.2f\n", p.id, p.slary);
}

int main()
{
    struct person p1, p2, p3;

    p1.id = 52;
    // p1.name = "Ibrahim Khalil";
    p1.slary = 98500.50;
    p3.id = 41;
    p3.slary = 84553.26;

    display(p1);
    printf("\n");
    display(p3);
    return 0;
}
