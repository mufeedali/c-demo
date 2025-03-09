#ifndef UTILS_H
#define UTILS_H

/**
 * Adds two integers
 */
int add(int a, int b);

/**
 * Subtracts second integer from first
 * Now with improved handling of negative results
 */
int subtract(int a, int b);

/**
 * Returns the length of a string
 * Now with debug output
 */
int string_length(const char* str);

/**
 * Reverses a string in place
 */
void reverse_string(char* str);

#endif // UTILS_H
