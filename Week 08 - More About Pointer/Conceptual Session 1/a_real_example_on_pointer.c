#include <stdio.h>
struct phitron_Student
{
    char name[50], email[50], date[20];
    float marks;
};
int n = 2;
struct phitron_Student heroes[1];

void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("\nInformations for Hero %d\n", i + 1);
        printf("Name = %s\n", heroes[i].name);
        printf("Email = %s\n", heroes[i].email);
        printf("Date = %s\n", heroes[i].date);
        printf("Marks = %0.2f\n", heroes[i].marks * 0.9);
    }
}
int main()
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Information for Hero %d\n", i + 1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(heroes[i].name);
        printf("Eneter Email: ");
        fflush(stdin);
        gets(heroes[i].email);
        printf("Enter Date: ");
        fflush(stdin);
        gets(heroes[i].date);
        printf("Enter Marks: ");
        scanf("%f", &heroes[i].marks);
    }
    printf("\n");
    display();

    return 0;
}
