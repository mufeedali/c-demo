#include "utils.h"

/**
 * Adds two integers
 */
int add(int a, int b) {
    return a + b;
}

/**
 * Subtracts second integer from first
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * Returns the length of a string
 */
int string_length(const char* str) {
    int length = 0;
    while (str[length] != 
