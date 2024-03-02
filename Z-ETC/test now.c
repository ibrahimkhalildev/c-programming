void decode_number(int number) {
    char decoded[6]; // Maximum 5 characters for the output + '\0'
    int index = 0;
    while (number > 0) {
        int digit = number % 10;
        char letter;
        if (digit == 1) {
            letter = 'A';
        } else if (digit == 2) {
            letter = 'B';
        } else if (digit == 3) {
            letter = 'C';
        } else if (digit == 4) {
            letter = 'D';
        } else if (digit == 5) {
            letter = 'E';
        } else if (digit == 6) {
            letter = 'F';
        } else if (digit == 7) {
            letter = 'G';
        } else if (digit == 8) {
            letter = 'H';
        } else if (digit == 9) {
            letter = 'I';
        } else {
            letter = ' '; // Assign a default value if digit is not in the range [1, 9]
        }
        decoded[index] = letter;
        index++;
        number /= 10;
    }
    // Print the decoded string in reversed order
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", decoded[i]);
    }
    printf("\n");
}
