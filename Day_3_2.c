#include <stdio.h>

int main() {
    int start, end, num, i, isPrime;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        if (num <= 1) {
            continue;
        }

        isPrime = 1;

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}