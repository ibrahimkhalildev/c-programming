 #include <stdio.h>

int count_K(int arr[], int n, int k);

int main()
{

    int n;
    printf("Enter Number of Array Element: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements:  \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int result = count_K(arr, n, k);
    printf("Total Count = %d\n", result);

    return 0;
}

int count_K(int arr[], int n, int k)
{
    int counnt = 0;
    for (int i = 0; i < n; i++)
    {
            if(arr[i]< k || arr[i]>k)
            counnt++;
    }
    return counnt;
}
