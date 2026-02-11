#include <stdio.h>

int main() {
    int n;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nUnique Elements:\n");

    // First element is always unique
    if (n > 0) {
        printf("%d ", arr[0]);
    }

    // Print only when current is different from previous
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
