#include <stdio.h>
#include <string.h>

int main()
{
    // char s1[]="Phitron";
    char s[100];
    scanf("%s", &s);
    int len = 0, i = 0;
    while (s[i] != '\0')
    {
        i++;
        len++;
    }
    i = 0;

    // int i=0, len=strlen(s1), j;

    for (i = 0; i <= len; i++)
    {
        printf("[%d] %c \n",i, s[i]);
    }

    return 0;
}
