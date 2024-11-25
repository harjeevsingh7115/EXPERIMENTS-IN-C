#include <stdio.h>

// Recursive factorial function
int factorial(int n) {
    if (n <= 1)
        return 1; // Base case
    return n * factorial(n - 1); // Recursive relation
}

int main() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %d\n", n, factorial(n));
    }

    return 0;
}
