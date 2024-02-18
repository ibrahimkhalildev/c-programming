#include <stdio.h>
#include <string.h>

void broken_keyboard(char *button);

int main()
{
    char button[100];
    printf("Press Button: \n");
    scanf("%s", button);

    broken_keyboard(button);

    return 0;
}

void broken_keyboard(char *button)
{
    int len = strlen(button);
    char input_help[2 * len + 1];
    int index = 0;
    int repeat = 0;

    for (int i = 0; i < len; i++)
    {
        input_help[index++] = button[i];
        if (repeat)
        {
            input_help[index++] = button[i];
        }
        repeat = !repeat;
    }
    input_help[index] = '\0';
    printf("%s\n", input_help);
}