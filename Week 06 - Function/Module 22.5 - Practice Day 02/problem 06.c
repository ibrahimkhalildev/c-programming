#include <stdio.h>

int willAttack(int x1, int y1, int x2, int y2)
{
    return (x1==x2 || y1 == y2);
}

void find_Safe_Rooks(int R, int rooks[][2])
{
    int safeCount = 0;
    for (int i = 0; i < R; i++)
    {
        int isSafe = 1;
        for (int j = 0; j < R; j++)
        {
            if(i != j && willAttack(rooks[i][0], rooks[i][1], rooks[j][0], rooks[j][1]))
            {
                isSafe =0;
                break;
            }
        }
        if(isSafe)
        {
            safeCount++;
        }
    }
    printf("Safe rooks - %d\n", safeCount);

    for (int i = 0; i < R; i++)
    {
        int isSafe =1;
        for (int j = 0; j < R; j++)
        {
            if(i != j && willAttack(rooks[i][0], rooks[i][1], rooks[j][0], rooks[j][1]))
            {
                isSafe = 0;
                break;
            }
        }
        if(isSafe)
        {
            printf("%d %d\n", rooks[i][0], rooks[i][1]);
        }      
    }   
}

int main()
{
    int R;
    scanf("%d", &R);

    int rooks[R][2];

    for (int i = 0; i < R; i++)
    {
        scanf("%d %d", &rooks[i][0], &rooks[i][1]);
    }

    find_Safe_Rooks(R, rooks);

    return 0;
}