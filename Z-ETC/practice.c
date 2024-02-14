#include <stdio.h>
#include <string.h>
int main()
{
    char word1[100];
    printf("String One: \n");
    scanf("%s", &word1);
    char word2[100];
    printf("Write String Two: \n");
    scanf("%s", &word2);

    int i = 0, j = 0, len = 0;

    while(word1[i] != '\0')
    {
        len++;
        i++;
    }
    while (word2[j] != '\0')
    {
        word1[len+j] = word2[j];
        j++;
    }

    printf("Two String = %s", word1);
    return 0;
}
