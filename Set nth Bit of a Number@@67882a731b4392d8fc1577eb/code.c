#include <stdio.h>

int main() {
    int number, position;

    // Input the number and the bit position
    scanf("%d %d", &number, &position);

    // Set the nth bit
    int result = number | (1 << position);

    // Output the updated number
    printf("%d\n", result);

    return 0;
}