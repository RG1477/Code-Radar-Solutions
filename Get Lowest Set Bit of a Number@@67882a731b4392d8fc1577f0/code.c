#include <stdio.h>

int main() {
    int num, position = 0;

    scanf("%d", &num);

    if (num == 0) {
        printf("-1\n"); // No set bit found
        return 0;
    }

    while ((num & 1) == 0) { // Check if the LSB is 0
        num >>= 1; // Right shift to check the next bit
        position++;
    }

    printf("%d\n", position); // Output the position of the lowest set bit

    return 0;
}