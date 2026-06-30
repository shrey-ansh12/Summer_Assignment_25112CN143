#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice, i, id, found;

    do {
        printf("\nSalary Management System\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_EMPLOYEES) {
                    printf("Salary record is full.\n");
                    break;
                }

                printf("Enter employee ID: ");
                scanf("%d", &employees[count].id);

                printf("Enter employee name: ");
                scanf(" %[^\n]", employees[count].name);

                printf("Enter basic salary: ");
                scanf("%f", &employees[count].basicSalary);

                printf("Enter allowance: ");
                scanf("%f", &employees[count].allowance);

                printf("Enter deduction: ");
                scanf("%f", &employees[count].deduction);

                employees[count].netSalary =
                    employees[count].basicSalary +
                    employees[count].allowance -
                    employees[count].deduction;

                count++;
                printf("Salary record added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No salary records found.\n");
                } else {
                    printf("\nSalary Records:\n");
                    for (i = 0; i < count; i++) {
                        printf("ID: %d\n", employees[i].id);
                        printf("Name: %s\n", employees[i].name);
                        printf("Basic Salary: %.2f\n", employees[i].basicSalary);
                        printf("Allowance: %.2f\n", employees[i].allowance);
                        printf("Deduction: %.2f\n", employees[i].deduction);
                        printf("Net Salary: %.2f\n\n", employees[i].netSalary);
                    }
                }
                break;

            case 3:
                printf("Enter employee ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        printf("Salary record found:\n");
                        printf("ID: %d\n", employees[i].id);
                        printf("Name: %s\n", employees[i].name);
                        printf("Basic Salary: %.2f\n", employees[i].basicSalary);
                        printf("Allowance: %.2f\n", employees[i].allowance);
                        printf("Deduction: %.2f\n", employees[i].deduction);
                        printf("Net Salary: %.2f\n", employees[i].netSalary);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Salary record not found.\n");
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