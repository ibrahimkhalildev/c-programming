#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    scanf("%s", word);

    int i = 0, len = strlen(word), j;

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c ", word[i]);
    }
    return 0;
}
