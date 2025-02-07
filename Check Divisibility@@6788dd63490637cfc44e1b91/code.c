#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%s\n", (num % 5 == 0 && num % 11 == 0) ? "Divisible" : "Not Divisible");
    return 0;
}