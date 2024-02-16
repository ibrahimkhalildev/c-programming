#include <stdio.h>
#include <string.h>
#include <ctype.h>

void enven_number_uppercase_converter(char str[]);

int main()
{
    char str[100];
    printf("Input a word: \n");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    enven_number_uppercase_converter(str);

    printf("%s\n", str);

    return 0;
}

void enven_number_uppercase_converter(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] %2 == 0)
        str[i] -=32;
    }

}
