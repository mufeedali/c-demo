// utils.c
#include <stdio.h>
#include <string.h>
#include "utils.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}


int string_length(const char* str) {
    printf("String length debug: String is '%s'\n", str); //Added debug output
    return strlen(str);
}

void reverse_string(char* str) {
    int len = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
