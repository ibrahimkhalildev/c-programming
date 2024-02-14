#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char str[100]; // Assuming the string won't exceed 100 characters
    printf("Enter the string: ");
    scanf("%s", str);

    int cost = 0;

    // Calculate the cost of the string
    for (int i = 0; i < strlen(str); i++) {
        cost += str[i] - 'a' + 1;
    }

    printf("Cost: %d\n", cost);

    // Check if the cost is a power of two
    int isPowerOfTwo = (cost & (cost - 1)) == 0;

    // Print the result
    if (isPowerOfTwo) {
        int exponent = (int)log2(cost);
        printf("YES with cost (in this format 2^n): 2^%d\n", exponent);
    } else {
        printf("NO\n");
    }

    return 0;
}
