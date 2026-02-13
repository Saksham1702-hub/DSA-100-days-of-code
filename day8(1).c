#include <stdio.h>

// Recursive function
int power(int a, int b) {
    if (b == 0) {
        return 1;   // Base case
    }
    return a * power(a, b - 1);  // Recursive call
}

int main() {
    int a, b, result;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    result = power(a, b);

    printf("\n%d raised to power %d is: %d\n", a, b, result);

    return 0;
}
