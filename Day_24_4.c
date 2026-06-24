#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256
#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH];
    char result[MAX_LENGTH];
    int seen[MAX_CHARS] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (!seen[ch]) {
            result[j++] = str[i];
            seen[ch] = 1;
        }
    }

    result[j] = '\0';

    printf("String after removing duplicate characters: %s\n", result);

    return 0;
}