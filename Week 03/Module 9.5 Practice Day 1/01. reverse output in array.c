#include <stdio.h>

int main()
{
  int n, i, j, arr[1000];
  printf("How many number you want to store in Array? ");
  scanf("%d", &n);
  printf("%d Numbers. \n", n);
  printf("\n");
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &arr[i]);
    printf("\n");
  }
  // Showing the values are stored in the array.
  for (i = 1; i <= n; i++)
  {
    printf("%d th value = %d \n", i, arr[i]);
    printf("\n");
  }
  // Printing the array as reverse order.
  printf("The reverse order is below:\n");
  for (i = n; i >= 1; i--)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  return 0;
}
