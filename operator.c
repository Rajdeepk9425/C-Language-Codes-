#include<stdio.h>

int main() {
    int a, b, sum, sub, mul;
    float div; // Use float for division to handle non-integer results

    // Input values once
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Perform operations
    sum = a + b;
    printf("Sum is: %d\n", sum);

    sub = a - b;
    printf("Subtraction is: %d\n", sub);

    mul = a * b;
    printf("Multiplication is: %d\n", mul);

    // Check for division by zero
    if (b != 0) {
        div = (float)a / b; // Cast a to float for precise division
        printf("Division is: %.2f\n", div); // Display result with 2 decimal places
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
