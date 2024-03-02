#include <stdio.h>

void decode_Number(int number)
{
    char decode[9];
    int index = 0;
    while (number > 0)
    {
        int digit = number % 10;
        char letter;
        if (digit == 1)
        {
            letter = 'A';
        }
        else if (digit == 2)
        {
            letter = 'B';
        }
        else if (digit == 3)
        {
            letter = 'C';
        }
        else if (digit == 4)
        {
            letter = 'D';
        }
        else if (digit == 5)
        {
            letter = 'E';
        }
        else if (digit == 6)
        {
            letter = 'F';
        }
        else if (digit == 7)
        {
            letter = 'G';
        }
        else if ( digit == 8)
        {
            letter = 'H';
        }
        else if (digit == 9)
        {
            letter = 'I';
        }
        decode[index] = letter;
        index++;
        number /= 10;      
    }
    for (int i = 0; i < index; i++)
    {
        printf("%c", decode[i]);
    }
    printf("\n");
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int number;
        scanf("%d", &number);
        decode_Number(number);
    }

    return 0;
}