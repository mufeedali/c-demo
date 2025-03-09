#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "math_operations.h"

int main() {
    printf("Welcome to the experiment!\n");
    
    int a = 5, b = 3;
    printf("Sum of %d and %d is %d\n", a, b, add(a, b));
    printf("Difference of %d and %d is %d\n", a, b, subtract(a, b));
    printf("Product of %d and %d is %d\n", a, b, multiply(a, b));
    printf("Division of %d by %d is %.2f\n", a, b, divide(a, b));
    printf("Square of %d is %d\n", a, square(a));
    
    char str[] = "Hello";
    printf("Original string: %s\n", str);
    printf("Length of '%s' is %d\n", str, string_length(str));
    
    // Test the new reverse_string function
    char str_to_reverse[20];
    strcpy(str_to_reverse, "Reverse Me");
    printf("Before reverse: %s\n", str_to_reverse);
    reverse_string(str_to_reverse);
    printf("After reverse: %s\n", str_to_reverse);
    
    return 0;
}
