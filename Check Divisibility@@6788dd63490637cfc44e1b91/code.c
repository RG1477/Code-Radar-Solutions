#include <stdio.h>

int main() {
    int num, divisor;
    scanf("%d %d", &num, &divisor);
    printf("%s\n", (num % divisor == 0) ? "divisible" : "not divisible");
    return 0;
}