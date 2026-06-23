#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256
#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH];
    int seen[MAX_CHARS] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (seen[ch]) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }

        seen[ch] = 1;
    }

    printf("No repeating character found.\n");
    return 0;
}