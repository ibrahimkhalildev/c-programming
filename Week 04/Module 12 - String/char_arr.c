#include <stdio.h>
int main()
{

    // char name[20];
    // scanf("%s", name);
    // printf("My name is %s", name);

    char name[] = "Ibrahim Khalil";

   //scanf("%s", name);

    name[14] = 'BB';
    name[15] = '\0';
    printf("My name is %s", name);

    return 0;
}
