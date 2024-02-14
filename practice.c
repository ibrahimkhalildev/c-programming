#include <stdio.h>
#include <string.h>
#include <math.h>

int alphabetic_cost(char s[])
{
    int cost = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        cost += s[i] - 'a' + 1;
    }
    return cost;
}

int is_power_of_two(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

void is_power_of_two_cost(char s[])
{
    int cost = alphabetic_cost(s);
    if (is_power_of_two(cost))
    {
        printf("YES\ncost = 2^%d\n", (int)(log2(cost)));
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    char input_str[100];
    printf("Enter a string of small letters: ");
    scanf("%s", input_str);

    printf("Output:\n");
    is_power_of_two_cost(input_str);

    return 0;
}
