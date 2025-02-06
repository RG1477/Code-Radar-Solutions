#include <stdio.h>

int main() {
    int num1, num2, result;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Perform bitwise AND operation
    result = num1 & num2;
    
    // Print the result
    printf("%d\n", result);
    
    return 0;
}
