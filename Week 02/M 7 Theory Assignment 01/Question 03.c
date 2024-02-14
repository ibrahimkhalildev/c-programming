#include <stdio.h>
int main()
{
    long long int n;
    int count = 0;

    printf("Please enter any Number: \n");

    scanf("%lld", &n);
    // Using by While loop;
    //  while(n > 0)
    //  {
    //      n = n/10;
    //      count ++;
    //  }

    //Using by for loop;
    // for(n; n>0 ; count++)
    // {
    //     n  = n/10;
    // }

    //Counting Digits
    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    printf("%d", count);
    return 0;
}
