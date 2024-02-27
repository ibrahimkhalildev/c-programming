// https://codeforces.com/problemset/problem/1758/A
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char s[200];
        scanf("%s", s);
        printf("%s", s);
        printf("%s\n", strrev(s));
    }
    return 0;
}
/*
4
a
sururu
errorgorn
anutforajaroftuna
*/
