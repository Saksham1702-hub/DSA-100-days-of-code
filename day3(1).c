#include <stdio.h>

int main() {
    int n, k;
    int i;
    int comparisons = 0;
    int found = 0;

    // Ask for size
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    // Ask for elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for key
    printf("Enter key to search: ");
    scanf("%d", &k);

    // Linear Search
    for(i = 0; i < n; i++) {
        comparisons++;

        if(arr[i] == k) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    // If not found
    if(found == 0) {
        printf("Not Found\n");
    }

    // Print comparison count
    printf("Comparisons = %d\n", comparisons);

    return 0;
}
