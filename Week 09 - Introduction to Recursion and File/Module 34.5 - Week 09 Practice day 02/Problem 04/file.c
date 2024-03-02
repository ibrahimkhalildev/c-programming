#include <stdio.h>

int main()
{
    FILE *input_File = fopen("input.txt", "r");
    FILE *output_File = fopen("output.txt", "w");
    if (input_File == NULL)
    {
        printf("Input file missing!\n");
        return 0;
    }

    int n, num, sum = 0;

    fscanf(input_File, "%d", &n);

    for (int i = 0; i < n; i++)
    {
        fscanf(input_File, "%d", &num);
        sum += num % 10;
    }
    fprintf(output_File, "Sum = %d", sum);

    fclose(input_File);
    fclose(output_File);

    return 0;
}