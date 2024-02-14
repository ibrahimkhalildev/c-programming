#include <stdio.h>
// https://phitron.io/ph232/video/ph232-22-4-practice-problem-4
int is_vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    ch = getchar();
    getchar();

    if (is_vowel(ch) == 1)
        printf("The Character is Vowel.");
    else
        printf("The Character is not Consonant.");
}
