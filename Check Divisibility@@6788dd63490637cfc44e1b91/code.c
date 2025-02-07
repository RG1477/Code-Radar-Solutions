#include <stdio.h>

int main() {
    int num, divisor;
    scanf("%d %d", &num, &divisor);
    printf("%s\n", (num % divisor == 0) ? "Divisible" : "Not Divisible");
    return 0;
}