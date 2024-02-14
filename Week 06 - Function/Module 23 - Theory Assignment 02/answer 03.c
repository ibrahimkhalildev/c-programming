//https://docs.google.com/document/d/1wFv0Hv5pvqf2VGm4DG_Q6chRI4mVKFlR/edit
#include <stdio.h>

int is_All_Digits_present(char string_digits[]);
int is_digit_present(char str[], char digit);

int main()
{
    char string_digits[100];
    printf("Input: \n");
    scanf("%s", string_digits);

    if (is_All_Digits_present(string_digits))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

int is_All_Digits_present(char string_digits[])
{
    if (is_digit_present(string_digits, '1') && is_digit_present(string_digits, '9') && is_digit_present(string_digits, '7'))
    {
        return 1;
    }
    return 0;
}

int is_digit_present(char str[], char digit)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == digit)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
