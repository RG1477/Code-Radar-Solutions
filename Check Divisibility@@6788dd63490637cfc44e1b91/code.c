#include <stdio.h>

int main() {
    int num, divisor;
    
    scanf("%d %d", &num, &divisor);
    
    if (divisor == 0) {
        printf("Division by zero\n");
    } else {
        printf("%s\n", (num % divisor == 0) ? "Divisible" : "Not Divisible");
    }
    
    return 0;
}