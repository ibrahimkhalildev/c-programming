#include <stdio.h>
#include <string.h>

int main()
{

    char word[100];
    scanf("%s", word);

    int i;
    // while(word[i] != '\0')
    // {
    //     printf("[%d] %c \n", i, word[i]);
    //     i++;
    // }

    for(i=0; word[i] != '\0'; i++)
    {
        printf("[%i] %c \n", i,word[i]);
    }

    return 0;
}
