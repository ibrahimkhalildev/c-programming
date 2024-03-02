#include <stdio.h>

int main()
{
    FILE *input_File = fopen("input.txt", "r");
    if (input_File == NULL)
    {
        printf("File not found!\n");
        return 0;
    }
    FILE *output_File = fopen("output.txt", "w");

    int n;
    fscanf(input_File, "%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fprintf(output_File, "%d ", i);
    }
    
    fclose(input_File);
    fclose(output_File);

    return 0;
}