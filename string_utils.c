// string_utils.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "string_utils.h"

void string_concat(char* dest, const char* src1, const char* src2) {
    printf("testing some changes");
    printf("testing further");
    strcpy(dest, src1);
    strcat(dest, src2);
}


int is_palindrome(const char* str) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}


void to_uppercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}
