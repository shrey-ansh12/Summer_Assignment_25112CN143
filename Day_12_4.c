#include <stdio.h>

int isPerfect(int number)
{
    int sum = 0;
    int i;

    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number && number > 0) {
        return 1;
    }

    return 0;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}