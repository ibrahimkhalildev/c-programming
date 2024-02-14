#include <stdio.h>
#include <stdbool.h>

int get_string_size(char s[])
{
    int size = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}

bool check_even_odd(int size)
{
    if (size % 2 == 0)
        return true;
    return false;
}

void solve(void)
{
    char s[100];
    scanf(" %s", s);
    int string_size = get_string_size(s);
    // printf("%s, This word size = %d\n", s, string_size);
    bool is_even = check_even_odd(string_size);

    if(is_even)
    printf("String size %d and it is even Number\n", string_size);
    else
    printf("String size %d and it is Odd Number\n", string_size);

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
