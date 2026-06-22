#include <stdio.h>

int main() {
    char str[200];
    int frequency[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            frequency[(unsigned char)str[i]]++;
        }
    }

    printf("Character frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c = %d\n", i, frequency[i]);
        }
    }

    return 0;
}