#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH];
    char longest[MAX_LENGTH];
    char current[MAX_LENGTH];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    longest[0] = '\0';

    while (str[i] != '\0') {
        if (!isspace((unsigned char)str[i])) {
            current[j++] = str[i];
        } else {
            current[j] = '\0';

            if (j > maxLength) {
                maxLength = j;
                strcpy(longest, current);
            }

            j = 0;
        }

        i++;
    }

    current[j] = '\0';

    if (j > maxLength) {
        maxLength = j;
        strcpy(longest, current);
    }

    if (maxLength > 0) {
        printf("Longest word: %s\n", longest);
        printf("Length: %d\n", maxLength);
    } else {
        printf("No word found.\n");
    }

    return 0;
}