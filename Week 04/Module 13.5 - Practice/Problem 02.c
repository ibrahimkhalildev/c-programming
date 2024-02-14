#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int isPalindrome = 1; // Assume the string is a palindrome initially

    // Input from the user
    printf("Enter a string: ");
    scanf("%s", input);

    int length = strlen(input);

    // Check if the input string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
