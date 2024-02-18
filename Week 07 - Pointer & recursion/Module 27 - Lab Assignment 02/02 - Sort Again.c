#include <stdio.h>

void sort_Descending_order(char *str);

int main()
{
    char str[100];
    printf("Input A String: \n");
    fgets(str, sizeof(str), stdin);

    sort_Descending_order(str);

    printf("Sort in Descending Order: \n%s\n", str);

    return 0;
}

void sort_Descending_order(char *str)
{
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str[j] < str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
