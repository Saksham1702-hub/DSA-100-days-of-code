#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[100];   // Maximum size of array

    // Read size of array
    printf("Enter the number of terms in array: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position (1-based)
    printf("Enter position to insert (1-based): ");
    scanf("%d", &pos);

    // Read element to insert
    printf("Enter element to insert: ");
    scanf("%d", &x);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at correct position
    arr[pos - 1] = x;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
