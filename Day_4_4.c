#include <stdio.h>

int main() {
    int start, end, num, original, remainder, result;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        original = num;
        result = 0;

        while (original != 0) {
            remainder = original % 10;
            result += remainder * remainder * remainder;
            original /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}