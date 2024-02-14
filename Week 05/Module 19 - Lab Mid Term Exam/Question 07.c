// https://www.hackerrank.com/contests/lab-mid-term-exam-batch-02/challenges/lucky-seven-3
#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        char S[21];
        scanf("%s", S);

        int len = strlen(S);
        int isPalindrome = 1;

        for (j = 0; j < len / 2; j++)
        {
            if (S[j] != S[len - 1 - j])
            {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome)
        {
            if (len > 7)
            {
                printf("Case #2: %c%d%c\n", S[0], len - 2, S[len - 1]);
            }
            else
            {
                printf("Case #3: %s\n", S);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }

    return 0;
}
