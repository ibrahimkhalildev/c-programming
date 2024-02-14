#include <stdio.h>

int main()
{
    // char sen[] = 'A';
    // sen += 32;
    // printf("%c", sen);
    char name[100];
    fgats(name, sizeof(name), stdin);

    puts(name);
    return 0;
}