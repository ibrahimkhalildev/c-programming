#include <stdio.h>
int main()
{

    char word[1000];
    fgets(word, sizeof(word), stdin);

    int i;
    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[0] >= 'a')
            word[i] -= 32;
    }
    printf("%s", word);

    return 0;
}
