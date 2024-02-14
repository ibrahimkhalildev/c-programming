#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[100];  // Adjust the size as needed
    printf("Enter a string: ");
    scanf("%s", inputString);

    int len = strlen(inputString);
    if (len <= 1)
    {
        printf("String after removing duplicates: %s\n", inputString);
        return 0;  // No duplicates to remove
    }

    int charSet[256] = {0};  // Assuming ASCII characters

    int currentIndex = 0;
    for (int i = 0; i < len; i++)
    {
        char currentChar = inputString[i];
        if (charSet[currentChar] == 0)
        {
            // Character not encountered before, add it to the result
            inputString[currentIndex++] = currentChar;
            charSet[currentChar] = 1;
        }
    }

    // Null-terminate the resulting string
    inputString[currentIndex] = '\0';

    printf("String after removing duplicates: %s\n", inputString);

    return 0;
}
