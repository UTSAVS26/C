#include <stdio.h>
#include <ctype.h>

void countCharacters(FILE *file, int *lowercase, int *uppercase, int *numbers, int *special) {
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        if (islower(ch)) {
            (*lowercase)++;
        } else if (isupper(ch)) {
            (*uppercase)++;
        } else if (isdigit(ch)) {
            (*numbers)++;
        } else {
            (*special)++;
        }
    }
}

int main() {
    FILE *file = fopen("input(inbuilt).txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int lowercase = 0;
    int uppercase = 0;
    int numbers = 0;
    int special = 0;

    countCharacters(file, &lowercase, &uppercase, &numbers, &special);

    printf("Lowercase letters: %d\n", lowercase);
    printf("Uppercase letters: %d\n", uppercase);
    printf("Numbers: %d\n", numbers);
    printf("Special characters: %d\n", special);

    fclose(file);
    return 0;
}

