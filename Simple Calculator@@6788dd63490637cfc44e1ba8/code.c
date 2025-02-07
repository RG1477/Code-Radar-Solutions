#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    // Taking input: first number, operator, second number
    scanf("%lf %c %lf", &num1, &op, &num2);

    // Performing the operation based on the operator
    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) 
                result = num1 / num2;
            else {
                printf("Error\n"); // Handling division by zero
                return 0;
            }
            break;
        default: 
            printf("Invalid\n"); // Handling invalid operators
            return 0;
    }

    // Printing the result
    printf("%.2lf\n", result);

    return 0;
}