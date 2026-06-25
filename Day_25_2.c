#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256
#define MAX_LENGTH 1000

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    int count1[MAX_CHARS] = {0};
    int count2[MAX_CHARS] = {0};
    int i, found = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]] = 1;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]] = 1;
    }

    printf("Common characters: ");

    for (i = 0; i < MAX_CHARS; i++) {
        if (count1[i] && count2[i]) {
            printf("%c ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }

    printf("\n");
    return 0;
}