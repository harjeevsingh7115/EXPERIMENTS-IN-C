#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient: %d, Remainder: %d\n", quotient, remainder);

    return 0;
}
