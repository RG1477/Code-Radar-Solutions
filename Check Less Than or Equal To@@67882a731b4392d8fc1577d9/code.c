#include <stdio.h>
#include <stdbool.h>  // Include for bool, true, false

int main() {
    int num1, num2;
    bool result;  // Boolean variable

    // Input two numbers
    scanf("%d", &num1);

    
    scanf("%d", &num2);

    // Check if num1 is less than or equal to num2
    result = (num1 <= num2);

    // Print result as true or false
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}