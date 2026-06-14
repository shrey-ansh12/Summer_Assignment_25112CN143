#include <stdio.h>

int main(void)
{
    int arr[100];
    int n;
    int i;
    int j;
    int k;
    int isDuplicate;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    for (i = 0; i < n; i++) {
        isDuplicate = 0;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        for (k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = 0;
                break;
            }
        }

        if (isDuplicate) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No duplicate elements found.");
    }

    printf("\n");

    return 0;
}