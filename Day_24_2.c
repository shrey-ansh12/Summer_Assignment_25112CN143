#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH];
    int i, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (str[0] == '\0') {
        printf("Compressed string: \n");
        return 0;
    }

    printf("Compressed string: ");

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");
    return 0;
}