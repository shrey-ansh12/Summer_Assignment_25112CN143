#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice, i, rollNo, found;

    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_STUDENTS) {
                    printf("Student record is full.\n");
                    break;
                }

                printf("Enter roll number: ");
                scanf("%d", &students[count].rollNo);

                printf("Enter name: ");
                scanf(" %[^\n]", students[count].name);

                printf("Enter marks: ");
                scanf("%f", &students[count].marks);

                count++;
                printf("Student added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No student records found.\n");
                } else {
                    printf("\nStudent Records:\n");
                    for (i = 0; i < count; i++) {
                        printf("Roll No: %d\n", students[i].rollNo);
                        printf("Name: %s\n", students[i].name);
                        printf("Marks: %.2f\n\n", students[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &rollNo);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (students[i].rollNo == rollNo) {
                        printf("Student found:\n");
                        printf("Roll No: %d\n", students[i].rollNo);
                        printf("Name: %s\n", students[i].name);
                        printf("Marks: %.2f\n", students[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found.\n");
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