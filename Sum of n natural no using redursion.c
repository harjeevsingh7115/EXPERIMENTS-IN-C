#include <stdio.h>

// Function to calculate the sum of n natural numbers using recursion
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0; // Base case: sum of 0 numbers is 0
    return n + sumOfNaturalNumbers(n - 1); // Recursive case
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
    } else {
        int result = sumOfNaturalNumbers(n);
        printf("The sum of first %d natural numbers is: %d\n", n, result);
    }

    return 0;
}
