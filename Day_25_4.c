#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    char temp[MAX_LENGTH];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();

    printf("Enter words:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}