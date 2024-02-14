#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m;
    printf("Enter the number of strings (m): ");
    scanf("%d", &m);

    // Consume the newline character left by scanf
    getchar();

    // Allocate memory for the concatenated string
    char *concatenatedString = NULL;

    for (int i = 0; i < m; ++i)
    {
        char currentString[100]; // Assuming each input string won't exceed 100 characters
        printf("Enter string %d: ", i + 1);
        fgets(currentString, sizeof(currentString), stdin);

        // Remove the newline character from the input string
        size_t len = strlen(currentString);
        if (currentString[len - 1] == '\n')
        {
            currentString[len - 1] = '\0';
        }

        // Reallocate memory for the concatenated string
        concatenatedString = (char *)realloc(concatenatedString, (concatenatedString ? strlen(concatenatedString) : 0) + strlen(currentString) + 2);

        // Concatenate the current string with a space
        strcat(concatenatedString, currentString);
        strcat(concatenatedString, " ");
    }

    // Print the concatenated string
    printf("Concatenated String: %s\n", concatenatedString);

    // Free the allocated memory
    free(concatenatedString);

    return 0;
}
