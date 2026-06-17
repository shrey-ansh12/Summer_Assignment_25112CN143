#include <stdio.h>

int main(void)
{
    int arr1[100];
    int arr2[100];
    int unionArray[200];
    int n1;
    int n2;
    int i;
    int j;
    int size = 0;
    int exists;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);

        exists = 0;
        for (j = 0; j < size; j++) {
            if (unionArray[j] == arr1[i]) {
                exists = 1;
                break;
            }
        }

        if (!exists) {
            unionArray[size] = arr1[i];
            size++;
        }
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);

        exists = 0;
        for (j = 0; j < size; j++) {
            if (unionArray[j] == arr2[i]) {
                exists = 1;
                break;
            }
        }

        if (!exists) {
            unionArray[size] = arr2[i];
            size++;
        }
    }

    printf("Union of arrays:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", unionArray[i]);
    }

    printf("\n");

    return 0;
}