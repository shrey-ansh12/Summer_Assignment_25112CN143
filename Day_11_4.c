#include <stdio.h>

long long factorial(int number)
{
    long long result = 1;
    int i;

    for (i = 1; i <= number; i++) {
        result = result * i;
    }

    return result;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial = %lld\n", factorial(number));
    }

    return 0;
}