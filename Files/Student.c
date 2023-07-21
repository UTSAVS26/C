#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

void writeRecord(FILE *file, struct Student student) {
    fwrite(&student, sizeof(struct Student), 1, file);
}

void readRecords(FILE *file) {
    struct Student student;

    printf("Student Records:\n");
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Age: %d\n", student.age);
        printf("GPA: %.2f\n", student.gpa);
        printf("-----------------------\n");
    }
}

void editRecord(FILE *file, int recordNumber, struct Student newStudent) {
    fseek(file, recordNumber * sizeof(struct Student), SEEK_SET);
    fwrite(&newStudent, sizeof(struct Student), 1, file);
}

int main() {
    FILE *file = fopen("student.bin", "ab+");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int option;
    struct Student student;
    int recordNumber;

    do {
        printf("\nMenu:\n");
        printf("1. Add a student record\n");
        printf("2. Read student records\n");
        printf("3. Edit a student record\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter student name: ");
                scanf(" %[^\n]s", student.name);
                printf("Enter student age: ");
                scanf("%d", &student.age);
                printf("Enter student GPA: ");
                scanf("%f", &student.gpa);

                writeRecord(file, student);
                printf("Student record added successfully.\n");
                break;
            case 2:
                fseek(file, 0, SEEK_SET);
                readRecords(file);
                break;
            case 3:
                printf("Enter the record number to edit (starting from 0): ");
                scanf("%d", &recordNumber);

                fseek(file, 0, SEEK_END);
                int totalRecords = ftell(file) / sizeof(struct Student);
                if (recordNumber >= totalRecords) {
                    printf("Invalid record number.\n");
                    break;
                }

                printf("Enter new student name: ");
                scanf(" %[^\n]s", student.name);
                printf("Enter new student age: ");
                scanf("%d", &student.age);
                printf("Enter new student GPA: ");
                scanf("%f", &student.gpa);

                editRecord(file, recordNumber, student);
                printf("Student record edited successfully.\n");
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (option != 4);

    fclose(file);
    return 0;
}

