#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "math_operations.h"
#include "string_utils.h"

int main() {
    printf("Welcome to the experiment!\n");
    
    int a = 5, b = 3;
    printf("Sum of %d and %d is %d\n", a, b, add(a, b));
    printf("Difference of %d and %d is %d\n", a, b, subtract(a, b));
    printf("Product of %d and %d is %d\n", a, b, multiply(a, b));
    printf("Division of %d by %d is %.2f\n", a, b, divide(a, b));
    printf("Square of %d is %d\n", a, square(a));
    
    // Basic string operations
    char str[] = "Hello";
    printf("Original string: %s\n", str);
    printf("Length of '%s' is %d\n", str, string_length(str));
    
    // Test the reverse_string function
    char str_to_reverse[20];
    strcpy(str_to_reverse, "Reverse Me");
    printf("Before reverse: %s\n", str_to_reverse);
    reverse_string(str_to_reverse);
    printf("After reverse: %s\n", str_to_reverse);
    
    // Test advanced string operations
    char concat_result[50];
    string_concat(concat_result, "Hello, ", "World!");
    printf("Concatenated string: %s\n", concat_result);
    
    char palindrome1[] = "racecar";
    char palindrome2[] = "hello";
    printf("%s is palindrome? %s\n", palindrome1, is_palindrome(palindrome1) ? "Yes" : "No");
    printf("%s is palindrome? %s\n", palindrome2, is_palindrome(palindrome2) ? "Yes" : "No");
    
    char uppercase_str[] = "convert to uppercase";
    printf("Before uppercase: %s\n", uppercase_str);
    to_uppercase(uppercase_str);
    printf("After uppercase: %s\n", uppercase_str);
    
    return 0;
}
