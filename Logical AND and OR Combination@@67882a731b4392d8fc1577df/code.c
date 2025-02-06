#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
   
    scanf("%d %d", &num1, &num2);
    
    // Check logical AND operation
    printf("%s\n", (num1 > 0 && num2 > 0) ? "true" : "false");
    
    // Check logical OR operation
    printf("%s\n", (num1 > 0 || num2 > 0) ? "true" : "false");
    
    return 0;
}
