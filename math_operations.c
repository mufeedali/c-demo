#include <stdio.h>
#include "math_operations.h"

/**
 * Multiplies two integers
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * Divides first integer by second
 */
 float divide(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n"); // Use stderr for error messages
        return -1; // Return an error code
    }
    return (float)a / b;
}

/**
 * Calculates the power of a number
 */
int power(int base, int exponent) {
    int result = 1;
    int i;
    
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

/**
 * Calculates factorial of a number
 */
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    
    return n * factorial(n - 1);
}

int square(int a) {
    return a * a;
}
