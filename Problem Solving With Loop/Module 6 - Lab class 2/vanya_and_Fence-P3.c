#include <stdio.h>

int main()
{
    int n, h, i, x;
    scanf("%d %d", &n, &h);

    int width = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if( x>h)
            width +=2;
        else
            width ++;
    }
    printf("%d\n", width);

    
    return 0;
}
