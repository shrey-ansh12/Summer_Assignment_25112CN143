#include <stdio.h>

int isPalindrome(int number)
{
    int originalNumber = number;
    int reversedNumber = 0;
    int remainder;

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    if (originalNumber == reversedNumber) {
        return 1;
    }

    return 0;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}