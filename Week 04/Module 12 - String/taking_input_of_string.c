#include <stdio.h>
int main()
{
    char sen[1500];
    
    // gets(sen);
    fgets(sen, sizeof(sen), stdin)

    printf("%s", sen)

    return 0;
}