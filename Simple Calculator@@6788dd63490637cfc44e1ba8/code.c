#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    // Taking input: first number, operator, second number
    printf("Enter an expression (e.g., 5 + 3): ");
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    // Performing the operation based on the operator
    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) 
                result = num1 / num2;
            else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default: 
            printf("Error: Invalid operator\n");
            return 1;
    }

    // Printing the result
    printf("Result: %.2lf\n", result);

    return 0;
}