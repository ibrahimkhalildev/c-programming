#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Function to calculate GCD
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to count HEXA pairs
int countHexaPairs(int arr[], int n)
{
    int count = 0;

    // Nested loops to iterate over all pairs
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Calculate GCD of pair
            int g = gcd(arr[i], arr[j]);
            // If GCD is 1, increment count
            if (g == 1)
                count++;
        }
    }
    // Multiply count by 2 to account for pairs (i, j) and (j, i)
    return count * 2;
}

int main()
{
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--)
    {
        int n;
        scanf("%d", &n); // Size of the array
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]); // Input array elements
        }
        // Call function to count HEXA pairs
        int result = countHexaPairs(arr, n);
        // Print the result
        printf("%d\n", result);
    }
    return 0;
}
