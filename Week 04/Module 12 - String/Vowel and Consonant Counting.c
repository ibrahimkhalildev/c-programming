#include <stdio.h>
int main()
{
    char sen[1000];
    fgets(sen, sizeof(sen), stdin);
    int i = 0, counter = 0, conso_count = 0;

    while(sen[i] != '\0')
    {
        if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u' || sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U')
        counter++;
        else if(sen[i] == 'b' || sen[i] == 'c' || sen[i] == 'd' || sen[i] == 'f' || sen[i] == 'g' || sen[i] == 'h' || sen[i] == 'j' || sen[i] == 'k' || sen[i] == 'l' || sen[i] == 'm' || sen[i] == 'n' || sen[i] == 'p' || sen[i] == 'q' || sen[i] == 'r' || sen[i] == 's' || sen[i] == 't' || sen[i] == 'v' || sen[i] == 'w' || sen[i] == 'x' || sen[i] == 'y' || sen[i] == 'z' || sen[i] == 'B' || sen[i] == 'C' || sen[i] == 'D' || sen[i] == 'F' || sen[i] == 'G' || sen[i] == 'H' || sen[i] == 'J' || sen[i] == 'K' || sen[i] == 'L' || sen[i] == 'M' || sen[i] == 'N' || sen[i] == 'P' || sen[i] == 'Q' || sen[i] == 'R' || sen[i] == 'S' || sen[i] == 'T' || sen[i] == 'V' || sen[i] == 'W' || sen[i] == 'X' || sen[i] == 'Y' || sen[i] == 'Z' )
        conso_count++;

        i++;
    }
    printf("The number of vowel in this sentence are = %d\n", counter);
    printf("The number of Consonant in this sentence are = %d", conso_count);
    return 0;
}
