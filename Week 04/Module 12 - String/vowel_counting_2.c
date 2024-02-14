#include <stdio.h>
int main()
{
    char sen[100];
    fgets(sen, sizeof(sen), stdin);

    int i = 0, counter = 0;
    while (sen[i] != '\0')
    {
        if (sen[i] == 'a')
            counter++;
        else if (sen[i] == 'e')
            counter++;
        else if (sen[i] == 'i')
            counter++;
        else if (sen[i] == 'o')
            counter++;
        else if (sen[i] == 'u')
            counter++;
        i++;
    }

    printf("Total Number of Vowel = %d", counter);
    return 0;
}
