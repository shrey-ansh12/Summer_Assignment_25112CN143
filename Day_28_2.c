#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct Account accounts[MAX_ACCOUNTS];
    int count = 0;
    int choice, i, accountNumber, found;
    float amount;

    do {
        printf("\nBank Account System\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= MAX_ACCOUNTS) {
                    printf("Account limit reached.\n");
                    break;
                }

                printf("Enter account number: ");
                scanf("%d", &accounts[count].accountNumber);

                printf("Enter account holder name: ");
                scanf(" %[^\n]", accounts[count].name);

                printf("Enter initial balance: ");
                scanf("%f", &accounts[count].balance);

                if (accounts[count].balance < 0) {
                    printf("Initial balance cannot be negative.\n");
                } else {
                    count++;
                    printf("Account created successfully.\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No accounts found.\n");
                } else {
                    printf("\nAccount Records:\n");
                    for (i = 0; i < count; i++) {
                        printf("Account Number: %d\n", accounts[i].accountNumber);
                        printf("Name: %s\n", accounts[i].name);
                        printf("Balance: %.2f\n\n", accounts[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter account number: ");
                scanf("%d", &accountNumber);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNumber == accountNumber) {
                        found = 1;

                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);

                        if (amount > 0) {
                            accounts[i].balance += amount;
                            printf("Amount deposited successfully.\n");
                        } else {
                            printf("Invalid amount.\n");
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Account not found.\n");
                }
                break;

            case 4:
                printf("Enter account number: ");
                scanf("%d", &accountNumber);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNumber == accountNumber) {
                        found = 1;

                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);

                        if (amount <= 0) {
                            printf("Invalid amount.\n");
                        } else if (amount > accounts[i].balance) {
                            printf("Insufficient balance.\n");
                        } else {
                            accounts[i].balance -= amount;
                            printf("Amount withdrawn successfully.\n");
                        }
                        break;
                    }
                }

                if (!found) {
                    printf("Account not found.\n");
                }
                break;

            case 5:
                printf("Enter account number to search: ");
                scanf("%d", &accountNumber);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNumber == accountNumber) {
                        printf("Account found:\n");
                        printf("Account Number: %d\n", accounts[i].accountNumber);
                        printf("Name: %s\n", accounts[i].name);
                        printf("Balance: %.2f\n", accounts[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Account not found.\n");
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