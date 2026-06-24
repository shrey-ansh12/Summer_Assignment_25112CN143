#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    char combined[MAX_LENGTH * 2];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("The second string is not a rotation of the first string.\n");
        return 0;
    }

    strcpy(combined, str1);
    strcat(combined, str1);

    if (strstr(combined, str2) != NULL) {
        printf("The second string is a rotation of the first string.\n");
    } else {
        printf("The second string is not a rotation of the first string.\n");
    }

    return 0;
}