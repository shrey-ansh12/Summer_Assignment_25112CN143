#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    float marks[5], total = 0, percentage;
    int i;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;

    printf("\n----- Marksheet -----\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", rollNo);

    for (i = 0; i < 5; i++) {
        printf("Subject %d Marks: %.2f\n", i + 1, marks[i]);
    }

    printf("Total Marks: %.2f/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A+\n");
    } else if (percentage >= 80) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B\n");
    } else if (percentage >= 60) {
        printf("Grade: C\n");
    } else if (percentage >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}