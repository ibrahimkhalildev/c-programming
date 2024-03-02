#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *input_File = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");
    if (input_File == NULL || output_file == NULL)
    {
        printf("Input file Missing!\n");
        return 1;
    }
    int T;
    fscanf(input_File, "%d", &T);

    while (T--)
    {
        int n;
        fscanf(input_File, "%d", &n);

        if (n > 0)
            for (int i = n; i >= -n; i--)
            {
                fprintf(output_file, "%d ", i);
            }
        else
        {
            for (int i = n; i <= -n; i++)
            {
                fprintf(output_file, "%d ", i);
            }
            for (int i = -n; i <= n; i++)
            {
                fprintf(output_file, "%d ", i);
            }
        }
        fprintf(output_file, "\n");
    }

    fclose(input_File);
    fclose(output_file);

    return 0;
}
