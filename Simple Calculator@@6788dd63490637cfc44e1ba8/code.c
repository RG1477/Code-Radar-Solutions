#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    // Taking input from the user
    printf("");
    scanf("%lf %c %lf", &num1, &op, &num2);

    // Performing the operation based on the operator
    switch (op) {
        case '+': 
            result = num1 + num2; 
            break;
        case '-': 
            result = num1 - num2; 
            break;
        case '*': 
            result = num1 * num2; 
            break;
        case '/': 
            if (num2 != 0) 
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default: 
            printf("Error: Invalid operator. Use +, -, *, or /.\n");
            return 1;
    }

    // Printing the result
    printf("Result: %.2lf\n", result);

    return 0;
}