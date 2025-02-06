#include <stdio.h>

int main() {
    int num1, num2, result;
    
    // Input two numbers
   
    scanf("%d %d", &num1, &num2);
    
    // Perform bitwise OR operation
    result = num1 | num2;
    
    // Print the result as true or false
    printf("%s\n", (result != 0) ? "True" : "False");
    
    return 0;
}