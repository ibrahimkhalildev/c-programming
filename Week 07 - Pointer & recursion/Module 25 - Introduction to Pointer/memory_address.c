#include <stdio.h>

int main(void)
{
    int a = 20, b = 100;
    printf("%d\n", a);
    printf("%p\n", &a); //Pointer or Address Loction
    printf("%d\n", b);
    printf("%p\n\n", &b); //Pointer or Address Loction

    long long int ara[8] = {99,55,4,44,55,88,77,33};
    for(int i=0; i<8; i++)
    {
        //printf("%d \n", ara[i]);
        printf("%p \n", &ara[i]); //Pointer or Address Loction
    }

    return 0;

}
