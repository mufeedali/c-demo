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
        return 0; // Error case
    }
    return (float)a / b;
}

/**
 * Calculates the square of a number
 */
int square(int a) {
    return a * a;
}
