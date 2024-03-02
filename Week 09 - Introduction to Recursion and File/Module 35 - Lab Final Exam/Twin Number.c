#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_Number(int N, int S)
{
    int X = (S-N) /2;
    return X;
}

int main()
{
    int N, S;
    scanf("%d %d", &N, &S);

    int the_result = find_Number(N, S);
    printf("%d\n", the_result);

    return 0;
}
