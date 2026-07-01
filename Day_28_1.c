#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int issued;
};

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice, i, id, found;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_BOOKS) {
                    printf("Library is full.\n");
                    break;
                }

                printf("Enter book ID: ");
                scanf("%d", &books[count].id);

                printf("Enter book title: ");
                scanf(" %[^\n]", books[count].title);

                printf("Enter author name: ");
                scanf(" %[^\n]", books[count].author);

                books[count].issued = 0;
                count++;

                printf("Book added successfully.\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No books available.\n");
                } else {
                    printf("\nBook Records:\n");
                    for (i = 0; i < count; i++) {
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        printf("Status: %s\n\n",
                               books[i].issued ? "Issued" : "Available");
                    }
                }
                break;

            case 3:
                printf("Enter book ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (books[i].id == id) {
                        printf("Book found:\n");
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        printf("Status: %s\n",
                               books[i].issued ? "Issued" : "Available");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 4:
                printf("Enter book ID to issue: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (books[i].id == id) {
                        found = 1;

                        if (books[i].issued) {
                            printf("Book is already issued.\n");
                        } else {
                            books[i].issued = 1;
                            printf("Book issued successfully.\n");
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 5:
                printf("Enter book ID to return: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (books[i].id == id) {
                        found = 1;

                        if (!books[i].issued) {
                            printf("Book is already available.\n");
                        } else {
                            books[i].issued = 0;
                            printf("Book returned successfully.\n");
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}