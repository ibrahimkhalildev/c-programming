#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void find_position(int T, int elements[], int arr_size, int targated_elements)
{
    for (int i = 0; i < arr_size; i++)
    {
        if (elements[i] == targated_elements)
        {
            printf("Case %d: %d\n", T, i + 1);
            return;
        }
    }
    printf("Case %d: Not Found\n", T);
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        int arr_size, targeted_element;
        scanf("%d", &arr_size);
        int elements[arr_size];

        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", &elements[j]);
        }

        scanf("%d", &targeted_element);

        find_position(i, elements, arr_size, targeted_element);
    }

    return 0;
}