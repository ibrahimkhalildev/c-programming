#include <stdio.h>

int main()
{
    FILE *logFile;
    logFile = fopen("log.txt", "a");
    FILE *input_File = fopen("habija.c", "r");
    if (input_File == NULL)
    {
        fprintf(logFile, "Input file not found at 6.25 PM\n");
    }

    return 0;
}
