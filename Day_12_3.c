#include <stdio.h>

void fibonacci(int terms)
{
    int first = 0;
    int second = 1;
    int next;
    int i;

    for (i = 1; i <= terms; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main(void)
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive number of terms.\n");
    } else {
        printf("Fibonacci series: ");
        fibonacci(terms);
    }

    return 0;
}