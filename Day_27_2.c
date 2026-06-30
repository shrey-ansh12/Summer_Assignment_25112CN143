#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice, i, id, found;

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_EMPLOYEES) {
                    printf("Employee record is full.\n");
                    break;
                }

                printf("Enter employee ID: ");
                scanf("%d", &employees[count].id);

                printf("Enter name: ");
                scanf(" %[^\n]", employees[count].name);

                printf("Enter department: ");
                scanf(" %[^\n]", employees[count].department);

                printf("Enter salary: ");
                scanf("%f", &employees[count].salary);

                count++;
                printf("Employee added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\nEmployee Records:\n");
                    for (i = 0; i < count; i++) {
                        printf("ID: %d\n", employees[i].id);
                        printf("Name: %s\n", employees[i].name);
                        printf("Department: %s\n", employees[i].department);
                        printf("Salary: %.2f\n\n", employees[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter employee ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        printf("Employee found:\n");
                        printf("ID: %d\n", employees[i].id);
                        printf("Name: %s\n", employees[i].name);
                        printf("Department: %s\n", employees[i].department);
                        printf("Salary: %.2f\n", employees[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}