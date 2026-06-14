#include <stdio.h>

int main(void)
{
    int arr[100];
    int n;
    int i;
    int key;
    int frequency = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            frequency++;
        }
    }

    printf("Frequency of %d = %d\n", key, frequency);

    return 0;
}