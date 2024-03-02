#include <stdio.h>

int main()
{
    FILE *input_File = fopen("input.txt","r");
    if(input_File == NULL)
    {
        printf("Input file not found!\n");
        return 0;
    }
    FILE *output_File = fopen("output800.txt", "w");

    int n;
    fscanf(input_File, "%d", &n);
    fprintf(output_File, "%d\n", n);

    fclose(input_File);
    fclose(output_File);
    return 0;
}
