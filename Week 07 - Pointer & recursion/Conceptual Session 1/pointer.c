#include <stdio.h>

int main()
{

    

    int arr[5] = {5, 10, 15, 20, 25};
    int *ptr = &arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    


    printf("\n\n", ptr);
    printf("%p \n", ptr);
    ptr++;
    printf("%p \n", ptr);
    ptr++;
    printf("%p \n", ptr);
    ptr++;
    printf("%p \n", ptr);
    printf("%d \n", *ptr);

    // int value = 15;
    // int *p = &value;

    // printf("Address is = %p\n", p);
    // printf("Value is   = %d\n", *p);

    return 0;
}
