#include <stdio.h>

int main() {
    int n, i;
    int left, right, temp;

    // Input size
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Two-pointer approach
    left = 0;
    right = n - 1;

    while(left < right) {
        // Swap
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // Move pointers
        left++;
        right--;
    }

    // Print reversed array
    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
