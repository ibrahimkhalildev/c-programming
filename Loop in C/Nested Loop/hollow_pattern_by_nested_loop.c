#include <stdio.h>
int main()
{
    int i, j;
    int N = 7;

    // N Stars
    for(i = 1; i<= N; i++)
    {
        printf("#");
    }
    printf("\n");
    for(j=1; j<=N; j++)
    {
        // Print 5 Stars
        printf("#");
        for(i=1; i<=(N-2); i++)
        {
        printf(" ");
        }
        printf("#\n");
    }
    //N Stars
    for(i=1;i<=N; i++)
    {
        printf("#");
    }
    printf("\n");

    return 0;
}
