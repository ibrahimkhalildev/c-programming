#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];    // Assuming the string won't exceed 100 characters
    int isBinary = 1; // Assume the string is binary unless proven otherwise

    printf("Enter the string: ");
    scanf("%s", str);

    // Check each character in the string
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            isBinary = 0; // Not a binary string
            break;        // No need to check further
        }
    }

    // Print the result
    if (isBinary)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
