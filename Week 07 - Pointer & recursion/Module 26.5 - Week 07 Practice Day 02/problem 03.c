#include <stdio.h>

void printArray_by_pointer(int *arr, int n);

int main()
{
    int n;
    printf("Input Array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Element of Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Showing array by Pointer: \n");
    printArray_by_pointer(arr, n);

    return 0;
}
void printArray_by_pointer(int *arr, int n)
{
    int *pointer = arr;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *pointer);
        pointer++;
    }
    printf("\n");


}
