#include <stdio.h>

int main()
{
    int n;

    // Taking user input
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0)
    {
        // Print from n to -n
        for (int i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        // Print from -n to n
        // ভ্যালু -৫ হলে -৫ তো -৫ এর সমান, তাহলে তো লুপ একবার চলার কথা!
        for (int i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("Please enter a non-zero integer.\n");
    }

    return 0;
}
