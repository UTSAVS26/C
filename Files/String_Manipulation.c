#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int lowercaseCount = 0, uppercaseCount = 0, digitCount = 0, specialCharCount = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            lowercaseCount++;
        else if (ch >= 'A' && ch <= 'Z')
            uppercaseCount++;
        else if (ch >= '0' && ch <= '9')
            digitCount++;
        else
            specialCharCount++;
    }

    fclose(file);

    printf("Lowercase letters: %d\n", lowercaseCount);
    printf("Uppercase letters: %d\n", uppercaseCount);
    printf("Numbers: %d\n", digitCount);
    printf("Special characters: %d\n", specialCharCount);

    return 0;
}

