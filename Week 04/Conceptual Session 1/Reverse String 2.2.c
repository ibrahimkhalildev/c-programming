#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    scanf("%s", word);

    int i = 0, len=0;
    //Counting Length
    while(word[i] !='\0')
    {
        i++;
        len++;
    }
    i =0;
    for (i = len - 1; i >= 0; i--)
    {
        printf("[%d] %c \n", i, word[i]);
    }
    return 0;
}
