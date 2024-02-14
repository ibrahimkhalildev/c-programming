#include <stdio.h>
#include <string.h>

void take_input_of_array(int num_arr[], int sz)
{
    for (int i = 0; i < sz; i++)
        scanf("%d", &num_arr[i]);
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]*2);
    }
    
}

int main(void)
{
    int size;
    scanf("%d", &size);

    int num[size];
    take_input_of_array(num,size);
    print_array(num, size);
}
