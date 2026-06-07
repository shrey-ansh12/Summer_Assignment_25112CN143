#include <stdio.h>

int main() {
    int num, original, digit, i;
    int sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}