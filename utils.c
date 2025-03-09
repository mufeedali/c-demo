#include "utils.h"
#include <stdio.h>

/**
 * Adds two integers
 */
int add(int a, int b) {
    return a + b;
}

/**
 * Subtracts second integer from first
 * Now with improved handling of negative results
 */
int subtract(int a, int b) {
    int result = a - b;
    // Special handling for negative results
    if (result < 0) {
        printf("Warning: Result is negative (%d)\n", result);
    }
    return result;
}

/**
 * Returns the length of a string
 * Now with debug output
 */
int string_length(const char* str) {
    int length = 0;
    printf("Debug: Calculating length of string\n");
    while (str[length] != 
