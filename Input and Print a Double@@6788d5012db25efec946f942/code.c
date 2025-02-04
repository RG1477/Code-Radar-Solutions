#include <stdio.h>

int main() {
    double number;

    // Read the double-precision floating-point number
    scanf("%lf", &number);

    // Print the entered number with 4 decimal places
    printf("You entered: %.4lf\n", number);

    return 0;
}