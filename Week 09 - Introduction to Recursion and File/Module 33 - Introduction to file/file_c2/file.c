#include <stdio.h>

int main()
{
    FILE *inputFiles;
    inputFiles = fopen("input.txt", "r");
    if(inputFiles == NULL)
    {
        printf("No File Found!");
        return 0;
    }

    FILE *custom_Output_file;
    custom_Output_file = fopen("output1.txt","w");
    while (1)
    {
        char ch = fgetc(inputFiles);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch, custom_Output_file);
        //printf("%c", ch);
    }



    // char ch = fgetc(inputFiles);
    // printf("%c", ch);

    // char ch2 = fgetc(inputFiles);
    // printf("%c", ch2);

    // char ch3 = fgetc(inputFiles);
    // printf("%c", ch3);

    return 0;
}
