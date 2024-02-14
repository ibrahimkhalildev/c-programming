#include <stdio.h>

void swap_machine(int *ptr1, int *ptr2)
{
    //printf("Ptr1 = %d and ptr2 %d\n", ptr1, ptr2);
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    //printf("Ptr1 = %d and ptr2 %d\n\n", ptr1, ptr2);
}

int main()
{

    int a = 5, b = 11;

    swap_machine(&a, &b);
    printf("a = %d and b = %d\n", a, b);

    return 0;
}
