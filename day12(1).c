#include <stdio.h>

int main() {
    int m, n;
    int A[50][50];
    int isSymmetric = 1;   // assume true

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    // If not square matrix
    if (m != n) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    // Input matrix
    printf("Enter matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check symmetry
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {

            if (A[i][j] != A[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    // Output
    if (isSymmetric)
        printf("Symmetric Matrix\n");
    else
        printf("Not a Symmetric Matrix\n");

    return 0;
}
