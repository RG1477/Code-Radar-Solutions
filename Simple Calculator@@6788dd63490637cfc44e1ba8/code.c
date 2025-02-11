#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    scanf("%lf %lf", &num1, &num2);
    scanf(" %c", &operator);
    switch (operator) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("error\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("%.f\n", result);