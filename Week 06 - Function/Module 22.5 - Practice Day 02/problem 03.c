#include <stdio.h>
#include <string.h>

//https://drive.google.com/file/d/1oCOIweibvo-450LQbGWBs6VU1lzjQ7Jb/view

void concatenate_strings();

int main()
{
    int m;
    printf("Input word Number: \n");
    scanf("%d", &m);

    char strings[m][100];
    printf("Enter Strings: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%s", strings[i]);
    }
    concatenate_strings(m, strings);
    printf("\n");
}

void concatenate_strings(int m, char strings[][100])
{
    for (int i = 0; i < m; i++)
    {
        printf("%s", strings[i]);
        if(i<m-1)
        {
            printf(" ");
        }
    }
}
