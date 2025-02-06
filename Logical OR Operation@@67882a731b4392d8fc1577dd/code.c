#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    
    scanf("%d %d", &num1, &num2);
    
    // Check if at least one number is greater than zero
    if (num1 > 0 || num2 > 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}

