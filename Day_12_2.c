#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;
    int i;

    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }

    return result;
}

int countDigits(int number)
{
    int count = 0;

    if (number == 0) {
        return 1;
    }

    while (number != 0) {
        count++;
        number = number / 10;
    }

    return count;
}

int isArmstrong(int number)
{
    int originalNumber = number;
    int digits = countDigits(number);
    int sum = 0;
    int remainder;

    while (number != 0) {
        remainder = number % 10;
        sum = sum + power(remainder, digits);
        number = number / 10;
    }

    if (sum == originalNumber) {
        return 1;
    }

    return 0;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}