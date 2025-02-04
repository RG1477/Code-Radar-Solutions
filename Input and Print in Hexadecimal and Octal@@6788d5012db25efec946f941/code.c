#include <stdio.h>

int main() {
    int num;

    // Taking input
    scanf("%d", &num);

    // Printing hexadecimal and octal values
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}