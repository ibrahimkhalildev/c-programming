#include <stdio.h>

void array_size_finder(int *array[], int sz)
{
    int size = sizeof(array)/sizeof(int);
    for (int i = 0; i < size; i++)

    printf("%d", *(array+i));
}
int main()
{
    int ara[] = {10,50,77,99,15};
    array_size_finder(ara, 5);

    return 0;
}
