#include <stdio.h>

int main() {
    int num1, num2, result;
    
    // Input two integers
   
    scanf("%d", &num1);
    
    scanf("%d", &num2);
    
    // Perform bitwise XOR
    result = num1 ^ num2;
    
    // Print the result in decimal
    printf("%d\n", num1, num2, result);
    
    return 0;
}