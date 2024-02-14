#include <stdio.h>
#include <string.h>

void sortString(char *str)
{
  int charCount[26] = {0}; // Array to store character counts

  // Count occurrences of each character
  for (int i = 0; str[i] != '\0'; i++)
  {
    charCount[str[i] - 'a']++;
  }

  // Sort the string based on character count
  int index = 0;
  for (int count = strlen(str), i = 25; count > 0; count--)
  {
    for (int j = 25; j >= 0; j--)
    {
      if (charCount[j] == count)
      {
        for (int k = 0; k < count; k++)
        {
          str[index++] = 'a' + j;
        }
      }
    }
  }

  str[index] = '\0';
}

int main()
{
  char str[100]; // Assuming a maximum length for the input string
  printf("Enter the string: ");
  scanf("%s", str);

  sortString(str);
  printf("Sorted string: %s\n", str);

  return 0;
}
