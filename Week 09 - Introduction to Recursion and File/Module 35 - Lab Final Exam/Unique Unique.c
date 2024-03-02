#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    char S[N];
    scanf("%s", S);

    int count[26] = {0};

    for (int i = 0; i < N; i++)
    {
        count[S[i] - 'a']++;
    }

    int unique_count = 0;

    for (int i = 0; i < 26; i++)
    {
        if(count[i] == 1)
        {
            unique_count++;
        }
    }
    printf("%d\n", unique_count);

    return 0;
}