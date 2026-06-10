#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;

    for (i = n; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}