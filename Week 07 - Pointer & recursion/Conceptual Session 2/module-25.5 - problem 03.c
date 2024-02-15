#include <stdio.h>

int check_power(int n)
{
    int ans = 0;
    while (n != 1)
    {
        int rem = n % 2;
        n = n / 2;
        if (rem != 0)
        {
            ans = 0;
            break;
        }
        ans++;
    }
    return ans;
}

int main()
{
    char s[100];
    printf("Type a word: \n");
    scanf("%s", s);

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        //    printf("%c -> %d\n", s[i], s[i] - 'a' +1);
        count += s[i] - 'a' + 1;
    }

    int ans = check_power(count);
    printf("%d", ans);
    if(ans != 0)
    {
    printf("Yes\n");
    printf("Cost = 2^%d\n", ans);

    }
    else
    printf("No\n");

    return 0;
}
