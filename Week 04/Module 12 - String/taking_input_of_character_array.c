#include <stdio.h>
int main()
{
    // printf("Type your name below:\n");
    char my_name[] = "Ibrahim Khalil";
    // scanf("%s", my_name);
    my_name[0] = 'A';
    my_name[5] = 'a';
    my_name[14] ='\0';

    printf("Your name is %s", my_name);

    return 0;
}
