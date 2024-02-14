#include <stdio.h>

void changing_case(char uplo_str[])
{
    for (int i = 0; uplo_str[i] != '\0'; i++)
    {
        if (uplo_str[i] >= 'a' && uplo_str[i] <= 'z')
        {
            uplo_str[i] = uplo_str[i] - 32;
        }
        else if (uplo_str[i] >= 'A' && uplo_str[i] <= 'Z')
        {
            uplo_str[i] = uplo_str[i] + 32;
        }
    }
    printf("%s", uplo_str);
}

int main(void)
{

    char UpLo_str[100];

    scanf("%s", UpLo_str);

    changing_case(UpLo_str);

    return 0;
}
