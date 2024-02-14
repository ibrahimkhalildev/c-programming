#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    int i, nos;
    scanf("%d", &nos);

    for (i = 0; i < nos; i++)
    {

        fgets(word, sizeof(word), stdin);
        int l = strlen(word) - 1;

        if (l > 10)
        {
            // abbreviation
            printf("%c%d%c", word[0], l - 2, word[l - 1]);
        }
        else
        {
            puts(word);
            printf("\n");
        }
    }

    return 0;
}
