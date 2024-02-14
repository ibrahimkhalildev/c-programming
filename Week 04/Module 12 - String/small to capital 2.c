#include <stdio.h>
int main()
{

    char sen[500];
    fgets(sen, sizeof(sen), stdin);

    int i;
    for (i = 0; sen[i] != '\0'; i++)
    {
        if (sen[i] >= 'a' && sen[i] <= 'z')
            sen[i] -= 32;
    }

    // puts("The capital form is ");
    // puts(sen);
    printf("The capital form is %s", sen);
    return 0;
}
