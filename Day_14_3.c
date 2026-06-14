#include <stdio.h>

int main(void)
{
    int arr[100];
    int n;
    int i;
    int largest;
    int secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest) {
        printf("Second largest element does not exist.\n");
    } else {
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}