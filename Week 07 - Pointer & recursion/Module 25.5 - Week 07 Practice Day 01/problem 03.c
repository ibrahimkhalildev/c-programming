#include <stdio.h>
#include <math.h>

void is_power_of_two_cost(char str[]);
int is_power_of_two(int n);
int alphabetic_cost(char str[]);

int main()
{
    char str[100];
    printf("Enter few Small Letters: ");
    scanf("%s", str);

    is_power_of_two_cost(str);
    return 0;
}

void is_power_of_two_cost(char str[])
{
    int cost = alphabetic_cost(str);
    if (is_power_of_two(cost))
    {
        printf("Yes\ncost = 2^%d\n", (int)(log2(cost)));
    }
    else
    {
        printf("No\n");
    }
}

int is_power_of_two(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int alphabetic_cost(char str[])
{
    int cost = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        cost += str[i] - 'a' + 1;
    }
    return cost;
}