#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    
    scanf("%d %d", &num1, &num2);
    
    // Check if both numbers are greater than zero
    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are greater than zero.\n");
    } else {
        printf("At least one number is not greater than zero.\n");
    }
    
    return 0;
}
