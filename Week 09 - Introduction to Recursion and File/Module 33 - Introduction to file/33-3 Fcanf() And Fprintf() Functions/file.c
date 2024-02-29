#include <stdio.h>

int main()
{
    FILE *input_File;
    FILE *output_File;

    input_File = fopen("input1.txt", "r");
    output_File = fopen("output.txt", "w");

    if (input_File == NULL)
    {
        fprintf(output_File, "File Not Found!\n");
        return 0;
    }

    int n;
    fscanf(input_File, "%d", &n);
    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(input_File, "%d", &a);
        summ += a;
    }
    fprintf(output_File, "Sum -> %d", summ);

    return 0;
}
