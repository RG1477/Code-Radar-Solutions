#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n");  // Special case: All bits are zero
        return 0;
    }

    int count = 0;
    unsigned int mask = 1 << 31;  // Start with the MSB (Most Significant Bit)

    while ((num & mask) == 0) {  // Check if the MSB is 0
        count++;
        mask >>= 1;  // Shift mask to the right
    }

    printf("%d\n", count);  // Output the count of leading zeros

    return 0;
}