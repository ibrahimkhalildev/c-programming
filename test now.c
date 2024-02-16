#include <stdio.h>
#include <string.h>
#include <ctype.h>

void even_number_uppercase_converter(char str[]);

int main() {
    char str[100];
    printf("Input a word: \n");
    fgets(str, sizeof(str), stdin);

    even_number_uppercase_converter(str);

    printf("%s\n", str);

    return 0;
}

void even_number_uppercase_converter(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i]) && (str[i] - '0') % 2 == 0) {
            str[i] = toupper(str[i]);
        }
    }
}
