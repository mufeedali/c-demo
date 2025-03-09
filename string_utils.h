#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include "utils.h" // Depends on utils.h for string_length

/**
 * Concatenates two strings into a destination buffer
 */
void string_concat(char* dest, const char* src1, const char* src2);

/**
 * Checks if a string is a palindrome
 */
int is_palindrome(const char* str);

/**
 * Converts a string to uppercase
 */
void to_uppercase(char* str);

#endif // STRING_UTILS_H
