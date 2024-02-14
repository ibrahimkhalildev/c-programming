#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    scanf("%s", s1);

    int i = 0, len = 0, j;
    while(s1[i] != '\0')
    {
        i++;
        len++;
    }
    // printf("%d", len);
    i = 0;
    for(i = len-1; i>=0; i--)
    {
        printf("%c ", s1[i]);
    }
    return 0;
}