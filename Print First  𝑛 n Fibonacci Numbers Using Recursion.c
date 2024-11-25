#include <stdio.h>

// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n; // Base cases
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive relation
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
