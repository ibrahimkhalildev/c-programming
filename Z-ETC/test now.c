#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int n)
{
    // Base condition: if n is 0 or 1, return 1
    if (n == 0 || n == 1)
        return 1;
    // Recursive case: return n * factorial(n-1)
    else
        return n * factorial(n-1);
}

int main()
{
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate factorial and print the result
        unsigned long long result = factorial(number);
        printf("Factorial of %d is %llu\n", number, result);
    }
    return 0;
}
