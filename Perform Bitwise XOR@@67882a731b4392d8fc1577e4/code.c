#include <stdio.h>

int main() {
    int num1, num2, result;
    
    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    // Perform bitwise XOR
    result = num1 ^ num2;
    
    // Print the result in decimal
    printf("The result of %d ^ %d is: %d\n", num1, num2, result);
    
    return 0;
}