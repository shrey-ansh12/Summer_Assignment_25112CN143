#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d", N, sum);

    return 0;
}