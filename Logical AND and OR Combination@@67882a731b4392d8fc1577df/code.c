#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    
    scanf("%d %d", &num1, &num2);
    
    // Check logical AND and OR operations
    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are greater than zero (AND condition): true\n");
    } else {
        printf("Both numbers are greater than zero (AND condition): false\n");
    }
    
    if (num1 > 0 || num2 > 0) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}
