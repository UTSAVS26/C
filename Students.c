#include <stdio.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int i;

    printf("Enter information for %d students:\n", MAX_STUDENTS);

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nInformation of students:\n");

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

