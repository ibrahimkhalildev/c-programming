#include <stdio.h>
int main()
{
    int a;
    char b;

    scanf("%d", &a);
    //to do the mix with int and char have to add  a space before charecter;
    scanf(" %c", &b);

    printf("The Number and Charater are %d and %c", a, b);

    return 0;
}