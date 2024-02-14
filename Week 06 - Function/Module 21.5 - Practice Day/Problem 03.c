#include <stdio.h>

// Function to calculate the sum of first and last digits
int sumFirstLastDigit(int num) {
    int lastDigit = num % 10;

    // Find the first digit
    while (num >= 10) {
        num /= 10;
    }

    int firstDigit = num;

    return firstDigit + lastDigit;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d 4-digit integers:\n", n);

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d", &num);

        sum += sumFirstLastDigit(num);
    }

    printf("Sum = %d\n", sum);

    return 0;
}
