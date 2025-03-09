#include <stdio.h>
#include <ctype.h>
#include "string_utils.h"

/**
 * Concatenates two strings into a destination buffer
 */
void string_concat(char* dest, const char* src1, const char* src2) {
    int i = 0, j = 0;
    
    // Copy first string
    while (src1[j] != 
