#include <stdio.h>
#include <string.h>

int main()
{
    char sting_array[] = "Phitron";
    int length = sizeof(sting_array);

    printf("%d \n", length);
    for(int i = 0; i<length; i++)
    {
        printf("%c", sting_array[i] );
    }

    return 0;
}
