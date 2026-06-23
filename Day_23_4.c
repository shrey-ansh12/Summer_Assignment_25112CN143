#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256
#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH];
    int count[MAX_CHARS] = {0};
    int max_count = 0;
    unsigned char max_char = '\0';
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (str[0] == '\0') {
        printf("String is empty.\n");
        return 0;
    }

    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (count[ch] > max_count) {
            max_count = count[ch];
            max_char = ch;
        }
    }

    printf("Maximum occurring character: %c\n", max_char);
    printf("Frequency: %d\n", max_count);

    return 0;
}