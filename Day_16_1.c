#include <stdio.h>

int main(void)
{
    int arr[100];
    int n;
    int i;
    int sum = 0;
    int expectedSum;
    int missingNumber;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers from 1 to %d with one number missing:\n", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    expectedSum = n * (n + 1) / 2;
    missingNumber = expectedSum - sum;

    printf("Missing number = %d\n", missingNumber);

    return 0;
}