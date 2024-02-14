#include <stdio.h>
#include <string.h>

int main()
{

    char word1[50];
    char word2[50];
    printf("First word: ");
    scanf("%s", word1);
    printf("Second word: ");
    scanf("%s", word2);

    int i=0, len=0, j=0;

    //word lenth counting
    while(word1[i] != '\0')
    {
        i++;
        len++;
    }
    while (word2[j] !='\0')
    {
        word1[len+j] = word2[j];
        j++;
    }
    printf("Sum of Two Strings are: %s", word1);

    // char word1[50] = "Ibrahim";
    // char word2[50] = "khalil";

    // int i = 0, len = 0, j = 0;

    // // for (i = 0; word1[i] != '\0'; i++, len++)
    // while (word1[i] != '\0')
    // {
    //     i++;
    //     len++;
    // }
    // printf("%d", len);

    // while (word2[j] != '\0')
    // {
    //     word1[len + j] = word2[j];
    //     j++;
    // }
    // printf("String = %s", word1);

    return 0;
}
