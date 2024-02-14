#include <stdio.h>
int main()
{
    float ara[10];

    ara[0] = 1.3;
    ara[1] = 1.8;
    ara[2] = 1.8;
    ara[3] = ara[0] + ara[1];
    ara[9] = 100.98574969859855;

    printf("%f\n", ara[0]);
    printf("%f\n", ara[1]);
    printf("%f\n", ara[2]);
    printf("%f\n", ara[3]);
    printf("%f\n", ara[9]);

    return 0;
}
