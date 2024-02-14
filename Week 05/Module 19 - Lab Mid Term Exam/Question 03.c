#include <stdio.h>

// https://www.hackerrank.com/contests/lab-mid-term-exam-batch-02/challenges/two-dimensional-operation
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (arr[i][j] == i + 1 && arr[i][j] == j + 1)
            {
                arr[i][j] += 3;
            }
            else if (arr[i][j] == i + 1)
            {
                arr[i][j] += 2;
            }
            else if (arr[i][j] == j + 1)
            {
                arr[i][j] += 1;
            }
        }
    }
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < M; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    // to see the output
    //  for (i = 0; i < N; i++)
    //  {
    //      for (j = 0; j < M; j++)
    //      {
    //          printf("%d ", arr[i][j]);
    //      }
    //      printf("\n");
    //  }

    return 0;
}
