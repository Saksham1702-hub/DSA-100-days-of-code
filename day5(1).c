#include <stdio.h>

int main() {
    int p, q;

    // Input size of first log
    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    int a[p];

    // Input first sorted array
    printf("Enter %d sorted arrival times for server 1:\n", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second log
    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    int b[q];

    // Input second sorted array
    printf("Enter %d sorted arrival times for server 2:\n", q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;

    // Print result heading
    printf("\nMerged Arrival Log:\n");

    // Merge and print
    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    // Print remaining elements of first array
    while (i < p) {
        printf("%d ", a[i]);
        i++;
    }

    // Print remaining elements of second array
    while (j < q) {
        printf("%d ", b[j]);
        j++;
    }

    printf("\n"); // New line at end

    return 0;
}
