#include <stdio.h>
#include <string.h>

//Problem No. 1
//https://drive.google.com/file/d/1oCOIweibvo-450LQbGWBs6VU1lzjQ7Jb/view

char binary_checker(char str[])
{
    int i;
    int len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1')
            return 'N';
        else
            return 'Y';
    }
}

int main()
{
    char str[100];

    printf("Input a String: ");
    scanf(" %s", str);

    char result = binary_checker(str);

    if (result == 'Y')
        printf("Yes\n");
    else
        printf("No\n");
}
