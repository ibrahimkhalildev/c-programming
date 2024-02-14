#include <stdio.h>
#include <string.h>

int main()
{
    // char str[] = "Phitron";
    // int length = strlen(str);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%c ", str[i]);
    // }
    // // To check the length of the string.
    // printf("\n\nLength of the String: %d", length);

    char str[100];
    scanf("%s", str);
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c ", str[i]);
        i++;
    }
    return 0;
}
