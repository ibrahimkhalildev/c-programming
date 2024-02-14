#include <stdio.h>

int main()
{
    char s[100];

    printf("Enter a String\n");
    fgets(s, sizeof(s), stdin);

    int i, len = strlen(s), vowel_count = 0, cons_count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        int ch = s[i];
        // checking alphabet
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' || ch <= 'Z')
            ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'i')
        {
            vowel_count++;
        }
        else
        {
            cons_count++;
        }
    }
    printf("Total vowel: %d\n", vowel_count);
    printf("Total Consonant: %d\n", cons_count);

    return 0;
}
