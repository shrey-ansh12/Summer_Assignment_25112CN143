#include <stdio.h>

int main(void)
{
    int arr1[100];
    int arr2[100];
    int common[100];
    int n1;
    int n2;
    int i;
    int j;
    int k;
    int size = 0;
    int exists;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                exists = 0;

                for (k = 0; k < size; k++) {
                    if (common[k] == arr1[i]) {
                        exists = 1;
                        break;
                    }
                }

                if (!exists) {
                    common[size] = arr1[i];
                    size++;
                }

                break;
            }
        }
    }

    printf("Common elements are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", common[i]);
    }

    if (size == 0) {
        printf("No common elements.");
    }

    printf("\n");

    return 0;
}