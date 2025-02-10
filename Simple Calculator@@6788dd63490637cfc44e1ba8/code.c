#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char op;
    int intNum1, intNum2;  // For modulus operation

    while (1) {
        printf("\nEnter an expression (e.g., 5 + 3) or 'q' to quit: ");
        
        if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
            printf("Exiting...\n");
            break; // Exit loop if input is invalid
        }

        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': 
                if (num2 != 0) 
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero\n");
                    continue;
                }
                break;
            case '%': // Handling modulus (only for integers)
                intNum1 = (int)num1;
                intNum2 = (int)num2;
                if (intNum2 != 0)
                    result = intNum1 % intNum2;
                else {
                    printf("Error: Modulo by zero\n");
                    continue;
                }
                break;
            case '^': result = pow(num1, num2); break; // Exponentiation
            default: 
                printf("Error: Invalid operator\n");
                continue;
        }

        printf("Result: %.2lf\n", result);
    }

    return 0;
}