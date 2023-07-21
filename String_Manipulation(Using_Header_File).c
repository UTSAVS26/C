#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void copy_string(char dest[], char src[])
{
    strcpy(dest, src);
}

void concatenate_strings(char str1[], char str2[])
{
    strcat(str1, str2);
}

int compare_strings(char str1[], char str2[])
{
    return strcmp(str1, str2);
}

int string_length(char str[])
{
    return strlen(str);
}

int main()
{
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    int choice;

    printf("Enter first string: ");
    fgets(str1, MAX_LENGTH, stdin);

    printf("Enter second string: ");
    fgets(str2, MAX_LENGTH, stdin);

    printf("\nMenu\n");
    printf("1. Copy string\n");
    printf("2. Concatenate strings\n");
    printf("3. Compare strings\n");
    printf("4. Find length of string\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            copy_string(str1, str2);
            printf("Copied string is: %s\n", str1);
            break;

        case 2:
            concatenate_strings(str1, str2);
            printf("Concatenated string is: %s", str1);
            break;

        case 3:
            if(compare_strings(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 4:
            printf("Length of first string is: %d\n", string_length(str1));
            printf("Length of second string is: %d\n", string_length(str2));
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

