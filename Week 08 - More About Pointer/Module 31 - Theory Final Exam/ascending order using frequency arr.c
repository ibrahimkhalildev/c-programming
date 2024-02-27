#include <stdio.h>

void sorting_machine_by_Frequency_array(char *S);
int main()
{
    char S[100];

    printf("Input a string of lowercase: \n");
    scanf("%s", S);

    sorting_machine_by_Frequency_array(S);

    printf("Sorted String by Frequency Array: \n%s\n", S);

    return 0;
}

void sorting_machine_by_Frequency_array(char *S)
{
    int freq[26] = {0};
    for (int i = 0; S[i] != '\0'; i++)
    {
        freq[S[i] - 'a']++;
    }
    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] > 0)
        {
            S[index++] = 'a' + i;
            freq[i]--;
        }
    }
}
