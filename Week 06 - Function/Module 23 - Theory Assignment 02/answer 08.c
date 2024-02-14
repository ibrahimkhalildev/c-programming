#include <stdio.h>

void shifting_string(char str[], int n)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        str[i] = 'a' + (str[i] - 'a' + n) % 26;
    }
}

int main()
{
    char str[100];
    int n;

    printf("Enter a string: \n");
    scanf("%s", str);
    printf("Enter a Number: \n");
    scanf("%d", &n);

    shifting_string(str, n);

    printf("%s\n", str);
};
