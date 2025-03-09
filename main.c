#include <stdio.h>
#include "utils.h"
#include "math_operations.h"
#include "string_utils.h"

int main() {
    printf("Testing utils functions\n");
    printf("add(5, 3) = %d\n", add(5, 3));
    printf("subtract(5, 3) = %d\n", subtract(5, 3));
    printf("string_length(\"hello\") = %d\n", string_length("hello"));
    char str[] = "hello";
    reverse_string(str);
    printf("reverse_string(\"hello\") = %s\n", str);

    printf("\nTesting math_operations functions\n");
    printf("multiply(5, 3) = %d\n", multiply(5, 3));
    printf("divide(6, 3) = %f\n", divide(6, 3));
    printf("divide(6, 0) = %f\n", divide(6, 0));
    printf("square(5) = %d\n", square(5));

    printf("\nTesting string_utils functions\n");
    char dest[20];
    string_concat(dest, "hello", "world");
    printf("string_concat(\"hello\", \"world\") = %s\n", dest);
    printf("is_palindrome(\"madam\") = %d\n", is_palindrome("madam"));
    char upper[] = "hello";
    to_uppercase(upper);
    printf("to_uppercase(\"hello\") = %s\n", upper);
    return 0;
}
