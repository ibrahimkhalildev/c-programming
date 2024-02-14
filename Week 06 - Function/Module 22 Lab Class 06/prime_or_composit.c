#include <stdio.h>

int is_Pirme(int n)
{
    int i;
    for ( i = 2; i < n; i++)
    {
        if(n%i == 0)
        return 0;
    }
    return 1;
}


int main()
{
    int n;
    scanf("%d", &n);

    if (is_Pirme(n) == 1)
        printf("Prime Number.\n");
    else
        printf("Composit Number.\n");
}






// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int is_Pirme = 1;
//     for (int i = 2; i < n; i++)
//     {

//         if (n % i == 0)
//         {
//             is_Pirme = 0;
//             break;
//         }
//     }
//     if (is_Pirme == 1)
//     {
//         printf("Prime Number.\n");
//     }
//     else
//     {
//         printf("Composit Number.\n");
//     }

//     return 0;
// }
