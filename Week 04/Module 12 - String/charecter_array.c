#include <stdio.h>

int main()
{
    //char character_array[20];
    //char character_array[20] = "Ibrahim Khalil";
    char str[8] = {'P', 'h', 'i', 't', 'r', 'o','n','\0'};
    char character_array[] = "Ibrahim Kalil";

    character_array[0] = 'A';
    character_array[5] = 'a';
    character_array[9] = 'o';
    character_array[14] = '\0';
    //scanf("%s", character_array);
    //scanf("%c", character_array[9]);

    printf("%s", str);


    return 0;
}
