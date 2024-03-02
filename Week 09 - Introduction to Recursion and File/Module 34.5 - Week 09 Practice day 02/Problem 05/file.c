#include <stdio.h>

void print_Pattern(int N, FILE *output_File);
int main()
{
    FILE *input_File = fopen("input.txt", "r");
    FILE *output_File = fopen("output.txt", "w");
    if (input_File == NULL)
    {
        printf("Input file is missing!\n");
        return 0;
    }

    int N;

    fscanf(input_File, "%d", &N);
    print_Pattern(N, output_File);

    fclose(input_File);
    fclose(output_File);

    return 0;
}

void print_Pattern(int N, FILE *output_File)
{
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N - i; ++j)
        {
            fprintf(output_File, " ");
        }
        for (int k = 1; k <= N; ++k)
        {
            fprintf(output_File, "*");
        }
        fprintf(output_File, "\n");
    }
}
