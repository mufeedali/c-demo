#include <stdio.h>
#include "utils.h"

int main() {
    printf("Welcome to the experiment!\n");
    
    int a = 5, b = 3;
    printf("Sum of %d and %d is %d\n", a, b, add(a, b));
    printf("Difference of %d and %d is %d\n", a, b, subtract(a, b));
    
    char str[] = "Hello";
    printf("Length of '%s' is %d\n", str, string_length(str));
    
    return 0;
}
