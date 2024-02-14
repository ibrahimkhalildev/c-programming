#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 4; i++)
    {
        printf("Let me go!\n");
        if (i == 2)
        {
            continue;
        }
        printf("Please, Let me go!\n");
        printf("Hay Bad man, Let me go!\n");
    }
    return 0;
}