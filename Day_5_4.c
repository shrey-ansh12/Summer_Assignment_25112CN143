#include <stdio.h>

int main() {
    int num, i, largest = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num % 2 == 0) {
        largest = 2;
        num = num / 2;
    }

    for (i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest = i;
            num = num / i;
        }
    }

    if (num > 2) {
        largest = num;
    }

    if (largest != -1)
        printf("Largest prime factor = %d\n", largest);
    else
        printf("No prime factor found.\n");

    return 0;
}