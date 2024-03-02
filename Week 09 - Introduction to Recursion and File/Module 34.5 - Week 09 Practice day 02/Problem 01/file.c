#include <stdio.h>

int main()
{
    FILE * input_File;
    FILE * Output_File;
    input_File = fopen("input.txt", "r");
    if(input_File == NULL)
    {
        printf("File not found!\n");
        return 0;
    }
    Output_File = fopen("output.txt", "w");

    int n;
    while (fscanf(input_File, "%d", &n) != EOF)
    {
        fprintf(Output_File, "%d ", n);
    }
    

    fclose(input_File);
    fclose(Output_File);

    return 0;
}