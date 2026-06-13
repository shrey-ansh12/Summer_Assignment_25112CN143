#include <stdio.h>

int main(void)
{
    int arr[100];
    int n;
    int i;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements = %d\n", evenCount);
    printf("Odd elements = %d\n", oddCount);

    return 0;
}