#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    char name[50];
    int age;
    char designation[50];
} Employee;

void printManagers(Employee employees[], int size, FILE *file) {
	int i;
    fprintf(file, "Managers:\n");
    for (i = 0; i < size; i++) {
        if (strcmp(employees[i].designation, "Manager") == 0) {
            fprintf(file, "Name: %s\n", employees[i].name);
            fprintf(file, "Age: %d\n", employees[i].age);
            fprintf(file, "Designation: %s\n", employees[i].designation);
            fprintf(file, "\n");
        }
    }
}

void printWorkers(Employee employees[], int size, FILE *file) {
	int i;
    fprintf(file, "Workers:\n");
    for (i = 0; i < size; i++) {
        if (strcmp(employees[i].designation, "Worker") == 0) {
            fprintf(file, "Name: %s\n", employees[i].name);
            fprintf(file, "Age: %d\n", employees[i].age);
            fprintf(file, "Designation: %s\n", employees[i].designation);
            fprintf(file, "\n");
        }
    }
}

int main() {
    Employee employees[MAX_SIZE];
    int numEmployees;
    int i;

    // Read the number of employees from the user
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Read employee data
    for (i = 0; i < numEmployees; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Designation (Manager/Worker): ");
        scanf("%s", employees[i].designation);
    }

    // Print data of managers to a file
    FILE *managerFile = fopen("managers.txt", "a");
    if (managerFile == NULL) {
        printf("Error opening managers.txt file.\n");
        return 1;
    }
    printManagers(employees, numEmployees, managerFile);
    fclose(managerFile);

    // Print data of workers to a file
    FILE *workerFile = fopen("workers.txt", "a");
    if (workerFile == NULL) {
        printf("Error opening workers.txt file.\n");
        return 1;
    }
    printWorkers(employees, numEmployees, workerFile);
    fclose(workerFile);

    printf("Data written to files successfully.\n");

    return 0;
}

