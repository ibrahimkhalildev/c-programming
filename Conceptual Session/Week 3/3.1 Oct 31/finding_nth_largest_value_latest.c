#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int input[n];
    for (i = 0; i < n; i += 1)
    {
        scanf("%d", &input[i]);
    }

    int largest = input[0];

    for (i = 1; i < n; i += 1)
    {
        if (input[i] > largest)
        {
            largest = input[i];
        }
    }
    // printf("The Largest value is = %d", largest);

    int arr[largest + 1];

    for (i = 0; i <= largest; i += 1)
    {
        arr[i] = 0;
    }
    for (i = 0; i < n; i += 1)
    {
        arr[input[i]] += 1;
    }

    // Finding Lagest value;
    // int cnt = 0;
    //  for (i = largest; i >= 1; i -= 1)
    //  {
    //      if(arr[i] ==1)
    //      {
    //          cnt +=1;
    //      }
    //      if(cnt == 3)
    //      {
    //          printf("The 3rd Largest value is %d\n", i);
    //          break;
    //      }
    //  }
    // Finding Minimum value;
    // int cnt = 0;
    // for (i = 0; i <= largest; i += 1)
    // {
    //     if(arr[i] ==1)
    //     {
    //         cnt +=1;
    //     }
    //     if(cnt == 3)
    //     {
    //         printf("The 3rd Minimum value is %d\n", i);
    //         break;
    //     }
    // }
    int cnt = 0;
    int unique = 0, duplicate = 0;
    for (i = 0; i <= largest; i += 1)
    {
        if (arr[i] == 1)
        {
            unique += 1;
        }
        else if (arr[i] > 1)
        {
            duplicate += 1;
        }
    }

    printf("The Number of unique value is = %d\n", unique);
    printf("The Number of duplicate value is = %d\n", duplicate);

    return 0;
}
