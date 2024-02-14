#include <stdio.h>

void even_Nums(int n)
{
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }
}
void odd_Nums(int n)
{
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
    }
}
int find_kth_Number(int n, int k)
{
    if (k <= n / 2)
    {
        return 2 * k;
    }
    else
    {
        return 2 * (k - n / 2) - 1;
    }
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    even_Nums(n);
    odd_Nums(n);
    printf("\n");

    int kth_Number = find_kth_Number(n, k);
    printf("The %dth element in this sequence is %d.\n", k, kth_Number);
    return 0;
}