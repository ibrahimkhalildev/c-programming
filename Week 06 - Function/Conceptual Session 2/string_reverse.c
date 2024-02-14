#include <stdio.h>
#include <stdbool.h>

int get_string_size(char c[])
{
    int size = 0;
    for (int i = 0; c[i] != '\0'; i++)
        size++;
    return size;
}

void string_reverse(char c[])
{
    int len = get_string_size(c);
    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        char tmp = c[i];
        c[i] = c[j];
        c[j] = tmp;
    }
}

void solve(void)
{
    char c[100];
    scanf(" %s", c);

    string_reverse(c);

    printf("%s\n", c);
}

int main(void)
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }

    // printf("String Size = %d", sz);
}
