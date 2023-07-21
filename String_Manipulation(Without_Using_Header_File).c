#include <stdio.h>

void copy_string(char str1[], char str2[]) {
    int i;

    for(i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
    }

    str1[i] = '\0';
}

void concatenate_strings(char str1[], char str2[]) {
    int i, j;

    i = 0;
    while(str1[i] != '\0') {
        i++;
    }

    j = 0;
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int compare_strings(char str1[], char str2[]) {
    int i = 0;

    while(str1[i] == str2[i]) {
        if(str1[i] == '\0') {
            return 0;
        }
        i++;
    }

    return str1[i] - str2[i];
}

int find_length(char str[]) {
    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    int choice;
    char string1[100], string2[100];

    printf("Enter first string: ");
    scanf("%s", string1);
    printf("Enter second string: ");
    scanf("%s", string2);

    do {
        printf("\n\n");
        printf("MENU:\n");
        printf("1. Copy string\n");
        printf("2. Concatenate strings\n");
        printf("3. Compare strings\n");
        printf("4. Find length of a string\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                copy_string(string1, string2);
                printf("After copying, the first string is: %s\n", string1);
                break;
            case 2:
                concatenate_strings(string1, string2);
                printf("After concatenating, the first string is: %s\n", string1);
                break;
            case 3:
                if(compare_strings(string1, string2) == 0) {
                    printf("The strings are equal.\n");
                } else {
                    printf("The strings are not equal.\n");
                }
                break;
            case 4:
                printf("The length of the first string is: %d\n", find_length(string1));
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}

