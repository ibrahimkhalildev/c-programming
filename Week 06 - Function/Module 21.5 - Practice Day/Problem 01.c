#include <stdio.h>

//https://drive.google.com/file/d/1mBXx97qiMmbFkjEZlCgRXT96b0H3xkLA/view
void num_machine(int n)
{
    if (n > 0)
    {
        for (int i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        for (int i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    printf("Non Negative nor Positive!");
}

int main()
{
    int N;
    printf("Input a Negative or Positive Nuber: \n");
    scanf("%d", &N);

    num_machine(N);

    return 0;
}
